#ifndef RENDERAREATOO_H
#define RENDERAREATOO_H

#include <QWidget>

namespace Ui {
class RenderAreaToo;
}

class RenderAreaToo : public QWidget
{
    Q_OBJECT

public:
    explicit RenderAreaToo(QWidget *parent = nullptr);
    ~RenderAreaToo();


private:
    Ui::RenderAreaToo *ui;
};

#endif // RENDERAREATOO_H
