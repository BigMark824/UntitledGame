#pragma once
#include <Rendering/RenderJobs.h>
#include <string>
#include "GuiComponent.h"

namespace GUIComponents {
    class FPSCounterComponent : public GUI::GUIComponent {
    public:
        void Draw(Rendering::RenderJobs& renderJob) override; 
    };
}
