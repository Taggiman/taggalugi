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
    scene->setSceneRect(0,0,1000,500);

    myLine * line = new myLine();
    line->setRect(1200,300,5,100);
    scene->addItem(line);

/*
    myLine * line1 = new myLine();
    line1->setRect(0,250,5,100);
    scene->addItem(line1);
*/

    line->setFlag(QGraphicsItem::ItemIsFocusable);
    line->setFocus();

    QGraphicsView * view = new QGraphicsView(scene);

    view->setFixedSize(1000, 500);
    view->setSceneRect(0, 0, 1000, 500);
    view->fitInView(0, 0, 1000, 500, Qt::KeepAspectRatio);

    view->show();

    return a.exec();
}
