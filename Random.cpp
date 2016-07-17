//
// Created by Vesa on 15.7.2016.
//

#include "Random.h"

Random::Random() {

}
Random::Random(long seed) {

    setSeed(seed);

}

void Random::setSeed(long seed) {
    //seed = (seed ^ multiplier) & mask;
    m_seed = seed;
    haveNextNextGaussian = false;

}