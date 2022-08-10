#include "headers/App.hpp"

#include "headers/Config.hpp"
#include "headers/MainWindow.h"
#include "headers/PacketReceiver.hpp"

#include <QApplication>
#include <QLocale>
#include <QTranslator>

#include <memory>

App::App(int argc, char *argv[]) :
    qApplication{std::make_unique<QApplication>(argc, argv)},
    qTranslator{std::make_unique<QTranslator>()},
    mainWindow{std::make_unique<MainWindow>()},
    config{std::make_unique<Config>()},
    packetReceiver{std::make_unique<PacketReceiver>(config->getListeningPort())} {
    const QStringList uiLanguages = QLocale::system().uiLanguages();
    for (const QString &locale : uiLanguages) {
        const QString baseName = "F1VideoGameTelemetry_" + QLocale(locale).name();
        if (qTranslator->load(":/i18n/" + baseName)) {
            qApplication->installTranslator(qTranslator.get());
            break;
        }
    }
}

int App::run() {
    packetReceiver->start();
    mainWindow->show();
    return qApplication->exec();
}
