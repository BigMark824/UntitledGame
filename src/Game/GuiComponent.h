#pragma once
#include <Rendering/Renderer.h> 

namespace GUI {
    class GUIComponent {
    public:
        virtual void Draw(Rendering::Renderer& renderer) = 0;
        virtual ~GUIComponent() = default;
    };
}
