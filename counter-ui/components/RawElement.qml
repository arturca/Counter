import QtQuick 2.12
import assets 1.0
import QtQuick.Layouts 1.3

Item {
    property alias optionDescription: textDescription.text
    property color optionColor: colorDescription.text
    property color buttonBorderColor: colorButtonDescription.text

    Rectangle{
        Layout.fillWidth: true
        Layout.minimumWidth: 150
        Layout.preferredWidth: 200
        Layout.maximumWidth: 300
        Layout.fillHeight: true
        Layout.minimumHeight: 200
        Layout.preferredHeight: 300
        Layout.maximumHeight: 400
        radius: 5
        border.width: 1
        ColumnLayout{
            anchors.fill: parent
            Text {
                anchors.horizontalCenter: parent.horizontalCenter
                text: "name"
                font.pixelSize: 18
                font.bold: true
            }
            Rectangle{
                anchors.horizontalCenter: parent.horizontalCenter
                color: "#0bca1f"
                border.color: "#0b941f"
                border.width: 2
                radius: 5
                height: 40
                width: 60
                MouseArea {
                    anchors.fill: parent
                    cursorShape: Qt.PointingHandCursor
                    hoverEnabled: true
                    onEntered: background.state = "hover"
                    onExited: background.state = ""
                    onClicked: navigationButtonClicked()
                }
            }
            Rectangle{
                anchors.horizontalCenter: parent.horizontalCenter
                height: 30
                width: 30
                border.color: "#000000"
                border.width: 1
                radius: 5
                Text {
                    anchors.centerIn: parent
                    text: qsTr("0")
                }
            }
        }
    }

}
