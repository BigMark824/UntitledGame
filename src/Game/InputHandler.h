#pragma once
#include <raylib.h>
#include <Game/GUI.h>
#include <Game/FPSCounter.h>
#include <Rendering/RenderJobs.h>
namespace Input {
	class InputHandler {
	private:
		Rendering::RenderJobs renderJob;
		GUI::GUIHandler guiHandler;
		GUIComponents::FPSCounterComponent fpsCounter;
	public:
		void PollInputs(Rendering::RenderJobs& renderJob);
	};
}