#ifndef MONSTER_H_
#define MONSTER_H_

#include <iostream>
#include <string>

#include "monsterConstants.h"

using namespace std;

class Monster {
  public:
  protected:
  private:
    //char location; // 01 = farm, 02 = team
    string name;
    //string _name_1[6]; //pointless
    SpeciesNames species;
    Families family;
    bool fatherIsBase;
    Gender gender;
    Commands command;
    string masterName;
    int masterNumber;

    SpeciesNames fathersSpecies;
    SpeciesNames mothersSpecies;
    string fathersMastersName;
    string mothersMastersName;
    int fathersMastersNumber;
    int mothersMastersNumber;
    string fathersName;
    string mothersName;
    int fathersPlus;
    int mothersPlus;

    Skills skills[8];
    Skills skillList[25];
    int status;
    int currentLevel;
    int experience;
    short maxHP;
    short currentHP;
    short maxMP;
    short currentMP;
    short attack;
    short defense;
    short intelligence;
    short agility;
    short wild;
    char pluses;
    bool isEgg;
    unsigned char personality[4];
    int resistances[27];
};

#endif
