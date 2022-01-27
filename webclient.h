#ifndef WEBCLIENT_H
#define WEBCLIENT_H

#include <QAbstractSocket>
#include <QTcpSocket>

#include "ui_webclient.h"

class Webclient : public QWidget, private Ui::Webclient
{
    Q_OBJECT

public:

    explicit Webclient(QWidget *parent = nullptr);

private slots:

    void on_Button_clicked();

private:

    QTcpSocket* m_socket;
    QString m_address;
    unsigned char m_port = 80;

    void Connected();
    void ReadyRead();
};

#endif // WEBCLIENT_H
