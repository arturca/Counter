#include "master-controller.h"
#include <iostream>

namespace counter {
namespace controllers {

class MasterController::Implementation
{
public:
	Implementation(MasterController* _masterController)
		: masterController(_masterController)
	{
		navigationController = new NavigationController(masterController);
	}

	MasterController* masterController{nullptr};
	NavigationController* navigationController{nullptr};
};

MasterController::MasterController(QObject* parent)
    : QObject(parent)
{
    initialRepAndTiming();
	implementation.reset(new Implementation(this));
}

MasterController::~MasterController()   {}

NavigationController* MasterController::navigationController()
{
    return implementation->navigationController;
}


QString MasterController::saveToFile(){
    std::string output = "";

    std::string temp;
    output += first_option_rep_name.toUtf8().constData();
    output +=  " \nNr:\tsek pracy:\t Godzina: \n";

    for(std::vector<Repository>::const_iterator it = first_option_rep.begin(); it!=first_option_rep.end(); it++){
        if(it->position!=0){
            temp = std::to_string(it->position) + "\t" + std::to_string(it->time_of_occur_sec) +"\t\t" + it->time.toString().toUtf8().constData() + "\n";
            output += temp;
        }
    }
    output += "\n\n";
    output += second_option_rep_name.toUtf8().constData();
    output += " \nNr:\tsek pracy:\t Godzina: \n";

    for(std::vector<Repository>::const_iterator it = second_option_rep.begin(); it!=second_option_rep.end(); it++){
        if(it->position!=0){
            temp = std::to_string(it->position) + "\t" + std::to_string(it->time_of_occur_sec) + "\t\t" + it->time.toString().toUtf8().constData() + "\n";
            output += temp;
        }
    }
    QString out = QString::fromStdString(output);
    return out;
}

void MasterController::initialRepAndTiming(){
    second_option_rep.push_back(Repository{0, 0, QTime::currentTime()});
    first_option_rep.push_back(Repository{0, 0, QTime::currentTime()});
    timer= new QTimer(this);
    connect(timer, SIGNAL(timeout()),this, SLOT(timing()));
    timer->start(1000);
}

void MasterController::saveToFileClicked(QString file_url)
{
    QString subString = file_url.mid(8, file_url.size()-8);
    std::cout<< subString.toStdString()<<std::endl;
    QFile file(subString);

    if(!file.open(QFile::WriteOnly | QFile::Text)){
        return;
    }

    QTextStream out(&file);
    QString text = saveToFile();

    out<<text;
    file.close();

}
void MasterController::keyPressEvent(QKeyEvent *event){
   if(event->key() == Qt::Key_M)
       incrSecondOption("empty");
   if(event->key() == Qt::Key_P)
       incrSecondOption("empty");
}



}}
