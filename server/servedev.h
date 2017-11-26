#ifndef SERVEDEV_H
#define SERVEDEV_H
#include<QTcpServer>
#include"mainwindow.h"
class MainWindow;
class servedev : public QTcpServer
{
public:

    Q_OBJECT

            public:
                servedev(MainWindow* pHelloServer,QObject *parent=0);
                MainWindow* m_pHelloWindow;

            private slots:
                void readyRead();
                void disconnected();

            protected:
                void incomingConnection(int socketfd);

            private:
                QSet<QTcpSocket*> clients;

};

#endif // SERVEDEV_H
