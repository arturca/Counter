#ifndef OPTIONREPOSITORY_H
#define OPTIONREPOSITORY_H

#include <QTime>

struct Repository{
    unsigned int position;
    unsigned int time_of_occur_sec;
    QTime time;
};

#endif // OPTIONREPOSITORY_H
