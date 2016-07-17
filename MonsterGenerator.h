//
// Created by Vesa on 8.7.2016.
//

#ifndef KOE2_MONSTERGENERATOR_H
#define KOE2_MONSTERGENERATOR_H

#include "Monster.h"

class MonsterGenerator {
public:
    static Monster generateMonster() {
       return Monster(Monster::Skeleton, "Bones", "*rattle*", 4);
    }

};



#endif //KOE2_MONSTERGENERATOR_H
