#include <iostream>
#include "Temperature.h"
#include "Humidity.h"
#include "Vector3d.h"
#include "Point2d.h"
#include "HelloWorld.h"
#include "Monster.h"
#include "MonsterGenerator.h"
using namespace std;

void printWeather(const Temperature &temperature, const Humidity &humidity) {
    cout << "The temperature is: " << temperature.m_temp << " and the humifdity is: " << humidity.m_humidity << endl;
}

int gcd(int p, int q) {

    if (q == 0) return p;
    int r = p % q;
    return gcd(q, r);
}

int main() {
    cout << "Hello, World!" << endl;

    Monster skele(Monster::Skeleton, "Bones", "*rattle*", 4);
    skele.print();

    Monster m = MonsterGenerator::generateMonster();
    m.print();

    HelloWorld hello;
    hello.print();

    Point2d first;
    Point2d second(3.0, 4.0);
    first.print();
    second.print();
    std::cout << "Distance between two points: " << distanceFrom(first, second) << std::endl;

    Point3d p(1.0, 2.0, 3.0);
    Vector3d v(2.0, 2.0, -3.0);

    p.print();
    p.moveByVector(v);
    p.print();

    Humidity hum(10);
    Temperature temp(12);

    printWeather(temp, hum);

    cout << gcd(4, 2) << endl;
    return 0;
}