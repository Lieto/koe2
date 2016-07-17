//
// Created by Vesa on 8.7.2016.
//

#ifndef KOE2_MONSTER_H
#define KOE2_MONSTER_H

#include <string>
#include <iostream>


class Monster {

public:
    enum MonsterType
    {
        Dragon,
        Goblin,
        Ogre,
        Orc,
        Skeleton,
        Troll,
        Vampire,
        Zombie,
        MAX_MONSTER_TYpeS
    };
private:
    MonsterType m_type;
    std::string m_name;
    std::string m_roar;
    int m_hp;

public:

    Monster(MonsterType type=Monster::Skeleton, std::string name="Skel", std::string roar="Clank", int hp=1) : m_type(type), m_name(name), m_roar(roar), m_hp(hp) {}

    std::string getTypeString() {

        switch (m_type) {
            case Dragon: return "dragon";
            case Goblin: return "goblin";
            case Ogre: return "ogre";
            case Orc: return "orc";
            case Skeleton: return "skeleton";
            case Troll: return "troll";
            case Vampire: return "vampire";
            case Zombie: return "zombie";

            }

        return "???";

    }
    void print() {
        std::cout << m_name << " the " << getTypeString() << " has " << 4 << " hit points and says " << m_roar << std::endl;
    }

};


#endif //KOE2_MONSTER_H
