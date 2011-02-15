/*
 * TcpServer.cpp
 *
 *  Created on: 14 Feb 2011
 *      Author: dhague
 */

#include "TcpServer.h"

TcpServer::TcpServer() : QTcpServer() {
}

void TcpServer::incomingConnection( int descriptor )
{
    TcpServerThread *thread = new TcpServerThread(descriptor, this);
    connect(thread, SIGNAL(finished()), thread, SLOT(deleteLater()));
    thread->start();
}
