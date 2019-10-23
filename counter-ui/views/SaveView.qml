import QtQuick 2.12
import QtQuick.Window 2.2
import QtQuick.Controls 2.2
import QtQuick.Dialogs 1.0
import assets 1.0
import components 1.0

FileDialog {
    id: fileDialog
    title: "Please choose a file"
    folder: shortcuts.home
    onAccepted: {
        fileDialog.defaultSuffix = "txt"
        masterController.saveToFileClicked(fileDialog.fileUrl.toString())
    }
    onRejected: {
        console.log("Canceled")
    }
    Component.onCompleted: visible = true
}
