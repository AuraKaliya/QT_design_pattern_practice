#include "ins_context.h"

ins_context::ins_context()
{

}

ins_context::ins_context(QString str)
{
    qDebug()<<str;

    QStringList tmpList=str.split(QRegExp(QString("[ "+ins.stSenderEnd+ins.stEnd+" ]")));

    for(int i=0;i<tmpList.size();i++)
         qDebug()<<tmpList[i];

        ins_sender=tmpList[0];
        ins_head=tmpList[1];
        for(int i=2;i<tmpList.size();i++)
            ins_body+=tmpList[i];
}

ins_context::ins_context(QString sender, QString head, QString body):ins_sender(sender),ins_head(head),ins_body(body)
{

}

instruction ins_context::getIns() const
{
    return ins;
}
