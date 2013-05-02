#include <iostream>
#include <string>
//#include <array>

#include "Monster.h"
#include "monsterConstants.h"

using namespace std;

int main() {
  Monster *monster = new Monster(DrakSlime);
  cout << "sizeof(char)\t\t=> " << sizeof(char) << "\n";
  cout << "sizeof(SpeciesNames)\t=> " << sizeof(SpeciesName) << "\n";
  cout << "monster\t\t\t=> " << monster << "\n";
  return 0;
}
