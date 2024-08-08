#include "personalization.hpp"

namespace PersonalizationMenu {

std::vector<std::string> gauntletOptions = {
    std::string(RANDOM_CHOICE_STR),
    std::string(RANDOM_COLOR_STR),
    std::string(CUSTOM_COLOR_STR),
    "Silver",
    "Gold",
    "Black",
    "Green",
    "Blue",
    "Bronze",
    "Red",
    "Sky Blue",
    "Pink",
    "Magenta",
    "Orange",
    "Lime",
    "Purple",
};

std::vector<std::string> childTunicOptions = {
    std::string(RANDOM_CHOICE_STR),
    std::string(RANDOM_COLOR_STR),
    std::string(CUSTOM_COLOR_STR),
    "Kokiri Green",
    "Goron Red",
    "Zora Blue",
    "Black",
    "White",
    "Orange",
    "Yellow",
    "Cyan",
    "Indigo",
    "Purple",
    "Pink",
    "Dark Gray",
    "Salmon",
    "Wine Red",
    "Beige",
    "Brown",
    "Sand",
    "Tea Green",
    "Dark Green",
    "Powder Blue",
    "Teal",
    "Sky Blue",
    "Faded Blue",
    "Lavender",
    "Magenta",
    "Mauve",
    "Silver",
    "Gold",
    "Rainbow",
    "Same as Kokiri",
};

std::vector<std::string> tunicOptions = VectorCopyExceptLastElement(childTunicOptions);

std::vector<std::string> naviOuterOptionNames = {
    std::string(RANDOM_CHOICE_STR),
    std::string(RANDOM_COLOR_STR),
    std::string(CUSTOM_COLOR_STR),
    "White",
    "Green",
    "Light Blue",
    "Yellow",
    "Red",
    "Magenta",
    "Gold",
    "Black",
    "Tatl",
    "Tael",
    "Fi",
    "Ciela",
    "Epona",
    "Ezlo",
    "King Red Lions",
    "Linebeck",
    "Loftwing",
    "Midna",
    "Phantom Zelda",
    "Rainbow",
    "Same as Inner",
};

std::vector<std::string> naviInnerOptionNames = VectorCopyExceptLastElement(naviOuterOptionNames);

std::vector<std::string> weaponTrailOuterOptionNames = {
    std::string(RANDOM_CHOICE_STR),
    std::string(RANDOM_COLOR_STR),
    std::string(CUSTOM_COLOR_STR),
    "White",
    "Black",
    "Red",
    "Green",
    "Blue",
    "Yellow",
    "Cyan",
    "Magenta",
    "Orange",
    "Gold",
    "Purple",
    "Pink",
    "Rainbow",
    "Same as Inner",
};

std::vector<std::string> weaponTrailInnerOptionNames = VectorCopyExceptLastElement(weaponTrailOuterOptionNames);

std::vector<std::string> trailDurationOptionNames = {
    "Disabled",
    "Very short",
    "Vanilla",
    "Long",
    "Very Long",
    "Lightsaber",
};

std::vector<std::string> chuTrailDurationOptionNames = {
    "Disabled",
    "Short",
    "Vanilla",
    "Long",
    "Very Long",
    "Hero's Path",
};

std::vector<std::string_view> cosmeticDescriptions = {
    RANDOM_CHOICE_DESC,
    RANDOM_COLOR_DESC,
    CUSTOM_COLOR_DESC,
    "This will only affect the color on Link's model.",
};

Option CustomTunicColors          = Option::Bool("Custom Tunic Colors",      {"Off", "On"},                 {""},                                                                                                                                                             OptionCategory::Cosmetic);
Option ChildTunicColor            = Option::U8  (2, "Child Tunic Color",     childTunicOptions,             cosmeticDescriptions,                                                                                                                                             OptionCategory::Cosmetic,        SAME_AS_KOKIRI);
Option KokiriTunicColor           = Option::U8  (2, "Kokiri Tunic Color",    tunicOptions,                  cosmeticDescriptions,                                                                                                                                             OptionCategory::Cosmetic,                     3); // Kokiri Green
Option GoronTunicColor            = Option::U8  (2, "Goron Tunic Color",     tunicOptions,                  cosmeticDescriptions,                                                                                                                                             OptionCategory::Cosmetic,                     4); // Goron Red
Option ZoraTunicColor             = Option::U8  (2, "Zora Tunic Color",      tunicOptions,                  cosmeticDescriptions,                                                                                                                                             OptionCategory::Cosmetic,                     5); // Zora Blue
Option SilverGauntletsColor       = Option::U8  ("Silver Gauntlets Color",   gauntletOptions,               cosmeticDescriptions,                                                                                                                                             OptionCategory::Cosmetic,                     3); // Silver
Option GoldGauntletsColor         = Option::U8  ("Gold Gauntlets Color",     gauntletOptions,               cosmeticDescriptions,                                                                                                                                             OptionCategory::Cosmetic,                     4); // Gold
Option CustomNaviColors           = Option::Bool("Custom Navi Colors",       {"Off", "On"},                 {""},                                                                                                                                                             OptionCategory::Cosmetic);
Option IdleNaviInnerColor         = Option::U8  (2, "Idle (Inner)",          naviInnerOptionNames,          {RANDOM_CHOICE_DESC, RANDOM_COLOR_DESC, CUSTOM_COLOR_DESC, naviColorsDesc},                                                                                       OptionCategory::Cosmetic,                     3); // White
Option NPCNaviInnerColor          = Option::U8  (2, "On NPC (Inner)",        naviInnerOptionNames,          {RANDOM_CHOICE_DESC, RANDOM_COLOR_DESC, CUSTOM_COLOR_DESC, naviColorsDesc},                                                                                       OptionCategory::Cosmetic,                     5); // Light Blue
Option EnemyNaviInnerColor        = Option::U8  (2, "On Enemy (Inner)",      naviInnerOptionNames,          {RANDOM_CHOICE_DESC, RANDOM_COLOR_DESC, CUSTOM_COLOR_DESC, naviColorsDesc},                                                                                       OptionCategory::Cosmetic,                     6); // Yellow
Option PropNaviInnerColor         = Option::U8  (2, "On Prop (Inner)",       naviInnerOptionNames,          {RANDOM_CHOICE_DESC, RANDOM_COLOR_DESC, CUSTOM_COLOR_DESC, naviColorsDesc},                                                                                       OptionCategory::Cosmetic,                     4); // Green
Option IdleNaviOuterColor         = Option::U8  (2, "Idle (Outer)",          naviOuterOptionNames,          {RANDOM_CHOICE_DESC, RANDOM_COLOR_DESC, CUSTOM_COLOR_DESC, naviColorsDesc},                                                                                       OptionCategory::Cosmetic,    SAME_AS_INNER_NAVI);
Option NPCNaviOuterColor          = Option::U8  (2, "On NPC (Outer)",        naviOuterOptionNames,          {RANDOM_CHOICE_DESC, RANDOM_COLOR_DESC, CUSTOM_COLOR_DESC, naviColorsDesc},                                                                                       OptionCategory::Cosmetic,    SAME_AS_INNER_NAVI);
Option EnemyNaviOuterColor        = Option::U8  (2, "On Enemy (Outer)",      naviOuterOptionNames,          {RANDOM_CHOICE_DESC, RANDOM_COLOR_DESC, CUSTOM_COLOR_DESC, naviColorsDesc},                                                                                       OptionCategory::Cosmetic,    SAME_AS_INNER_NAVI);
Option PropNaviOuterColor         = Option::U8  (2, "On Prop (Outer)",       naviOuterOptionNames,          {RANDOM_CHOICE_DESC, RANDOM_COLOR_DESC, CUSTOM_COLOR_DESC, naviColorsDesc},                                                                                       OptionCategory::Cosmetic,    SAME_AS_INNER_NAVI);
Option CustomTrailEffects         = Option::Bool("Custom Trail Effects",     {"Off", "On"},                 {""},                                                                                                                                                             OptionCategory::Cosmetic);
Option ChosenSimpleMode           = Option::Bool(2, "Draw simple texture",   {"When necessary","Always"},   {necessarySimpleModeDesc,alwaysSimpleModeDesc},                                                                                                                   OptionCategory::Cosmetic);
Option SwordTrailInnerColor       = Option::U8  (2, "Sword (Inner Color)",   weaponTrailInnerOptionNames,   {RANDOM_CHOICE_DESC, RANDOM_COLOR_DESC, CUSTOM_COLOR_DESC, "Select the color that appears from the base\nof the sword."},                                         OptionCategory::Cosmetic,                      3); // White
Option SwordTrailOuterColor       = Option::U8  (2, "Sword (Outer Color)",   weaponTrailOuterOptionNames,   {RANDOM_CHOICE_DESC, RANDOM_COLOR_DESC, CUSTOM_COLOR_DESC, "Select the color that appears from the tip\nof the sword."},                                          OptionCategory::Cosmetic,    SAME_AS_INNER_TRAIL);
Option SwordTrailDuration         = Option::U8  (2, "Sword (Duration)",      trailDurationOptionNames,      {"Select the duration for sword trails.\n\nIf too many trails are on screen, the duration\nmay be capped at Long for some of them."},                             OptionCategory::Cosmetic,                      2); // Vanilla
Option BoomerangTrailColor        = Option::U8  (2, "Boomerang (Color)",     weaponTrailInnerOptionNames,   {RANDOM_CHOICE_DESC, RANDOM_COLOR_DESC, CUSTOM_COLOR_DESC, "Select the color for boomerang trails."},                                                             OptionCategory::Cosmetic,                      8); // Yellow
Option BoomerangTrailDuration     = Option::U8  (2, "Boomerang (Duration)",  trailDurationOptionNames,      {"Select the duration for boomerang trails."},                                                                                                                    OptionCategory::Cosmetic,                      2); // Vanilla
Option BombchuTrailInnerColor     = Option::U8  (2, "Bombchu (Inner Color)", weaponTrailInnerOptionNames,   {RANDOM_CHOICE_DESC, RANDOM_COLOR_DESC, CUSTOM_COLOR_DESC, "Select the color for the center of the\nbombchu trail."},                                             OptionCategory::Cosmetic,                      5); // Red
Option BombchuTrailOuterColor     = Option::U8  (2, "Bombchu (Outer Color)", weaponTrailOuterOptionNames,   {RANDOM_CHOICE_DESC, RANDOM_COLOR_DESC, CUSTOM_COLOR_DESC, "Select the color for the sides of the\nbombchu trail."},                                              OptionCategory::Cosmetic,    SAME_AS_INNER_TRAIL);
Option BombchuTrailDuration       = Option::U8  (2, "Bombchu (Duration)",    chuTrailDurationOptionNames,   {"Select the duration for bombchu trails."},                                                                                                                      OptionCategory::Cosmetic,                      2); // Vanilla

std::string finalChildTunicColor      = ChildTunicColor.GetSelectedOptionText();
std::string finalKokiriTunicColor     = KokiriTunicColor.GetSelectedOptionText();
std::string finalGoronTunicColor      = GoronTunicColor.GetSelectedOptionText();
std::string finalZoraTunicColor       = ZoraTunicColor.GetSelectedOptionText();
std::string finalSilverGauntletsColor = SilverGauntletsColor.GetSelectedOptionText();
std::string finalGoldGauntletsColor   = GoldGauntletsColor.GetSelectedOptionText();
std::string finalIdleNaviInnerColor   = IdleNaviInnerColor.GetSelectedOptionText();
std::string finalNPCNaviInnerColor    = NPCNaviInnerColor.GetSelectedOptionText();
std::string finalEnemyNaviInnerColor  = EnemyNaviInnerColor.GetSelectedOptionText();
std::string finalPropNaviInnerColor   = PropNaviInnerColor.GetSelectedOptionText();
std::string finalIdleNaviOuterColor   = IdleNaviOuterColor.GetSelectedOptionText();
std::string finalNPCNaviOuterColor    = NPCNaviOuterColor.GetSelectedOptionText();
std::string finalEnemyNaviOuterColor  = EnemyNaviOuterColor.GetSelectedOptionText();
std::string finalPropNaviOuterColor   = PropNaviOuterColor.GetSelectedOptionText();
std::string finalSwordTrailOuterColor = SwordTrailOuterColor.GetSelectedOptionText();
std::string finalSwordTrailInnerColor = SwordTrailInnerColor.GetSelectedOptionText();

Cosmetics::Color_RGBA8 finalBoomerangColor = {0};

u8 boomerangTrailColorMode = 0;
std::string finalChuTrailInnerColor   = BombchuTrailInnerColor.GetSelectedOptionText();
std::string finalChuTrailOuterColor   = BombchuTrailOuterColor.GetSelectedOptionText();

Option ColoredKeys =     Option::Bool("Colored Small Keys", {"Off", "On"},                                {coloredKeysDesc},                                                                                                                                  OptionCategory::Cosmetic);
Option ColoredBossKeys = Option::Bool("Colored Boss Keys",  {"Off", "On"},                                {coloredBossKeysDesc},                                                                                                                              OptionCategory::Cosmetic);
Option BetaSoldOut =     Option::Bool("Beta Sold-Out Model",{"Off", "On"},                                {betaSoldOutDesc},                                                                                                                                  OptionCategory::Cosmetic);

std::vector<Option *> cosmeticOptions = {
    &CustomTunicColors,
    &ChildTunicColor,
    &KokiriTunicColor,
    &GoronTunicColor,
    &ZoraTunicColor,
    &SilverGauntletsColor,
    &GoldGauntletsColor,
    &CustomNaviColors,
    &IdleNaviInnerColor,
    &NPCNaviInnerColor,
    &EnemyNaviInnerColor,
    &PropNaviInnerColor,
    &IdleNaviOuterColor,
    &NPCNaviOuterColor,
    &EnemyNaviOuterColor,
    &PropNaviOuterColor,
    &CustomTrailEffects,
    &ChosenSimpleMode,
    &SwordTrailInnerColor,
    &SwordTrailOuterColor,
    &SwordTrailDuration,
    &BoomerangTrailColor,
    &BoomerangTrailDuration,
    &BombchuTrailInnerColor,
    &BombchuTrailOuterColor,
    &BombchuTrailDuration,
    &ColoredKeys,
    &ColoredBossKeys,
    &BetaSoldOut,
};

Menu cosmetics                = Menu::SubMenu("Cosmetic Settings",          &cosmeticOptions);

REGISTER_MENU(cosmetics);

}