//
// Created by Vesa on 8.7.2016.
//

#ifndef KOE2_HELLOWORLD_H
#define KOE2_HELLOWORLD_H

#include <iostream>

class HelloWorld {
private:
    char *m_data;

public:
    HelloWorld()
    {
        m_data = new char[14];
        const char *init = "Hello, World!";
        for (int i = 0; i < 14; i++) {
            m_data[i] = init[i];
        }
    }

    ~HelloWorld()
    {
        delete[] m_data;

    }

    void print() {
        std::cout << m_data;
    }
};


#endif //KOE2_HELLOWORLD_H
