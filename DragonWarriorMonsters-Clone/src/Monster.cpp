#include <iostream>
#include <string>

#include "Monster.h"
#include "monsterConstants.h"

using namespace std;

/* Generate Random Monster... */
Monster::Monster() {
  
}

Monster::Monster(SpeciesName species) {
  this->species = species;
}

std::ostream& operator<<(std::ostream &strm, const Monster &monster) {
  return strm << "Monster{ Species: " << getNameFromSpeciesName(monster.species) << "}";
}
