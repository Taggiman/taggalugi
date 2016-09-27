#include <QGraphicsScene>
#include <QGraphicsView>
#include <QGraphicsRectItem>
#include <QApplication>

#include "myLine.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
   // MainWindow w;
   // w.show();

    QGraphicsScene * scene = new QGraphicsScene();

    myLine * line = new myLine();
    line->setRect(0,0,5,100);

    scene->addItem(line);

    line->setFlag(QGraphicsItem::ItemIsFocusable);
    line->setFocus();

    QGraphicsView * view = new QGraphicsView(scene);

    view->show();

    return a.exec();
}
