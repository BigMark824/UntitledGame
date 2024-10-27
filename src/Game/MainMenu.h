#pragma once
#include "CustomButton.h"
#include "ImageBox.h"
#include "StartGame.h"
#include <Screen.h>
namespace GUI {
	class MainMenu : public Screen {
	private:
		Game::Game* m_pGame;
		bool m_bIsMenuActive = false;
	
		Texture2D normalStartTexture;      
		Texture2D startButtonHoverTexture;   
		Texture2D currentStartTexture;    

		Texture2D normalExitTexture;        
		Texture2D exitButtonHoverTexture;    
		Texture2D currentExitTexture;    

		GUIComponents::ImageBox* titleIcon;
		GUIComponents::CustomButtonComponent* startButton;
		GUIComponents::CustomButtonComponent* settingsButton;
		GUIComponents::CustomButtonComponent* exitButton;
		Rendering::Renderer& renderer;
	public:
		MainMenu(Game::Game* m_pGame, Rendering::Renderer& renderer);
		~MainMenu();
		void Render() override;
	};
}