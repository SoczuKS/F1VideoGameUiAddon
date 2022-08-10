#include "../headers/PacketReceiver.hpp"

#include <QObject>
#include <QTcpSocket>
#include <QUdpSocket>

PacketReceiver::PacketReceiver(uint16_t listeningPort, QObject* parent) :
    QObject(parent),
    udpSocket{std::make_unique<QUdpSocket>(this)},
    tcpSocket{std::make_unique<QTcpSocket>(this)} {
    udpSocket->bind(QHostAddress::LocalHost, listeningPort);
}

void PacketReceiver::start() {

}
