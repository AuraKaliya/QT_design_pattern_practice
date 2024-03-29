﻿#include "widget.h"
#include "ui_widget.h"


void Widget::initInstructionSystem()
{

    QList<QString > insctrutionList;
    insFactory=Singleton<ins_factory>::instance();
    insSlotFactory=Singleton<insSlot_factory>::instance();

    //导入Mysql指令
    insctrutionList=ins.getInstructionMysql();

    for(int i=0;i<insctrutionList.size();i++)
    {
        qDebug()<<insctrutionList[i];
        //tmpMap.insert(insFactory->create_instruction(QString("instruction_"+insctrutionList[i])),insSlotFactory->create_instructionSlot(QString("instructionSlot_"+insctrutionList[i])));
        instructionDict.insert(insctrutionList[i],insFactory->create_instruction(QString("instruction_"+insctrutionList[i])));
        instrutionSlotDict.insert(insctrutionList[i],insSlotFactory->create_instructionSlot(QString("instructionSlot_"+insctrutionList[i])));
        CONNECTINSTRUCTIONTOSLOT(instructionDict.value(insctrutionList[i]),instrutionSlotDict.value(insctrutionList[i]));
    }

     QList<QString> tmpMySQLSTR=ins.getInstructionMysql();
    for(int i=0;i<tmpMySQLSTR.size();i++)
    {
        auto it =instrutionSlotDict.find(tmpMySQLSTR[i]);
        if(it!=instrutionSlotDict.end())
        {
            instructionSlot_base * tmpSlot=it.value();
            tmpSlot->setQurey(qurey);
        }
    }






}

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    db=QSqlDatabase::addDatabase("QMYSQL");

    db.setHostName("127.0.0.1");
    db.setPort(3306);
    db.setDatabaseName("mygame");
    db.setUserName("root");
    db.setPassword("123456");
    db.open();
    qurey=new QSqlQuery(db);

    qDebug()<<db.open();

    initInstructionSystem();







    connect(ui->pushButton,&QPushButton::clicked,this,&Widget::soluteInstruction);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::soluteInstruction()
{
    //test
    mysqlResult.clear();
    qDebug()<<ui->textEdit->toPlainText();
    ins_context con(ui->textEdit->toPlainText());

    QString tmpStr="Sender:";
            tmpStr+=con.ins_sender;
            tmpStr+="\nHead:";
            tmpStr+=con.ins_head;
            tmpStr+="\nBody:";
            tmpStr+=con.ins_body;

    ui->textEdit_2->setText(tmpStr);
    //visitor:MYSQL_SELECT|ALL$cardinformation

    auto it=instructionDict.find(con.ins_head);
    auto it2=instrutionSlotDict.find(con.ins_head);
        if(it!=instructionDict.end()&&it2!=instrutionSlotDict.end())
        {
            qDebug()<<"找到了已注册的"<<it.key();
            instruction_base * tmpIns=it.value();
            tmpIns->soluteInstruction(ui->textEdit->toPlainText());
            mysqlResult=it2.value()->getResult();

            QString tmpResultStr="";
            for(int i=0;i<mysqlResult.size();i++)
            {
                for(int j=0;j<mysqlResult[0].size();j++)
                {
                    tmpResultStr+=mysqlResult[i][j];
                }
                tmpResultStr+="\n";
               }


            ui->textEdit_3->setText(tmpResultStr);
        }





}

