#include "linehandler.h"

LineHandler::LineHandler()
{
    this->lineEins = NULL;
    this->lineZwei = NULL;

    connect(this,SIGNAL(testsignal(QString)),this,SLOT(on_test_signal(QString)));
}


LineHandler::addLine(myLine line)
{
    if(this->lineEins == NULL)
    {
        this->lineEins = line;
    }
    else if(this->lineZwei == NULL)
    {
        this->lineZwei = line;
    }
}


LineHandler::keyPressEvent(QString key)
{
    if(key == "W" || key == "S")
    {

        //this->lineEins
    }

    if(key =="O"|| key == "L")
    {
        //this->lineZwei
        emit testsignal("W");
    }
}

LineHandler::on_test_signal(QString test)
{
    test.append("Halloo");
}
