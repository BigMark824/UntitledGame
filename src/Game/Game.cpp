#include <Game.h>
#include <MainMenu.h>
#include <Screen.h>
namespace Game {
	Game::Game(Rendering::RenderJobs& renderJob) : renderJob(renderJob), m_pCurrentScreen(nullptr), m_pCurrentCamera(nullptr)
	{
		bShouldQuit = false;
		bIsGameLoading = false;
		bIsCameraEnabled = false;
		
		GUI::MainMenu* mainMenu = new GUI::MainMenu(this, renderJob);
		SetScreen(new GUI::MainMenu(this, renderJob));
	}

	Game::~Game()
	{
		delete m_pCurrentCamera;
		delete m_pCurrentScreen;
	}

	bool Game::InitCamera()
	{
		m_pCurrentCamera = new Rendering::Camera();

		if (m_pCurrentCamera)
		{
			std::cout << "Camera initialised";
			return true;
		}

		return false;
	}
	Rendering::Camera* Game::getActiveCamera() const
	{
		return m_pCurrentCamera;
	}
	bool Game::SetScreen(GUI::Screen* pScreen)
	{
		m_pCurrentScreen = pScreen;
		if (pScreen)
		{
			pScreen->Render();
		}
		
		return true;
	}

	bool Game::ShouldQuit()
	{
		return bShouldQuit;
	}

	GUI::Screen* Game::getActiveScreen() const
	{
		return m_pCurrentScreen; 
	}
}