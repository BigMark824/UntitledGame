#include <iostream>
#include <stdexcept>
#include <Rendering/Renderer.h>
#include <Game/Game.h>
#include <Game/InputHandler.h>
int main(void)
{
    Rendering::Renderer renderer;
    Input::InputHandler inputHandler;
    
    InitWindow(1280, 720, "Game");
    SetWindowState(FLAG_MSAA_4X_HINT);
    SetWindowState(FLAG_WINDOW_MAXIMIZED);
    auto game = new Game::Game;
    
    while (!WindowShouldClose() && !game->ShouldQuit())
    {
        BeginDrawing();

            renderer.ClearScreen();
            auto camera = game->getActiveCamera();

            if (camera)
            {
                BeginMode3D(camera->camera);
               // draw stuff from the game loop here todo aaaaa
                EndMode3D();
            }

            inputHandler.PollInputs(renderer);

            auto pCurrentScreen = game->GetActiveScreen();
            if (pCurrentScreen)
            {
                pCurrentScreen->Render();
            }
            
        EndDrawing();
    }

    delete game;
    CloseWindow();
    return 0;
}
