#pragma once
#include <iostream>
#include "Screen.h"
#include <Rendering/Renderer.h>
#include <Rendering/Camera.h>
#include <spdlog/spdlog.h>
namespace GUI { class Screen; }
namespace Game {
	class Game {
	private:
		Rendering::Camera* m_pCurrentCamera;
	public:
		Rendering::Renderer* renderer;
		GUI::Screen* m_pCurrentScreen;
		bool bShouldQuit;
		bool bIsGameLoading;
		bool bIsCameraEnabled;
	public:
		Game();
		~Game();
		bool InitCamera();
		bool SetScreen(GUI::Screen* pScreen);
		bool ShouldQuit();
		GUI::Screen* GetActiveScreen() const;
		Rendering::Camera* getActiveCamera() const;
	};
}