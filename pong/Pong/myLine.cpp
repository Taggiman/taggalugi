#include"myLine.h"

#include <QDebug>
#include <QKeyEvent>



void myLine::keyPressEvent(QKeyEvent *event)
{
    qDebug() << "Key pressed!";


    if(event->key() == Qt::Key_Down){
        if(scenePos().y()==300)
        {
        }
        else
        {
        qDebug() << scenePos().y();
        setPos(x(),y()+20);
        }
    }
    else if(event->key() == Qt::Key_Up){
        if(scenePos().y()==-300)
        {
        }
        else
        {
        qDebug() << scenePos().y();
        setPos(x(),y()-20);
        }
    }

}
