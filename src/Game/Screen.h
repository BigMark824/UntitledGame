#pragma once
#include <Game/Game.h>
#include <Rendering/Renderer.h>
namespace GUI {
	class Screen {
	public:
		virtual void Render() = 0;
		virtual ~Screen() = default;
	};
}