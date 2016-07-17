//
// Created by Vesa on 15.7.2016.
//

#ifndef KOE2_COUNTER_H
#define KOE2_COUNTER_H

#include <string>

using namespace std;

class Counter {
private:
    string m_name;
    int m_count = 0;

public:
    Counter(string id);
    void increment();
    int tally();
    string toString();
    int compareTo(Counter that);
};




#endif //KOE2_COUNTER_H
