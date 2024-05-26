#include "player.hpp"

Player::Player()
{
    //texture = LoadTexture("");
    position.x = 100;
    position.y = 100;
}

Player::~Player()
{
    //UnloadTexture(texture);
}

void Player::Draw()
{
    // placeholder rectangle
    Vector2 size;
    size.x = 20;
    size.y = 20;
    DrawRectangleV(position, size, RED);
}