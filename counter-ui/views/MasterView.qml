import QtQuick 2.12
import QtQuick.Window 2.2
import QtQuick.Controls 2.2
import assets 1.0
import components 1.0
Window {
    Item {
        focus: true
        Keys.onPressed: { if (event.key == Qt.Key_M) {masterController.firstOptionClicked()}
            else if (event.key == Qt.Key_P) {masterController.secondOptionClicked()} }
    }
    visible: true
    width: 640
    height: 480
    minimumHeight: 320
    minimumWidth: 600
    title: qsTr("Client Management")


    Component.onCompleted: contentFrame.replace("qrc:/views/DashboardView.qml");


    Connections {
        target: masterController.ui_navigationController
        onGoDashboardView: contentFrame.replace("qrc:/views/DashboardView.qml")
        onGoGraphView: contentFrame.replace("qrc:/views/GraphView.qml")
        onGoInfoView: contentFrame.replace("qrc:/views/InfoView.qml")
        onGoSaveView: contentFrame.replace("qrc:/views/SaveView.qml")
    }

    NavigationBar {
         id: navigationBar
    }

    StackView {
        id: contentFrame
        anchors {
            top: parent.top
            bottom: parent.bottom
            left: navigationBar.right
            right: parent.right
        }
        initialItem: "qrc:/views/SplashView.qml"
        clip: true

    }
}

