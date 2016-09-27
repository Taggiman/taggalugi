#include"myLine.h"

#include <QDebug>
#include <QKeyEvent>



void myLine::keyPressEvent(QKeyEvent *event)
{
    qDebug() << "Key pressed!";


    if(event->key() == Qt::Key_Down){
        setPos(x(),y()+20);
    }
    else if(event->key() == Qt::Key_Up){
        setPos(x(),y()-20);
    }


}
