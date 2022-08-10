#pragma once

#include "MainWindow.h"

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
};
