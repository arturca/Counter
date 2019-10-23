#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQmlContext>
#include <QApplication>

#include <controllers/master-controller.h>
#include <controllers/file-save-dialog.h>
#include <controllers/two-option-counter.h>

int main(int argc, char *argv[])
{
#if defined(Q_OS_WIN)
	QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
#endif

    QApplication app(argc, argv);   // I had to change QGuiApplication for QApplication due to QChart see doc.

    app.setOrganizationName("Artur");
    app.setOrganizationDomain("No");
    app.setApplicationName("Counter");

    qmlRegisterType<counter::controllers::MasterController>("COUNTER", 1, 0, "MasterController");
    qmlRegisterType<counter::controllers::NavigationController>("COUNTER", 1, 0, "NavigationController");

    counter::controllers::MasterController masterController;

	QQmlApplicationEngine engine;
    engine.addImportPath("qrc:/");
	engine.rootContext()->setContextProperty("masterController", &masterController);
	engine.load(QUrl(QStringLiteral("qrc:/views/MasterView.qml")));

	if (engine.rootObjects().isEmpty())
		return -1;

	return app.exec();
}
