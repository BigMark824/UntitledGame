#pragma once
#include <string>
#include "GuiComponent.h"

namespace GUI {
    class GUIHandler {
    public:
        void RenderComponent(GUIComponent* component, Rendering::Renderer& renderer);
        void DestroyComponent(GUIComponent* component);
    };
}
