import QtQuick 2.12
import assets 1.0

Item {
    anchors {
        top: parent.top
        bottom: parent.bottom
        left: parent.left
    }
    width: Style.widthNavigationButtonIcon

    Rectangle {
            anchors.fill:parent
            color: "#b4fc3b"

            Column {
                NavigationButton {
                    iconCharacter: "\uf015"     //Home
                    hoverColour: "#0d9494"
                    onNavigationButtonClicked: masterController.ui_navigationController.goDashboardView();

                }
                NavigationButton{
                    iconCharacter: "\uf200"     // Graph
                    hoverColour: "#7a9494"
                    onNavigationButtonClicked: masterController.ui_navigationController.goGraphView();
                }
                NavigationButton{
                    iconCharacter: "\uf290"     //Save
                    hoverColour: "#9a9494"
                    onNavigationButtonClicked: masterController.ui_navigationController.goSaveView();
                }
                NavigationButton{
                    iconCharacter: "\uf087"     // INFO
                    hoverColour: "#e99494"
                    onNavigationButtonClicked: masterController.ui_navigationController.goInfoView();
                }
            }
        }
}
