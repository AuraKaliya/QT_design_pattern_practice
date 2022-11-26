#include "instructionslot_mysql_select.h"

instructionSlot_MYSQL_SELECT::instructionSlot_MYSQL_SELECT()
{

}

QList<QList<QString> > instructionSlot_MYSQL_SELECT::getResult()
{
    return result;
}

void instructionSlot_MYSQL_SELECT::work(QString fo,QString str)
{
    result.clear();
    insFlag=qurey->exec(str);
    int idx=0;
    if(fo=="ALL")
    {
        qDebug()<<"all!!!!!!!!!!!!!!!!!!!!!!";
        while(qurey->next())
        {
            QList <QString> tmpStrList;
            for(int i=0;!qurey->value(i).isNull();i++)
                tmpStrList<<qurey->value(i).toString();

            result<<tmpStrList;
        }


    }
    else
    {
        QStringList tmpList=fo.split(QRegExp(QString("[,]")));
        while(qurey->next())
        {
            QList <QString> tmpStrList;
            for(int i=0;i<tmpList.size();i++)
            tmpStrList<<qurey->value(tmpList[i]).toString();

            result<<tmpStrList;
        }
    }


}


