#ifndef WIDGET_H
#define WIDGET_H
#pragma once
#include <QWidget>

#include "instruction_callcard.h"
#include "instruction_match.h"
#include "ins_context.h"

#include "ins_factory.h"
#include "insslot_factory.h"

#include "instruction_mysql_insert.h"
#include "instruction_mysql_select.h"
#include "instruction_mysql_update.h"

#include "instructionslot_mysql_insert.h"
#include "instructionslot_mysql_select.h"
#include "instructionslot_mysql_update.h"

#include "instruction.h"
//#include "ins_register.h"

#include <QDebug>

#define CONNECTINSTRUCTIONTOSLOT(insName,insSlotName)   \
           \
    connect((insName),SIGNAL(work(QString,QString)),(insSlotName),SLOT(work(QString,QString)))

//#define CREATEINSTRUCTION(insName)                       \
//    instruction_base *ins##insName=factory->create_instruction(QString(instruction_+#insName))




QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }

QT_END_NAMESPACE




class Widget : public QWidget
{
    Q_OBJECT


public:
//    QString instruction_="instrution_";
    void initInstructionSystem();
    Widget(QWidget *parent = nullptr);
    ~Widget();

private:
    ins_factory * insFactory;
    insSlot_factory *insSlotFactory;
    QMap<QString,instruction_base *> instructionDict;
    QMap <QString,instructionSlot_base*> instrutionSlotDict;
    QSqlDatabase db;
    QSqlQuery *qurey;
    QList <QList <QString> > mysqlResult;

    instruction ins;
    Ui::Widget *ui;

private  slots:
    void  soluteInstruction();



};
#endif // WIDGET_H
