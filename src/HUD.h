#ifndef HUD_H
#define HUD_H
#include "SpriteSheet.h"
#include "Animation.h"
class HUD
{
public:
    HUD();
    void tick(float deltaTime);
    void paint();
private:
    enum Anim
    {
        ANIM_RED_POTION, ANIM_PURPLE_POTION, ANIM_BLUE_POTION, NUM_ANIMS
    };
    SpriteSheet* m_potionsSheet;
    Animation* m_animatedPotions[NUM_ANIMS];
    float m_animationTimeState;
};

#endif // HUD_H