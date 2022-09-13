#include "Controller.h"

Controller::Controller(Led *led)
{
    light = led;
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
            lightState = LIGHT_ON;
            light->On();
        }
        break;

    case LIGHT_ON:
        if(strBtn == "powerButton")
        {
            lightState = LIGHT_OFF;
            light->Off();
        }
        break;
    
    default:
        break;
    }
}