#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include "songmodel.h"
#include <QDir>


int main(int argc, char *argv[])
{
    SongModel model;
    QDir directory(Song::pathFolder);
    QStringList listSongs = directory.entryList(QStringList() << "*.mp3" << "*.MP3", QDir::Files);
    foreach (QString filename, listSongs) {
        model.addSong(Song(filename));
    }
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);

    QGuiApplication app(argc, argv);

    QQmlApplicationEngine engine;
    const QUrl url(QStringLiteral("qrc:/main.qml"));
    QObject::connect(&engine, &QQmlApplicationEngine::objectCreated,
                     &app, [url](QObject *obj, const QUrl &objUrl) {
        if (!obj && url == objUrl)
            QCoreApplication::exit(-1);
    }, Qt::QueuedConnection);
    engine.rootContext()->setContextProperty("SongModel", &model);
    engine.load(url);

    return app.exec();
}
