#pragma once
#include <Rendering/Renderer.h>
#include <string>
#include "GuiComponent.h"

namespace GUIComponents {
    class FPSCounterComponent : public GUI::GUIComponent {
    public:
        void Draw(Rendering::Renderer& renderer) override;
    };
}
