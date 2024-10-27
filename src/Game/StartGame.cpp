#include <StartGame.h>
namespace GUI {
	StartGame::StartGame(Game::Game* m_pGame, Rendering::Renderer& renderer) : renderer(renderer), m_pGame(m_pGame)
	{
		bool m_bIsMenuActive = true;
		m_loadingText = "Loading Game...";
		int loadingTextWidth = MeasureText(m_loadingText.c_str(), 50);
		m_iCenterX = (GetScreenWidth() - loadingTextWidth) / 2;
		m_iCenterY = (GetScreenHeight() - 50) / 2;

		if (m_pGame)
			m_pGame->bIsGameLoading = true;
			m_pGame->InitCamera();
			m_pGame->bIsGameLoading = false;
			m_bIsMenuActive = false;
	}
	void StartGame::Render()
	{
		if (m_bIsMenuActive)
		{
			DrawFPS(10, 10);
			DrawText(m_loadingText.c_str(), m_iCenterX, m_iCenterY, 50, BLACK);
		}
	}

	StartGame::~StartGame()
	{
	}
}