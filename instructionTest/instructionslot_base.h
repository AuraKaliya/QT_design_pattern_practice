﻿#ifndef INSTRUCTIONSLOT_BASE_H
#define INSTRUCTIONSLOT_BASE_H

#include <QObject>
#include <QString>
#include <QList>

#include <QSqlDatabase>
#include <QMessageBox>
#include <QSqlError>
#include <QSqlQuery>

class instructionSlot_base : public QObject
{
    Q_OBJECT
public:
    explicit instructionSlot_base(QObject *parent = nullptr);
    virtual ~instructionSlot_base(){}
    //virtual void slotFunctionMySQL(QString)=0;
    virtual void setAdress(QString);
    virtual QList <QList<QString> > getResult();
    virtual void setQurey( QSqlQuery * q);
    virtual bool returnFlag();
    //virtual QString getError();

    //QString errorStr;
    QSqlQuery * qurey;
    QString databaseAdress;
    //QList <QList<QString> > result;
protected:
    QList <QList<QString> > result;
     bool insFlag;
signals:

};

#endif // INSTRUCTIONSLOT_BASE_H
