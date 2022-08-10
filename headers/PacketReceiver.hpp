#pragma once

#include "Packet.hpp"

#include <QObject>
#include <QTcpSocket>
#include <QUdpSocket>

#include <cstdint>
#include <functional>

class PacketReceiver : public QObject {
    Q_OBJECT
public:
    PacketReceiver(uint16_t, QObject* = nullptr);

    void start();
    void stop();

public slots:
    void tcpDisconnected() { tcpConnected = false; }

private:
    bool running = true;
    bool tcpConnected = false;

    std::unique_ptr<QUdpSocket> udpSocket;
    std::unique_ptr<QTcpSocket> tcpSocket;

    std::function<void(const Packet&)> carDamagePacketCallback;
    std::function<void(const Packet&)> carSetupsPacketCallback;
    std::function<void(const Packet&)> carStatusPacketCallback;
    std::function<void(const Packet&)> carTelemetryPacketCallback;
    std::function<void(const Packet&)> eventPacketCallback;
    std::function<void(const Packet&)> finalClassificationPacketCallback;
    std::function<void(const Packet&)> lapDataPacketCallback;
    std::function<void(const Packet&)> lobbyInfoPacketCallback;
    std::function<void(const Packet&)> motionPacketCallback;
    std::function<void(const Packet&)> participantsPacketCallback;
    std::function<void(const Packet&)> sessionHistoryPacketCallback;
    std::function<void(const Packet&)> sessionPacketCallback;
};
