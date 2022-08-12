QT       += core gui network websockets

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    src/App.cpp \
    src/PacketReceiver.cpp \
    src/main.cpp \
    src/MainWindow.cpp

HEADERS += \
    headers/App.hpp \
    headers/packets/CarDamagePacket.hpp \
    headers/packets/CarSetupsPacket.hpp \
    headers/packets/CarStatusPacket.hpp \
    headers/packets/CarTelemetryPacket.hpp \
    headers/Commons.hpp \
    headers/Config.hpp \
    headers/static_data/Driver.hpp \
    headers/static_data/DriverStorage.hpp \
    headers/packets/EventPacket.hpp \
    headers/packets/FinalClassificationPacket.hpp \
    headers/static_data/GameMode.hpp \
    headers/static_data/GameModeStorage.hpp \
    headers/packets/LapDataPacket.hpp \
    headers/packets/LobbyInfoPacket.hpp \
    headers/MainWindow.h \
    headers/packets/MotionPacket.hpp \
    headersstatic_data//Nationality.hpp \
    headers/static_data/NationalityStorage.hpp \
    headers/packets/Packet.hpp \
    headers/packets/PacketHeader.hpp \
    headers/PacketReceiver.hpp \
    headers/ParticipantsPacket.hpp \
    headers/static_data/Ruleset.hpp \
    headers/static_data/RulesetStorage.hpp \
    headers/packets/SessionHistoryPacket.hpp \
    headers/packets/SessionPacket.hpp \
    headers/static_data/Surface.hpp \
    headers/static_data/SurfaceStorage.hpp \
    headers/static_data/Team.hpp \
    headers/static_data/TeamStorage.hpp \
    headers/static_data/Track.hpp \
    headers/static_data/TrackStorage.hpp

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
