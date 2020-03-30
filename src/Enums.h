#ifndef ENUMS_H
#define ENUMS_H
enum Direction
{
    DIRECTION_LEFT,
    DIRECTION_RIGHT,
    DIRECTION_UP,
    DIRECTION_DOWN,
    DIRECTION_NONE
};

enum CateroryBit
{
    CATEGORY_BIT_PLAYER  = 1 << 0,
    CATEGORY_BIT_MONSTER = 1 << 1,
    CATEGORY_BIT_BLOCK   = 1 << 2
};

enum
{
    GAME_OBJECT_TYPE_PLAYER,
    GAME_OBJECT_TYPE_MONSTER,
    GAME_OBJECT_TYPE_ITEM
};

enum
{
    MONSTER_TYPE_SLIME,
    MONSTER_TYPE_KOBLOD
};
#endif // ENUMS_H
