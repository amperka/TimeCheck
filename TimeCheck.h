#include <Arduino.h>

class TimeCheck
{
public:
    TimeCheck(unsigned long interval);
    TimeCheck(int interval);
    boolean check();
    void defer();
    

private:
    unsigned long _interval;
    unsigned long _oldTime = 0;
};
