#ifndef VIEW_H
#define VIEW_H

#include <string>
#include "Led.h"

#pragma once

enum {LIGHT_OFF, LIGHT_1Stage, LIGHT_2Stage, LIGHT_3Stage, LIGHT_4Stage, LIGHT_5Stage};

class View
{

private:
    int lightState;
    Led *light1;
    Led *light2;
    Led *light3;
    Led *light4;
    Led *light5;

public:
    View(Led *led1, Led *led2, Led *led3, Led *led4, Led *led5);
    ~View();
    void updateState(std::string strState);
    void lightView();
    void lightOff();
    void light1StageOn();
    void light2StageOn();
    void light3StageOn();
    void light4StageOn();
    void light5StageOn();

};

#endif