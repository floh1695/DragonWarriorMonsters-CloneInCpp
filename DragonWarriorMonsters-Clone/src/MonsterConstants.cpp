#include <iostream>
#include <string>

#include "monsterConstants.h"

using namespace std;

/*
int* getParameters(SpeciesNames species) {
  switch (species) {
    case DrakSlime:
      return {};
    default:
      cout << "A monster was created without any parameters...";
      return {0, 0, 0, 0, 0, 0, 0, 0};
  }
}
*/

string getNameFromSpeciesName(SpeciesName species) {
  switch (species) {
    case SpeciesName::DrakSlime:
      return "Dragon Slime";
    case SpeciesName::SpotSlime:
      return "Spotted Slime";
    case SpeciesName::WingSlime:
      return "Winged Slime";
    case SpeciesName::TreeSlime:
      return "Tree Slime";
    case SpeciesName::Snaily:
      return "Snail Slime";
    case SpeciesName::SlimeNite:
      return "Slime Knight";
    case SpeciesName::Babble:
      return "Bubble Slime";
    case SpeciesName::BoxSlime:
      return "Box Slime";
    case SpeciesName::PearlGel:
      return "Pearl Slime";
    case SpeciesName::Slime:
      return "Slime";
    case SpeciesName::Healer:
      return "Heal Slime";
    case SpeciesName::FangSlime:
      return "Wild Slime";
    case SpeciesName::RockSlime:
      return "Rock Slime";
    case SpeciesName::SlimeBorg:
      return "Cyborg Slime";
    case SpeciesName::Slabbit:
      return "Rabbit Slime";
    case SpeciesName::KingSlime:
      return "King Slime";
    case SpeciesName::Metaly:
      return "Metal Slime";
    case SpeciesName::Metabble:
      return "Liquid Metal Slime";
    case SpeciesName::SpotKing:
      return "Spotted King Slime";
    case SpeciesName::TropicGel:
      return "Tropical Slime";
    case SpeciesName::MimeSlime:
      return "Mime Slime";
    case SpeciesName::HaloSlime:
      return "Angel Slime";
    case SpeciesName::MetalKing:
      return "Metal King Slime";
    case SpeciesName::GoldSlime:
      return "Golden Slime";
    case SpeciesName::GranSlime:
      return "Grandpa Slime";
    case SpeciesName::WonderEgg:
      return "Wonderful Egg";
    case SpeciesName::DragonKid:
      return "Dragon Kid";

    case SpeciesName::SeaKing:
      return "FuckYeah!";

    default:
      return "NO-NAME-ASSIGNED";
  }
}
