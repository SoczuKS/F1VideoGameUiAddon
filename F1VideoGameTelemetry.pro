QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    src/App.cpp \
    src/main.cpp \
    src/MainWindow.cpp

HEADERS += \
    headers/App.hpp \
    headers/CarDamagePacket.hpp \
    headers/CarSetupsPacket.hpp \
    headers/CarStatusPacket.hpp \
    headers/CarTelemetryPacket.hpp \
    headers/Commons.hpp \
    headers/Driver.hpp \
    headers/DriverStorage.hpp \
    headers/EventPacket.hpp \
    headers/FinalClassificationPacket.hpp \
    headers/GameMode.hpp \
    headers/GameModeStorage.hpp \
    headers/LapDataPacket.hpp \
    headers/LobbyInfoPacket.hpp \
    headers/MainWindow.h \
    headers/MotionPacket.hpp \
    headers/Nationality.hpp \
    headers/NationalityStorage.hpp \
    headers/Packet.hpp \
    headers/PacketHeader.hpp \
    headers/ParticipantsPacket.hpp \
    headers/Ruleset.hpp \
    headers/RulesetStorage.hpp \
    headers/SessionHistoryPacket.hpp \
    headers/SessionPacket.hpp \
    headers/Surface.hpp \
    headers/SurfaceStorage.hpp \
    headers/Team.hpp \
    headers/TeamStorage.hpp \
    headers/Track.hpp \
    headers/TrackStorage.hpp

FORMS += \
    resource/MainWindow.ui

TRANSLATIONS += \
    resource/F1VideoGameTelemetry_pl_PL.ts

CONFIG += lrelease
CONFIG += embed_translations

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
