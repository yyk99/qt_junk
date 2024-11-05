//
//
//

#ifndef RASTERWINDOW_H
#define RASTERWINDOW_H

#include <QtGui>
#include <QScopedPointer>

class RasterWindow : public QWindow
{
    Q_OBJECT
public:
    explicit RasterWindow(QWindow *parent = nullptr);

    virtual void render(QPainter *painter);

public slots:
    void renderLater();
    void renderNow();

protected:
    bool event(QEvent *event) override;

    void resizeEvent(QResizeEvent *event) override;
    void exposeEvent(QExposeEvent *event) override;

private:
    QScopedPointer<QBackingStore> m_backingStore;
};

#endif /* RASTERWINDOW_H */