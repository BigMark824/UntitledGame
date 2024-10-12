#pragma once
#include <Rendering/RenderJobs.h> 
#include <Screen.h>
namespace GUI {
    class Screen {
    public:
        virtual void RenderScreen(Rendering::RenderJobs& renderJob) = 0;
        virtual ~Screen() = default;
    };
}
