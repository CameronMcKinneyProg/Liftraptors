#include <raylib.h>

using namespace std;

int main()
{
    const int screenWidth = 800;
    const int screenHeight = 600;

    InitWindow(screenWidth, screenHeight, "Liftraptors");
    SetTargetFPS(60);

    while (WindowShouldClose() == false)
    {
        BeginDrawing();
        ClearBackground(WHITE);

        EndDrawing();
    }

    CloseWindow();
}