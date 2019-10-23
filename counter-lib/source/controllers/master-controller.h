#ifndef MASTERCONTROLLER_H
#define MASTERCONTROLLER_H

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
#include <QGuiApplication>
#include <QKeyEvent>


#include <controllers/option-repository.h>
#include <counter-lib_global.h>
#include <controllers/navigation-controller.h>

namespace counter {
namespace controllers {

class COUNTERLIBSHARED_EXPORT MasterController : public QObject
{
	Q_OBJECT
    Q_PROPERTY( QString ui_firstOption READ getFirstOption WRITE incrFirstOption NOTIFY notifyFirstOptionChanged)
    Q_PROPERTY( QString ui_secondOption READ getSecondOption WRITE incrSecondOption NOTIFY secondFirstOptionChanged)


//    Q_PROPERTY(QUrl source READ source WRITE setSource NOTIFY sourceChanged)
//    Q_PROPERTY(QString text READ text WRITE setText NOTIFY textChanged)

//
    Q_PROPERTY( counter::controllers::NavigationController* ui_navigationController READ navigationController CONSTANT )
public:
    explicit MasterController(QObject* parent = nullptr);
	~MasterController();

	NavigationController* navigationController();
    const QString getFirstOption()const  {return QString::number(uint(first_option_rep.back().position));}
    const QString getSecondOption()const {return QString::number(uint(second_option_rep.back().position));}

    unsigned int getTimeOfWork() const {return time_of_work;}


    // is it necessary?
    QString getFirstOption(){
        return QString::number(first_option_rep.back().position);
    }
    QString getSecondOption(){
        return QString::number(second_option_rep.back().position);
    }

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

    Q_INVOKABLE QString getFirstOptionRepName() const{    return first_option_rep_name;  }
    Q_INVOKABLE QString getSecondOptionRepName() const{  return second_option_rep_name;  }

    Q_INVOKABLE void setFirstOptionRepName(QString newName) {
        first_option_rep_name = newName;

    }
    Q_INVOKABLE void setSecondOptionRepName(QString newName) {second_option_rep_name = newName; }



    Q_INVOKABLE void firstOptionClicked() {incrFirstOption("empty");}
    Q_INVOKABLE void secondOptionClicked() {incrSecondOption("empty");}
    Q_INVOKABLE void saveToFileClicked(QString file_url);

//    Q_INVOKABLE void read();
//    Q_INVOKABLE void write();

    // saving
private slots:
    void timing() {this->time_of_work++;}


signals:
    void notifyFirstOptionChanged();
    void secondFirstOptionChanged();

private:
    void keyPressEvent(QKeyEvent *event);
    QTimer *timer;
    unsigned int time_of_work =0;
	class Implementation;

    QString first_option_rep_name = "Option One";
    QString second_option_rep_name = "Option Two";

    QScopedPointer<Implementation> implementation;
    std::vector<Repository> first_option_rep;
    std::vector<Repository> second_option_rep;
};

}}
#endif
