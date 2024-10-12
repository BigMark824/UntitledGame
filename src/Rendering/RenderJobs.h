#pragma once
#if defined(_WIN32)           
#define NOGDI
#define NOUSER 
#endif
#include <stdexcept>
#include <raylib.h>
namespace Rendering {
	class RenderJobs{
	public:
		void ClearScreen();
		void DrawGUITextBasic(const char* text, int posX, int posY, int fontSize, Color color);
		int GetFPS();
	};
}
