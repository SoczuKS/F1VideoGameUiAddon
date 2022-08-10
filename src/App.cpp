#include "headers/App.hpp"

App::App(int argc, char *argv[]) {
    qApplication = std::make_unique<QApplication>(argc, argv);
    qTranslator = std::make_unique<QTranslator>();

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
    mainWindow = std::make_unique<MainWindow>();
    mainWindow->show();
    return qApplication->exec();
}
