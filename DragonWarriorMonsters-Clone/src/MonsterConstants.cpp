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

string getName(SpeciesNames species) {
  switch (species) {
    case DrakSlime:
      return "Dragon Slime";
    case SpotSlime:
      return "Spotted Slime";
    case WingSlime:
      return "Winged Slime";
    case TreeSlime:
      return "Tree Slime";
    case Snaily:
      return "Snail Slime";
    case SlimeNite:
      return "Slime Knight";
    case Babble:
      return "Bubble Slime";
    case BoxSlime:
      return "Box Slime";
    case PearlGel:
      return "Pearl Slime";
    case Slime:
      return "Slime";
    case Healer:
      return "Heal Slime";
    case FangSlime:
      return "Wild Slime";
    case RockSlime:
      return "Rock Slime";
    case SlimeBorg:
      return "Cyborg Slime";
    case Slabbit:
      return "Rabbit Slime";
    case KingSlime:
      return "King Slime";
    case Metaly:
      return "Metal Slime";
    case Metabble:
      return "Liquid Metal Slime";
    case SpotKing:
      return "Spotted King Slime";
    case TropicGel:
      return "Tropical Slime";
    case MimeSlime:
      return "Mime Slime";
    case HaloSlime:
      return "Angel Slime";
    case MetalKing:
      return "Metal King Slime";
    case GoldSlime:
      return "Golden Slime";
    case GranSlime:
      return "Grandpa Slime";
    case WonderEgg:
      return "Wonderful Egg";
    case DragonKid:
      return "Dragon Kid";

    case SeaKing:
      return "FuckYeah!";

    default:
      return "NO-NAME-ASSIGNED";
  }
}
