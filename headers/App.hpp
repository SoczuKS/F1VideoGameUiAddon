#pragma once

#include "Config.hpp"
#include "MainWindow.h"
#include "PacketReceiver.hpp"

#include <QApplication>
#include <QLocale>
#include <QTranslator>

#include <memory>

class App {
public:
    App(int argc, char *argv[]);
    int run();

private:
    std::unique_ptr<QApplication> qApplication;
    std::unique_ptr<QTranslator> qTranslator;
    std::unique_ptr<MainWindow> mainWindow;
    std::unique_ptr<Config> config;
    std::unique_ptr<PacketReceiver> packetReceiver;
};
