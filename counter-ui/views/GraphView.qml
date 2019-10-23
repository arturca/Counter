import QtQuick 2.12
import QtCharts 2.0

Item {
    ChartView {
        title: "Quick Graph"
        anchors.fill: parent
        theme: ChartView.ChartThemeLight
        antialiasing: true

        PieSeries {
            id: pieSeries
            PieSlice {
                color: "#03d3fc"
                label: masterController.getFirstOptionRepName();
                value: masterController.ui_firstOption
            }
            PieSlice {
                color: "#0bca1f"
                label: masterController.getSecondOptionRepName();
                value: masterController.ui_secondOption
            }
        }
    }
}

