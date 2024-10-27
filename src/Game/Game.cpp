#include <Game.h>
#include <MainMenu.h>
#include <Screen.h>
namespace Game {
	Game::Game() : m_pCurrentScreen(nullptr), m_pCurrentCamera(nullptr)
	{
		renderer = new Rendering::Renderer();
		bShouldQuit = false;
		bIsGameLoading = false;
		bIsCameraEnabled = false;
		
		SetScreen(new GUI::MainMenu(this, *renderer));
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
			m_pCurrentCamera->camera.position = { 0.0f, 1.0f, 5.0f };
			m_pCurrentCamera->camera.target = { 0.0f, 0.0f, 0.0f };
			m_pCurrentCamera->camera.up = { 0.0f, 1.0f, 0.0f };
			m_pCurrentCamera->camera.fovy = 45.0f;              
			m_pCurrentCamera->camera.projection = CAMERA_PERSPECTIVE; 

			spdlog::info("Initialised 3D Camera!");

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
		if (m_pCurrentScreen)
		{
			spdlog::info("Deleted Screen: {}", typeid(*m_pCurrentScreen).name());
			delete m_pCurrentScreen;
			m_pCurrentScreen = nullptr;
		}

		m_pCurrentScreen = pScreen;
		if (pScreen)
		{
			spdlog::info("SetScreen to: {}", typeid(*pScreen).name());
			pScreen->Render();
		}
		
		return true;
	}

	bool Game::ShouldQuit()
	{
		return bShouldQuit;
	}

	GUI::Screen* Game::GetActiveScreen() const
	{
		return m_pCurrentScreen; 
	}
}