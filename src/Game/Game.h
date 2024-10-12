#pragma once
#include <iostream>
#include "Screen.h"
#include <Rendering/RenderJobs.h>
#include <Rendering/Camera.h>
namespace GUI { class Screen; }
namespace Game {
	class Game {
	private:
		Rendering::Camera* m_pCurrentCamera;
	public:
		Rendering::RenderJobs& renderJob;
		GUI::Screen* m_pCurrentScreen;
		bool bShouldQuit;
		bool bIsGameLoading;
		bool bIsCameraEnabled;
	public:
		Game(Rendering::RenderJobs& renderJob);
		~Game();
		bool InitCamera();
		bool SetScreen(GUI::Screen* pScreen);
		bool ShouldQuit();
		GUI::Screen* getActiveScreen() const;
		Rendering::Camera* getActiveCamera() const;
	};
}