#include "readinfo.h"

ReadInfo::ReadInfo(QObject *parent) : QObject(parent)
{
    controller = Controller::getInstance();
}

void ReadInfo::readDataFromController()
{
    while (true) {
         controller->beckhoff->ReadInfoFromRobot();
         QThread::msleep(100);
    }
}
