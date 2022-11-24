#include "widget.h"
#include "ui_widget.h"


Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    ins_factory * factory=Singleton<ins_factory>::instance();
    instruction_base *callCard=factory->create_instruction("instruction_CALLCARD");

    callCard->testShow();


}

Widget::~Widget()
{
    delete ui;
}

