//
// Created by Vesa on 15.7.2016.
//
#include <iostream>
#include <vector>
#include <random>
#include "Counter.h"

using namespace std;

Counter::Counter(string id) {
    m_name = id;
}

void Counter::increment() {
    ++m_count;
}

int Counter::tally() {
    return m_count;
}

string Counter::toString() {
    string temp = "";
    temp += to_string(m_count);
    temp += " ";
    temp += m_name;

    return temp;
}

int Counter::compareTo(Counter that) {
    if (m_count < that.m_count) return -1;
    else if (m_count > that.m_count) return +1;
    else return 0;
}

int main(int argc, char** argv) {
    int n = stoi(argv[1]);
    int trials = stoi(argv[2]);

    vector<Counter> hits;

    for (int i = 0; i < n; i++) {
        string id("counter");
        id = id + to_string(i);

        hits.push_back(Counter(id));
    }

    for (int i = 0; i < n; i++) {
        cout << hits[i].toString() << endl;
    }

    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dis(0, n - 1);
    for (int t = 0; t < trials; t++) {
        hits[dis(gen)].increment();
    }

    for (int i = 0; i < n; i++) {
        cout << hits[i].toString() << endl;
    }

    int T = 10000;
    Counter heads("heads");
    Counter tails("tails");

    bernoulli_distribution d(0.5);
    for (int i = 0; i < T; i++) {
        if (d(gen))
            heads.increment();
        else
            tails.increment();
    }

    cout << heads.toString() << endl;
    cout << tails.toString() << endl;

    int diff = heads.tally() - tails.tally();
    cout << "delta: " << abs(diff) << endl;

    T = 1000000;
    int sides = 6;

    vector<Counter> rolls;

    for (int i = 0; i < sides; i++) {
        string temp = "";
        temp += to_string(i+1);
        temp += "'s";

        rolls.push_back(Counter(temp));
    }

    default_random_engine generator;
    uniform_int_distribution<int> uni_d(0, sides);

    for (int t = 0; t < T; t++) {
        int result = uni_d(generator);
        rolls[result].increment();
    }

    for (int i  = 0; i < sides; i++) {
        cout << rolls[i].toString() << endl;
    }

    double xlo = 0.0;
    double xhi = 0.0;
    double ylo = 0.0;
    double yhi = 0.0;

    T = 1;


}