#include "two-option-counter.h"
namespace counter {
namespace controllers {
TwoOptionCounter::TwoOptionCounter(QObject *parent) : QObject(parent)
{
    initialRepAndTiming();
}

void TwoOptionCounter::initialRepAndTiming(){
    second_option_rep.push_back(Repository{0, 0, QTime::currentTime()});
    first_option_rep.push_back(Repository{0, 0, QTime::currentTime()});
    timer= new QTimer(this);
    connect(timer, SIGNAL(timeout()),this, SLOT(timing()));
    timer->start(1000);
}

QString TwoOptionCounter::saveToFile(){
    std::string output = "";

    std::string temp;
    output += first_option_rep_name.toUtf8().constData();
    output +=  " \nNr:\tsek:\t Time: \n\n";

    for(std::vector<Repository>::const_iterator it = second_option_rep.begin(); it!=second_option_rep.end(); it++){
        temp = std::to_string(it->position) + "\t" + std::to_string(it->time_of_occur_sec) +"\t" + it->time.toString().toUtf8().constData() + "\n";
        output += temp;
    }
    output += "\n\n";
    output += second_option_rep_name.toUtf8().constData();
    output += " \nNr:\tsek:\t Time: \n\n";

    for(std::vector<Repository>::const_iterator it = first_option_rep.begin(); it!=first_option_rep.end(); it++){
        temp = std::to_string(it->position) + "\t" + std::to_string(it->time_of_occur_sec) + "\t" + it->time.toString().toUtf8().constData() + "\n";
        output += temp;
    }
    QString out = QString::fromStdString(output);
    return out;
}

void TwoOptionCounter::saveToFileClicked()
{
    QString fileName = QFileDialog::getSaveFileName();
    if (fileName.isEmpty())
        return;
    else {
        QFile file(fileName);
        if (!file.open(QIODevice::WriteOnly)) {
            return;
        }
        QTextStream out(&file);
            out << saveToFile().toUtf8();
    }
}



}
}
