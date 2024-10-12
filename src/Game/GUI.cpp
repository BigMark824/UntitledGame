#include <GUI.h>
#include <Rendering/RenderJobs.h>

namespace GUI {
    void GUIHandler::RenderComponent(GUIComponent* component, Rendering::RenderJobs& renderJob)
    {
        if (component) {
            component->Draw(renderJob);
        }
    }

    void GUIHandler::DestroyComponent(GUIComponent* component)
    {
        delete component;
    }
}
