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
		Rendering::RenderJobs& renderJob;

		std::string m_loadingText;
		int m_iCenterX;
		int m_iCenterY;

	public:
		StartGame(Game::Game* m_pGame, Rendering::RenderJobs& renderJobRef);
		~StartGame();
		void Render() override;
	};
}