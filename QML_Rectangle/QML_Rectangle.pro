TEMPLATE = app

DEFINES += QT_QML_DEBUG_NO_WARNING
QT += qml quick widgets
CONFIG -= qml_debug

SOURCES += main.cpp

RESOURCES += qml.qrc

# Additional import path used to resolve QML modules in Qt Creator's code model
QML_IMPORT_PATH =

# Default rules for deployment.
include(deployment.pri)
