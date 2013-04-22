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
    short species;
    char family;
    bool fatherIsBase;
    bool gender;
    char command;
    string masterName;
    char masterNumber;

    short fathersSpecies;
    short mothersSpecies;
    string fathersMastersName;
    string mothersMastersName;
    char fathersMastersNumber;
    char mothersMastersNumber;
    string fathersName;
    string mothersName;
    char fathersPlus;
    char mothersPlus;

    char skills[8];
    char skillList[25];
    char status;
    char currentLevel;
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
    char resistances[27];
};

#endif
