#include <MainMenu.h>
namespace GUI {
	MainMenu::MainMenu(Game::Game* m_pGame, Rendering::RenderJobs& renderJobRef) : renderJob(renderJobRef), startButton(nullptr), m_pGame(m_pGame)
	{
		m_bIsMenuActive = !m_bIsMenuActive;

		normalStartTexture = LoadTexture("Assets/Textures/Buttons/StartButton.png");
		startButtonHoverTexture = LoadTexture("Assets/Textures/Buttons/StartButtonHovered.png");
		normalExitTexture = LoadTexture("Assets/Textures/Buttons/ExitButton.png");
		exitButtonHoverTexture = LoadTexture("Assets/Textures/Buttons/ExitButtonHovered.png");

		// title icon login
		titleIcon = new GUIComponents::ImageBox("Assets/Textures/Logos/UntitledGame.png", { 0,0 }, 0.0f, 0.7f);

		int titleIconWidth = titleIcon->texture.width;
		int titleIconHeight = titleIcon->texture.height;

		float scaledWidth = titleIconWidth * titleIcon->scale;
		float scaledHeight = titleIconHeight * titleIcon->scale;

		Vector2 startIconPos = {
			(GetScreenWidth() - scaledWidth) / 2,
			(GetScreenHeight() - scaledHeight) / 12
		};

		titleIcon->position = startIconPos;

		// start button logic
		startButton = new GUIComponents::CustomButtonComponent("Assets/Textures/Buttons/StartButton.png", { 0,0 }, 1.0f);
		startButtonHoverTexture = LoadTexture("Assets/Textures/Buttons/StartButtonPressed.png");

		int startBtnWidth = startButton->texture.width;
		int startBtnHeight = startButton->texture.height;

		Vector2 startBtnPos = {
			(GetScreenWidth() - startBtnWidth) / 2,
			(GetScreenHeight() - startBtnHeight) / 2.2
		};

		startButton->position = startBtnPos;


		// exit button logic

		exitButton = new GUIComponents::CustomButtonComponent("Assets/Textures/Buttons/ExitButton.png", { 0,0 }, 1.0f);
		exitButtonHoverTexture = LoadTexture("Assets/Textures/Buttons/ExitButtonPressed.png");

		int exitBtnWidth = exitButton->texture.width;
		int exitBtnHeight = exitButton->texture.height;

		Vector2 exitBtnPos = {
			(GetScreenWidth() - exitBtnWidth) / 2,
			(GetScreenHeight() - exitBtnHeight) / 1.5
		};

		exitButton->position = exitBtnPos;
	}
	void MainMenu::Render()
	{
		if (m_bIsMenuActive) {

			titleIcon->Draw(renderJob);

			if (startButton->isHovered(GetMousePosition())) {
				startButton->texture = startButtonHoverTexture;
			}
			else {
				startButton->texture = normalStartTexture;
			}
			startButton->Draw(renderJob);

			if (exitButton->isHovered(GetMousePosition())) {
				exitButton->texture = exitButtonHoverTexture;
			}
			else {
				exitButton->texture = normalExitTexture;
			}
			exitButton->Draw(renderJob);

			if (startButton->isPressed(GetMousePosition(), IsMouseButtonReleased(MOUSE_BUTTON_LEFT))) {
				m_bIsMenuActive = false;
				m_pGame->SetScreen(new GUI::StartGame(m_pGame, renderJob));
			}

			if (exitButton->isPressed(GetMousePosition(), IsMouseButtonReleased(MOUSE_BUTTON_LEFT))) {
				m_pGame->bShouldQuit = true;
			}
		}
	}

	MainMenu::~MainMenu()
	{
		UnloadTexture(normalStartTexture);
		UnloadTexture(startButtonHoverTexture);
		UnloadTexture(normalExitTexture);
		UnloadTexture(exitButtonHoverTexture);
		delete titleIcon;
		delete startButton;
		delete exitButton;
	}
}