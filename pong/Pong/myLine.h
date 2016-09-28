#ifndef LINE
#define LINE

#include <QGraphicsRectItem>
#include <QGraphicsItem>

class myLine: public QGraphicsRectItem{
public:
    void keyPressEvent(QKeyEvent * event);
};



#endif // LINE

