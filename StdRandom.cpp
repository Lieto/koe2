//
// Created by Vesa on 15.7.2016.
//

#include "StdRandom.h"
#include <chrono>
#include <string>
#include <iostream>

using namespace std;

StdRandom::StdRandom() {

    m_seed = chrono::system_clock::now().time_since_epoch().count();
    random = Random(m_seed);

}
static void StdRandom::setSeed(long long int s) {
    m_seed = s;

}

static long long int StdRandom::getSeed() {
    return m_seed;
}

int main(int argc, char** argv) {

    if ( argc == 2) StdRandom::setSeed(stol(argv[1]));

    double probabilities[] = { 0.5, 0.3, 0.1, 0.1 };
    int frequencies[] = {5, 3, 1, 1 };
    string a[] = {"A", "B", "C", "D", "E", "F", "G"};

    cout << "seed = " <<  StdRandom::getSeed() << endl;
}
