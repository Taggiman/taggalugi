#include"myLine.h"

#include<QDebug>



void myLine::keyPressEvent(QKeyEvent *event)
{
    qDebug() << "Key pressed!";


    if(event->key() == Qt::Key_Down){
        setPos(x(),y()-10);
    }
    else if(event->key() == Qt::Key_Up){
        setPos(x(),y()+10);
    }
}
