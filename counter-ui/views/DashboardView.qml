import QtQuick 2.12
import assets 1.0
import QtQuick.Layouts 1.3
import components 1.0
Item {
    Rectangle {
        id: win
        anchors.fill: parent
        color: Style.colourBackground

        RowLayout{
            anchors.centerIn: parent
            spacing: parent.width/10
            Rectangle{
                Layout.fillWidth: true
                Layout.minimumWidth: 150
                Layout.preferredWidth: win.width*0.3
                Layout.maximumWidth: 350

                Layout.fillHeight: true
                Layout.minimumHeight: 200
                Layout.preferredHeight: win.height/4*3
                radius: 5
                border.width: 1
                ColumnLayout{
                    anchors.fill: parent
                    Text {
                        Layout.alignment: Qt.AlignHCenter
                        text: masterController.getFirstOptionRepName()
                        font.pixelSize: 18
                        font.bold: true
                    }
                    Rectangle{
                        Layout.alignment: Qt.AlignHCenter
                        Layout.preferredWidth: parent.width*0.8
                        Layout.preferredHeight: parent.height*0.2
                        color: "#03d3fc"
                        border.color: "#038cfc"
                        border.width: 2
                        radius: 5

                        signal mianowicieClicked
                        MouseArea {
                            anchors.fill: parent
                            cursorShape: Qt.PointingHandCursor
                            hoverEnabled: true
                            onClicked: masterController.firstOptionClicked()
                        }
                    }
                    Rectangle{
                        Layout.alignment: Qt.AlignHCenter
                        Layout.preferredWidth: parent.width/3
                        Layout.preferredHeight: parent.height/14
                        border.color: "#000000"
                        border.width: 1
                        radius: 5
                        Text {
                            id: text_mianowicie
                            font.pixelSize: 18
                            font.bold: true
                            anchors.centerIn: parent
                            text: masterController.ui_firstOption
                        }
                    }
                }
            }


            //
            Rectangle{
                Layout.fillWidth: true
                Layout.minimumWidth: 150
                Layout.preferredWidth: win.width*0.3
                Layout.maximumWidth: 350
                Layout.fillHeight: true
                Layout.minimumHeight: 200
                Layout.preferredHeight: win.height/4*3
                radius: 5
                border.width: 1
                ColumnLayout{
                    anchors.fill: parent
                    Text {
                        Layout.alignment: Qt.AlignHCenter
                        text: masterController.getSecondOptionRepName()
                        font.pixelSize: 18
                        font.bold: true
                    }
                    Rectangle{
                        Layout.alignment: Qt.AlignHCenter
                        Layout.preferredWidth: parent.width*0.8
                        Layout.preferredHeight: parent.height*0.2
                        color: "#0bca1f"
                        border.color: "#03fc6b"
                        border.width: 2
                        radius: 5

                        signal proszePanstwaClicked
                        MouseArea {
                            anchors.fill: parent
                            cursorShape: Qt.PointingHandCursor
                            hoverEnabled: true
                            onClicked: masterController.secondOptionClicked()
                        }
                    }
                    Rectangle{
                        Layout.alignment: Qt.AlignHCenter
                        Layout.preferredWidth: parent.width/3
                        Layout.preferredHeight: parent.height/14
                        border.color: "#000000"
                        border.width: 1
                        radius: 5
                        Text {
                            id: text_proszePanstwa
                            anchors.centerIn: parent
                            font.pixelSize: 18
                            font.bold: true
                            text: masterController.ui_secondOption
                        }
                    }
                }
            }
        }
    }
}
