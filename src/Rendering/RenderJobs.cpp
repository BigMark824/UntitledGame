#include <RenderJobs.h>
namespace Rendering {
	void RenderJobs::ClearScreen()
	{
        ClearBackground(RAYWHITE);
	}
    void RenderJobs::DrawGUITextBasic(const char* text, int posX, int posY, int fontSize, Color color)
    {
        DrawText(text, posX, posY, fontSize, color);
    }
    int RenderJobs::GetFPS()
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