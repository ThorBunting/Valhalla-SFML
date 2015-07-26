#include "MainMenuState.h"
#include "TestLevelState.h"

MainMenuState *MainMenuState::m_instance(nullptr);

MainMenuState::MainMenuState()
{
}

MainMenuState& MainMenuState::GetInstance()
{
	// If instance is null, create new one
	if (!m_instance)
		m_instance = new MainMenuState;

	return *m_instance;
}

MainMenuState::~MainMenuState()
{
}

void MainMenuState::Init()
{
	m_backgroundTex.loadFromFile("Media/Art/MainMenu.png");
	m_backgroundSprite.setTexture(m_backgroundTex);
}

void MainMenuState::Cleanup()
{

}

void MainMenuState::OnEntry()
{
	m_backgroundDrawn = false;
}

void MainMenuState::OnExit()
{

}

void MainMenuState::Update()
{
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::P))
	{
		STATE.ChangeState(&TESTLEVEL);
	}

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Escape))
	{
		// Remove this state and prompt manager to close, manager should auto close when no states are active.
	}
}

void MainMenuState::Draw(sf::RenderWindow &window)
{
	if (!m_backgroundDrawn)
	{
		window.clear();
		window.draw(m_backgroundSprite);
		window.display();
	}
}