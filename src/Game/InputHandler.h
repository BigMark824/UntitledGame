#pragma once
#include <raylib.h>
#include <Game/GUI.h>
#include <Game/FPSCounter.h>
#include <Rendering/Renderer.h>
namespace Input {
	class InputHandler {
	private:
		Rendering::Renderer renderer;
		GUI::GUIHandler guiHandler;
		GUIComponents::FPSCounterComponent fpsCounter;
	public:
		void PollInputs(Rendering::Renderer& renderer);
	};
}