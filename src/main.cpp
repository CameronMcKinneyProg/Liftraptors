#include <raylib.h>
#include "player.hpp"

using namespace std;

int main()
{
    const int screenWidth = 800;
    const int screenHeight = 600;

    InitWindow(screenWidth, screenHeight, "Liftraptors");
    SetTargetFPS(60);

    Player player;

    while (WindowShouldClose() == false)
    {
        BeginDrawing();
        ClearBackground(WHITE);
        player.Draw();

        EndDrawing();
    }

    CloseWindow();
}