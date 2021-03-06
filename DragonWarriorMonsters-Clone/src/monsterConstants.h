#ifndef MONSTERCONSTANTS_H_
#define MONSTERCONSTANTS_H_



using namespace std;

enum Skill {
  Ahhh,      Antidote,  AquaCut,   AquaWall,  Bang,
  Barrier,   BazooCall, BeastCut,  Beat,      BeDragon,
  Berserker, BiAttack,  BigBang,   BigTrip,   BirdBlow,
  Bladed,    Blaze,     BlazeAir,  BlazeMore, BlazeMost,
  Blizzard,  Bolt,      BoltSlash, Boom,      Bounce,
  BugBlow,   CallHelp,  Chance,    ChargeUp,  CleanCut,
  Cover,     Curse,     CurseOff,  DanceOff,  DeChaos,
  Defeat,    Defense,   DeMagic,   DevilCut,  DiagoCall
};

enum Gender {
  MALE, FEMALE
};

enum ParameterType {
  MAX_LEVEL, EXPERIENCE, HEALTH, MANA, ATTACK,
  DEFENSE, AGILITY, INTELLIGENCE, WILD
};

enum Family {
  SLIME, DRAGON, BEAST, BIRD, PLANT,
  BUG, DEMON, ZOMBIE, MATERIAL, WATER,
  BOSS
};

enum SpeciesName {
  //Slimes
  DrakSlime, SpotSlime, WingSlime, TreeSlime, Snaily,
  SlimeNite, Babble,    BoxSlime,  PearlGel,  Slime,
  Healer,    FangSlime, RockSlime, SlimeBorg, Slabbit,
  KingSlime, Metaly,    Metabble,  SpotKing,  TropicGel,
  MimeSlime, HaloSlime, MetalKing, GoldSlime, GranSlime,
  WonderEgg,

  //Dragons
  DragonKid, Tortragon, Pteranod,  Gasgon,    FairyDrak,
  LizardMan, Poisongon, Swordgon,  Drygon,    Dragon,
  MiniDrak,  MadDragon, Rayburn,   Chamelgon, LizardFly,
  Andreal,   KingCobra, Vampirus,  SnakeBat,  Spikerous,
  GreatDrak, Crestpent, WingSnake, Coatol,    Orochi,
  BattleRex, SkyDragon, Serpentia, Divinegon, Orligon,
  GigaDraco,

  //Beasts
  Tonguella, Almiraj,   CatFly,    PillowRat, Saccer,
  GulpBeast, Skullroo,  WindBeast, Beavern,   Antbear,
  SuperTen,  IronTurt,  Mommonja,  HammerMan, Grizzly,
  Yeti,      ArrowDog,  NoctoKing, BeastNite, MadGopher,
  FairyRat,  Unicorn,   Goategon,  WildApe,   Trumpeter,
  KingLeo,   DarkHorn,  MadCat,    BigEye,    Gorago,
  CatMage,   Dumbira,

  //Birds
  Picky,     Wyvern,    BullBird,  Florajay,  DuckKite,
  MadPecker, MadRaven,  MistyWing, AquaHawk,  Dracky,
  KiteHawk,  BigRoost,  StubBird,  LandOwl,   MadGoose,
  MadCondor, Emyu,      Blizzardy, Phoenix,   ZapBird,
  Garudian,  WhipBird,  FunkyBird, RainHawk,  Azurile,
  Shantak,   CragDevil,

  //Plants
  MadPlant,  FireWeed,  FloraMan,  WingTree,  CactiBall,
  Gulpple,   Toadstool, AmberWeed, Slurperon, Stubsuck,
  Oniono,    DanceVegi, TreeBoy,   Devipine,  FaceTree,
  HerbMan,   BeanMan,   EvilSeed,  ManEater,  Snapper,
  GhosTree,  Rosevine,  Egdracil,  Warubou,   Watabou,
  Eggplaton, FooHero,

  //Bugs


  //Demons


  //Zombies


  //Materials


  //Waters


  //Bosses


  //Others
  SeaKing
};

enum Resistance {
  A, B, C, D, E,
  F, G, H, I, J,
  K, L, M, N, O,
  P, Q, R, S, T,
  U, V, W, X, Y,
  Z, AE
};

enum Command {
  Charge,
  Mixed,
  Defending,
  Direction,
  NoMP
};

enum Status {
  NOMINAL, DEAD, POISONED
};

//int* getParameters(SpeciesName species);                                                                                                      
string getNameFromSpeciesName(SpeciesName species);

#endif
