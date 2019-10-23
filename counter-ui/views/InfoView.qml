import QtQuick 2.12
import QtQuick.Layouts 1.3
import assets 1.0
Item {
    Rectangle {
        id: rec
        anchors.fill: parent
        color: Style.colourBackground
        anchors.margins: 20
        Layout.minimumWidth: 100

        Text {
            anchors.centerIn: parent
            text: qsTr("Not ready yet :(")
        }
        ColumnLayout{
            id: col
            RowLayout{
                spacing: 10
                anchors.margins: 10
                Text {

                    text: qsTr("First option name:")
                    anchors.margins: 40
                    font.pixelSize: 16
                    height: 30
                    width: 40
                }
                Rectangle{
                    height: 30
                    width: rec.width*0.7
                    border.width: 1
                    border.color: "#000000"
                    TextInput{
                        id: optionOneName
                        text: masterController.getFirstOptionRepName()
                        anchors.fill: parent
                        onTextEdited: masterController.setFirstOptionRepName()

                        anchors.margins: 2
                        verticalAlignment: Qt.AlignVCenter
                        font.pixelSize: 16
                    }
                }


            }
            RowLayout{
                spacing: 10
                anchors.margins: 10
                Text {

                    text: qsTr("First option name:")
                    anchors.margins: 40
                    font.pixelSize: 16
                    height: 30
                    width: 40
                }


                Rectangle{
                    height: 30
                    width: rec.width*0.7
                    border.width: 1
                    border.color: "#000000"
                    TextInput{
                        id: optionTwoName
                        text: masterController.getSecondOptionRepName()

                        anchors.fill: parent
                        anchors.margins: 2

                        onTextEdited: masterController.setSecondOptionRepName()

                        verticalAlignment: Qt.AlignVCenter
                        font.pixelSize: 16
                    }
                }
            }

            }


    }
}
