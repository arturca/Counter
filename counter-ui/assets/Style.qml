pragma Singleton
import QtQuick 2.12

Item {
    property alias fontName: fontAwesomeLoader.name
    readonly property color colourBackground: "#FDFDFF"

    readonly property color colourNavigationBarBackground: "#b4fc3b"
    readonly property color colourNavigationBarFont: "#ffffff"
    readonly property int pixelSizeNavigationBarIcon: 42

    readonly property real widthNavigationButtonIcon: 80
    readonly property real heightNavigationButtonIcon: widthNavigationButtonIcon
    readonly property real widthNavigationButton: widthNavigationButtonIcon
    readonly property real heightNavigationButton:heightNavigationButtonIcon

    FontLoader{
        id: fontAwesomeLoader
        source: "qrc:/assets/fontawesome.ttf"
    }
}
