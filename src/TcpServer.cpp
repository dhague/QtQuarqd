/*
 * TcpServer.cpp
 *
 *  Created on: 14 Feb 2011
 *      Author: dhague
 */

#include "TcpServer.h"

TcpServer::TcpServer() : QTcpServer() {
}

void Server::incomingConnection( int descriptor )
{
    ServerThread *thread = new ServerThread(descriptor, this);
    connect(thread, SIGNAL(finished()), thread, SLOT(deleteLater()));
    thread->start();
}
