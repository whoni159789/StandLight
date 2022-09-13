#include "Controller.h"

Controller::Controller(View *viewer)
{
    view = viewer;
    lightState = LIGHT_OFF;
}

Controller::~Controller()
{

}

// std::string의 경우 int형처럼 조건문 안에 비교할 수 있다.
void Controller::updateEvent(std::string strBtn)
{
    switch (lightState)
    {
    case LIGHT_OFF:
        if(strBtn == "powerButton")
        {
            lightState = LIGHT_1Stage;
            view->updateState("State1Stage");
        }
        break;

    case LIGHT_1Stage:
        if(strBtn == "powerButton")
        {
            lightState = LIGHT_2Stage;
            view->updateState("State2Stage");
        }
        break;

    case LIGHT_2Stage:
        if(strBtn == "powerButton")
        {
            lightState = LIGHT_3Stage;
            view->updateState("State3Stage");
        }
        break;

    case LIGHT_3Stage:
        if(strBtn == "powerButton")
        {
            lightState = LIGHT_4Stage;
            view->updateState("State4Stage");
        }
        break;

    case LIGHT_4Stage:
        if(strBtn == "powerButton")
        {
            lightState = LIGHT_5Stage;
            view->updateState("State5Stage");
        }
        break;

    case LIGHT_5Stage:
        if(strBtn == "powerButton")
        {
            lightState = LIGHT_OFF;
            view->updateState("StateOff");
        }
        break;

    default:
        break;
    }
}