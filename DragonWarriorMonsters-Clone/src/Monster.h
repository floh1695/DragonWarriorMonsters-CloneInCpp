#ifndef MONSTER_H_
#define MONSTER_H_

#include <iostream>
#include <string>

#include "monsterConstants.h"

using namespace std;

class Monster {
  public:
    Monster();
    ~Monster();
  protected:
  private:
    //char location; // 01 = farm, 02 = team
    string name;
    //string _name_1[6]; //pointless
    SpeciesName species;
    Family family;
    bool fatherIsBase;
    Gender gender;
    Command command;
    string masterName;
    int masterNumber;

    SpeciesName fathersSpecies;
    SpeciesName mothersSpecies;
    string fathersMastersName;
    string mothersMastersName;
    int fathersMastersNumber;
    int mothersMastersNumber;
    string fathersName;
    string mothersName;
    int fathersPlus;
    int mothersPlus;

    Skill skills[8];
    Skill skillList[25];
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
