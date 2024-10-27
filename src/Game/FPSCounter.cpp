#include <FPSCounter.h>

namespace GUIComponents {
    void FPSCounterComponent::Draw(Rendering::Renderer& renderer) {
        int fps = renderer.GetFPS();

        std::string fpsText = "FPS: " + std::to_string(fps);

        renderer.DrawGUITextBasic(fpsText.c_str(), 0, 0, 24, BLACK);
    }
}