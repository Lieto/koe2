//
// Created by Vesa on 15.7.2016.
//

#ifndef KOE2_STDRANDOM_H
#define KOE2_STDRANDOM_H

#include "Random.h"

class StdRandom {

private:
    static long long int m_seed;
    Random random;

public:
    StdRandom();
    static void setSeed(long long int s);
    static long long int getSeed();
    static double uniform();
    static int uniform(int n);
    //static double random();
    static int uniform(int a, int b);
    static double uniform(double a, double b);
    static bool bernoulli(double p);
    static bool bernoulli();
    static double gaussian();
    static double gaussian(double mu, double sigma);
    static int geometric(double p);
    static int poisson(double lambda);
    static double pareto();
    static double pareto(double alpha);
    static double cauchy();
    static int discrete(const double& probabilities);
    static int discrete(const int& frequencies);
    static double exp(double lambda);
    //static void shuffle(T& a);
    static void shuffle(double& a);
    static void shuffle(int& a);
    //static void shuffle(T&, int lo, int hi);
    static void shuffle(double&, int lo, int hi);
    static void shuffle(int&, int lo, int hi);



};


#endif //KOE2_STDRANDOM_H
