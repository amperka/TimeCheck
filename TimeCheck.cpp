#include "timeCheck.h"

TimeCheck::TimeCheck(unsigned long interval) {
    _interval = interval;
}

TimeCheck::TimeCheck(int interval) {
    _interval = interval;
}

boolean TimeCheck::check() {
    unsigned long timeNow = millis();
  
    if (timeNow - _oldTime > _interval) {
        _oldTime = timeNow;
        return true; 
    } else {
        return false;  
    }
}

void TimeCheck::defer() {
    _oldTime = millis();  
}
