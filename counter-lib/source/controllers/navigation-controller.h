#ifndef NAVIGATIONCONTROLLER_H
#define NAVIGATIONCONTROLLER_H

#include <QObject>

#include <counter-lib_global.h>
#include <models/client.h>

namespace counter {
namespace controllers {

class COUNTERLIBSHARED_EXPORT NavigationController : public QObject
{
	Q_OBJECT

public:
	explicit NavigationController(QObject* parent = nullptr) : QObject(parent){}

signals:
    void goInfoView();
	void goDashboardView();
    void goGraphView();
    void goSaveView();
};

}
}

#endif
