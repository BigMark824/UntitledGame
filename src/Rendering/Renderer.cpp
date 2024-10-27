#include <Renderer.h>
namespace Rendering {

    Renderer::Renderer()
    {
        spdlog::info("Rendering Initialised");
    }

    Renderer::~Renderer()
    {
        spdlog::info("Rendering Ended");
    }

	void Renderer::ClearScreen()
	{
        ClearBackground(RAYWHITE);
	}

    void Renderer::DrawGUITextBasic(const char* text, int posX, int posY, int fontSize, Color color)
    {
        DrawText(text, posX, posY, fontSize, color);
    }

    int Renderer::GetFPS()
    {
        static double lastTime = GetTime();
        static int nbFrames = 0;
        static double frameRate = 0.0;

        double currentTime = GetTime();
        nbFrames++;

        if (currentTime - lastTime >= 1.0) {
            frameRate = static_cast<double>(nbFrames);
            nbFrames = 0;
            lastTime = currentTime;
        }

        return frameRate;
    }
}