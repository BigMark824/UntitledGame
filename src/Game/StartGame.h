#pragma once
#include <chrono>
#include <thread>
#include <Screen.h>
#include "CustomButton.h"
namespace GUI {
	class StartGame : public Screen{
	private:
		Game::Game* m_pGame;
		bool m_bIsMenuActive = false;
		Rendering::Renderer& renderer;

		std::string m_loadingText;
		int m_iCenterX;
		int m_iCenterY;

	public:
		StartGame(Game::Game* m_pGame, Rendering::Renderer& renderer);
		~StartGame();
		void Render() override;
	};
}