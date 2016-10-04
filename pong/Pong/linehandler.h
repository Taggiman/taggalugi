#ifndef LINEHANDLER_H
#define LINEHANDLER_H


#include <QString>
#include "myLine.h"

class LineHandler : public QObject
{
    Q_OBJECT
public:
    LineHandler();
    keyPressEvent(QString key);
    addLine(myLine line);
private:

    myline* lineEins;
    myline* lineZwei;
signals:
    void testsignal(QString test);

private slots:
    void on_test_signal(QString test);
};

#endif // LINEHANDLER_H
