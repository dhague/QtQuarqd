/*
 * TcpServer.h
 *
 *  Created on: 14 Feb 2011
 *      Author: dhague
 */

#ifndef TCPSERVER_H_
#define TCPSERVER_H_
#include <QTcpServer>
#include <QThread>

class TcpServer : public QTcpServer
{
public:
    TcpServer();

protected:
    void incomingConnection( int descriptor );
};


class TcpServerThread : public QThread
{
public:
    TcpServerThread(int descriptor, QObject *parent);
    void run();

private:
    int m_descriptor;
};
#endif /* TCPSERVER_H_ */
