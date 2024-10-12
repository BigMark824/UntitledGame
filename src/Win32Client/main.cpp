#include <iostream>
#include <stdexcept>
#include <Rendering/RenderJobs.h>
#include <Game/Game.h>
#include <Game/InputHandler.h>
int main(void)
{
    Rendering::RenderJobs renderJob;
    Input::InputHandler inputHandler;
    
    InitWindow(1280, 720, "Game");
    SetWindowState(FLAG_MSAA_4X_HINT);
    SetWindowState(FLAG_WINDOW_MAXIMIZED);
    Game::Game game(renderJob);

    while (!WindowShouldClose() && !game.ShouldQuit())
    {

        BeginDrawing();
            renderJob.ClearScreen();
            inputHandler.PollInputs(renderJob);

            auto pCurrentScreen = game.getActiveScreen();
            if (pCurrentScreen)
            {
                pCurrentScreen->Render();
            }
        EndDrawing(); 
    }

    CloseWindow();
    return 0;
}
