#include <GUI.h>
#include <Rendering/Renderer.h>

namespace GUI {
    void GUIHandler::RenderComponent(GUIComponent* component, Rendering::Renderer& renderer)
    {
        if (component) {
            component->Draw(renderer);
        }
    }

    void GUIHandler::DestroyComponent(GUIComponent* component)
    {
        delete component;
    }
}
