#ifndef WIDGET_H
#define WIDGET_H
#pragma once
#include <QWidget>

#include "instruction_callcard.h"
#include "instruction_match.h"
#include "ins_context.h"
#include "ins_factory.h"
//#include "ins_register.h"

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

private:
    Ui::Widget *ui;
};
#endif // WIDGET_H
