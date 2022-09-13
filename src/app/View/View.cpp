#include "View.h"
#include <wiringPi.h>

View::View(Led *led1, Led *led2, Led *led3, Led *led4, Led *led5)
{
    light1 = led1;
    light2 = led2;
    light3 = led3;
    light4 = led4;
    light5 = led5;
    lightState = LIGHT_OFF;
}

View::~View()
{

}

void View::updateState(std::string strState)
{
    switch(lightState)
    {
        case LIGHT_OFF:
            if(strState == "State1Stage")
            {
                lightState = LIGHT_1Stage;
            }
            break;

        case LIGHT_1Stage:
            if(strState == "State2Stage")
            {
                lightState = LIGHT_2Stage;
            }
            break;

        case LIGHT_2Stage:
            if(strState == "State3Stage")
            {
                lightState = LIGHT_3Stage;
            }
            break;

        case LIGHT_3Stage:
            if(strState == "State4Stage")
            {
                lightState = LIGHT_4Stage;
            }
            break;

        case LIGHT_4Stage:
            if(strState == "State5Stage")
            {
                lightState = LIGHT_5Stage;
            }
            break;
        case LIGHT_5Stage:
            if(strState == "StateOff")
            {
                lightState = LIGHT_OFF;
            }
            break;

        default:
            break;
    }
}

void View::lightView()
{
    switch(lightState)
    {
        case LIGHT_OFF:
            lightOff();
            break;

        case LIGHT_1Stage:
            light1StageOn();
            break;

        case LIGHT_2Stage:
            light2StageOn();
            break;

        case LIGHT_3Stage:
            light3StageOn();
            break;

        case LIGHT_4Stage:
            light4StageOn();
            break;
        case LIGHT_5Stage:
            light5StageOn();
            break;

        default:
            break;
    }
}

void View::lightOff()
{
    light1->Off();
    light2->Off();
    light3->Off();
    light4->Off();
    light5->Off();
}

void View::light1StageOn()
{
    light1->On();
}

void View::light2StageOn()
{
    light2->On();
}

void View::light3StageOn()
{
    light3->On();
}

void View::light4StageOn()
{
    light4->On();
}

void View::light5StageOn()
{
    light5->On();
}