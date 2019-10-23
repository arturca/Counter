import QtQuick 2.12
import QtQuick.Window 2.2
import QtQuick.Controls 2.2
import assets 1.0
import components 1.0
Item {
    property alias iconCharacter: textIcon.text
//    property alias description: textDescription.text
    signal navigationButtonClicked()

    property color hoverColour: Style.colourNavigationBarBackground

    width: Style.widthNavigationButton
    height: Style.heightNavigationButton

    Rectangle{
        id: background
        anchors.fill: parent
        color: Style.colourNavigationBarBackground
        states: [
            State {
                name: "hover"
                PropertyChanges {
                    target: background
                    color: hoverColour
                }
            }]

        Row{
            Text {
                id: textIcon
                width: Style.widthNavigationButtonIcon
                height: Style.heightNavigationButtonIcon
                font{
                    pixelSize: Style.pixelSizeNavigationBarIcon
                }
                color: Style.colourNavigationBarFont
                text: "\uf2015"

                horizontalAlignment: Text.AlignHCenter
                verticalAlignment: Text.AlignVCenter
            }

        }

        MouseArea{
            anchors.fill: parent
            cursorShape: Qt.PointingHandCursor
            hoverEnabled: true
            onEntered: background.state = "hover"
            onExited: background.state = ""
            onClicked: navigationButtonClicked()
        }
    }

}
