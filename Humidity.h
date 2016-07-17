//
// Created by Vesa on 7.7.2016.
//

#ifndef KOE2_HUMIDITY_H
#define KOE2_HUMIDITY_H

#include "Temperature.h"

class Temperatur;

class Humidity {
private:
    int m_humidity;
public:
    Humidity(int humidity=0);
    void setHumidity(int humidity);
    friend void printWeather(const Temperature &temperature, const Humidity &humidity);

};


#endif //KOE2_HUMIDITY_H
