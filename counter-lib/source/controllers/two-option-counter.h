#ifndef TWOOPTIONCOUNTER_H
#define TWOOPTIONCOUNTER_H

#include <QObject>
#include <QScopedPointer>
#include <QString>

#include <fstream>
#include <QFile>
#include <QTextStream>
#include <QtWidgets/QMessageBox>

#include <QtWidgets/QFileDialog>
#include <QTimer>
#include <QTime>
#include <QDebug>
#include <string>


#include <controllers/option-repository.h>
#include <counter-lib_global.h>
#include <controllers/navigation-controller.h>

namespace counter {
namespace controllers {
class COUNTERLIBSHARED_EXPORT TwoOptionCounter : public QObject
{
    Q_OBJECT
    Q_PROPERTY( QString ui_firstOption READ getFirstOption WRITE incrFirstOption NOTIFY notifyFirstOptionChanged)
    Q_PROPERTY( QString ui_secondOption READ getSecondOption WRITE incrSecondOption NOTIFY secondFirstOptionChanged)

public:
    explicit TwoOptionCounter(QObject *parent = nullptr);
    const QString getFirstOption()const  {return QString::number(uint(first_option_rep.back().position));}
    const QString getSecondOption()const {return QString::number(uint(second_option_rep.back().position));}

    void timing() {this->time_of_work++;}

    unsigned int getTimeOfWork() const {return time_of_work;}

    QString saveToFile();

    void incrFirstOption(QString first) {
        first_option_rep.push_back(Repository{(first_option_rep.back().position)+1, getTimeOfWork(),QTime::currentTime()});
    emit notifyFirstOptionChanged();
    }

    void incrSecondOption(QString second) {
        second_option_rep.push_back(Repository{(second_option_rep.back().position)+1, getTimeOfWork(), QTime::currentTime()});
    emit secondFirstOptionChanged();
    }

    void initialRepAndTiming();

    Q_INVOKABLE void firstOptionClicked() {incrFirstOption("empty");}
    Q_INVOKABLE void secondOptionClicked() {incrSecondOption("empty");}
    Q_INVOKABLE void saveToFileClicked();


signals:
    void notifyFirstOptionChanged();
    void secondFirstOptionChanged();


public slots:

private:

    QTimer *timer;
    unsigned int time_of_work =0;

    QString first_option_rep_name = "Mianowicie";
    QString second_option_rep_name = "Prosze Państwa";

    std::vector<Repository> first_option_rep;
    std::vector<Repository> second_option_rep;

};

}
}
#endif // TWOOPTIONCOUNTER_H
