#include <iostream>
#include "wiringPi.h"
#include "Button.h"
#include "Led.h"
#include "Listener.h"

int main()
{
    std::cout << "Hello World!" << std::endl;

    Button button1(27); // Abstract of Button
    Led led1(25);
    Listener listener(&button1, &led1);
    
    while(1)
    {
        // Listner (Event 감시)
        listener.checkEvent();
        delay(50);
    }

    return 0;
}