/*
 * TcpServer.h
 *
 *  Created on: 14 Feb 2011
 *      Author: dhague
 */

#ifndef TCPSERVER_H_
#define TCPSERVER_H_
#include <QTcpServer>

class TcpServer : public QTcpServer
{
public:
    TcpServer();

protected:
    void incomingConnection( int descriptor );
};

#endif /* TCPSERVER_H_ */
