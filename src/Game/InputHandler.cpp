#include <InputHandler.h>

namespace Input {
	bool isFpsCounterVisible = false;
	void InputHandler::PollInputs(Rendering::RenderJobs& renderJob)
	{
		if (IsKeyDown(KEY_F3)) {
			guiHandler.RenderComponent(&fpsCounter, renderJob);
		}
	}
}