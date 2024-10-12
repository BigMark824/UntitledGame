#pragma once
#include <Rendering/RenderJobs.h>
#include <string>
#include "GuiComponent.h"

namespace GUIComponents {
    class ImageBox : public GUI::GUIComponent {
    public:
        Texture2D texture;
        Vector2 position;
        float scale;
        float rotation;

        ImageBox(const char* imagePath, Vector2 position, float imageRotation, float imageScale);
        void Draw(Rendering::RenderJobs& renderJob) override;
    };
}
