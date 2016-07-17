//
// Created by Vesa on 15.7.2016.
//

#ifndef KOE2_RANDOM_H
#define KOE2_RANDOM_H


class Random {
private:
    long m_seed;
    //static const unsigned long long multiplier = 0x5DEECE66DL;
    //static const volatile unsigned long long seedUniquifier = 8682522807148012L;
    //static const unsigned long long mask = (1L << 48) - 1;
    bool haveNextNextGaussian;

public:
    Random();
    Random(long seed);
    void setSeed(long seed);

};


#endif //KOE2_RANDOM_H
