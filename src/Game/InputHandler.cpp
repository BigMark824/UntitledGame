#include <InputHandler.h>

namespace Input {
	bool isFpsCounterVisible = false;
	void InputHandler::PollInputs(Rendering::Renderer& renderer)
	{
		if (IsKeyDown(KEY_F3)) {
			guiHandler.RenderComponent(&fpsCounter, renderer);
		}
	}
}