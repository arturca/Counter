#ifndef COUNTER_HPP
#define COUNTER_HPP

#include <QObject>

class Counter : public QObject
{
    Q_OBJECT
public:
    explicit Counter(QObject *parent = nullptr);

signals:

public slots:
};

#endif // COUNTER_HPP
