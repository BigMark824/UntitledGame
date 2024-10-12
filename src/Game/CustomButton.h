#pragma once
#include <Rendering/RenderJobs.h>
#include <string>
#include "GuiComponent.h"

namespace GUIComponents {
    class CustomButtonComponent : public GUI::GUIComponent {

    public:
        Texture2D texture;
        Vector2 position;
        int originalWidth;
        int originalHeight;
        bool isPressed(Vector2 mousePos, bool mousePressed);
        bool isHovered(Vector2 mousePos);
        CustomButtonComponent(const char* imagePath, Vector2 position, float scale);
        void Draw(Rendering::RenderJobs& renderJob) override;
    };
}
