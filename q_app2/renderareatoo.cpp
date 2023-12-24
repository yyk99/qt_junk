#include "renderareatoo.h"
#include "ui_renderareatoo.h"

RenderAreaToo::RenderAreaToo(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::RenderAreaToo)
{
    ui->setupUi(this);
}

RenderAreaToo::~RenderAreaToo()
{
    delete ui;
}
