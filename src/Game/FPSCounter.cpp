#include <FPSCounter.h>

namespace GUIComponents {
    void FPSCounterComponent::Draw(Rendering::RenderJobs& renderJob) {
        int fps = renderJob.GetFPS();

        std::string fpsText = "FPS: " + std::to_string(fps);

        renderJob.DrawGUITextBasic(fpsText.c_str(), 0, 0, 24, BLACK);
    }
}