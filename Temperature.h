//
// Created by Vesa on 7.7.2016.
//

#ifndef KOE2_TEMPERATURE_H
#define KOE2_TEMPERATURE_H

class Humidity;

class Temperature {
private:
    int m_temp;
public:
    Temperature(int temp=0);
    void setTemperature(int temp);
    friend void printWeather(const Temperature &temperature, const Humidity &humidity);

};


#endif //KOE2_TEMPERATURE_H
