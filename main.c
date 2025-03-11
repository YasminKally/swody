#include <raylib.h>
#include <stdio.h>

int main (void){
    InitWindow(0, 0, "Swody2");
    ToggleFullscreen();
    SetTargetFPS(60);

    const int screenWidth = GetScreenWidth();
    const int screenHeight = GetScreenHeight();
    
    while (!WindowShouldClose()){
        BeginDrawing();
            ClearBackground(BLACK);
            DrawText("The Journey starts here", screenWidth / 2 - MeasureText("The Journey starts here", 20) / 2, 
                screenHeight / 2, 20, RAYWHITE);
        EndDrawing();
    };
  
    CloseWindow();
    return 0;
};