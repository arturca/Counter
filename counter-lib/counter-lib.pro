QT -= gui

QT += core-private gui-private

TARGET = counter-lib
TEMPLATE = lib

CONFIG += c++14

DEFINES += COUNTERLIB_LIBRARY

include(../qmake-target-platform.pri)
include(../qmake-destination-path.pri)

INCLUDEPATH += source

SOURCES += source/models/client.cpp \
    source/controllers/master-controller.cpp

HEADERS += source/counter-lib_global.h \
    source/controllers/option-repository.h \
    source/models/client.h \
    source/controllers/master-controller.h \
    source/controllers/navigation-controller.h

message(counter-lib project dir: $${PWD})

DESTDIR = $$PWD/../binaries/$$DESTINATION_PATH
OBJECTS_DIR = $$PWD/build/$$DESTINATION_PATH/.obj
MOC_DIR = $$PWD/build/$$DESTINATION_PATH/.moc
RCC_DIR = $$PWD/build/$$DESTINATION_PATH/.qrc
UI_DIR = $$PWD/build/$$DESTINATION_PATH/.ui
message(counter-lib output dir: $${DESTDIR})
