#pragma once
#include <raylib.h>

class Player
{
public:
    Player();
    ~Player();
    void Draw();
    void Thrust();
    void RotateLeft();
    void RotateRight();
    void FireWeapon();

private:
    Texture2D texture;
    Vector2 position;
};