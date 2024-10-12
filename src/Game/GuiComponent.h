#pragma once
#include <Rendering/RenderJobs.h> 

namespace GUI {
    class GUIComponent {
    public:
        virtual void Draw(Rendering::RenderJobs& renderJob) = 0; 
        virtual ~GUIComponent() = default;
    };
}
