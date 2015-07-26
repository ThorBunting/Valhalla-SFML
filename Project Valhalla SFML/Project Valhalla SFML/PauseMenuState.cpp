#include "PauseMenuState.h"
#include "TestLevelState.h"

PauseMenuState *PauseMenuState::m_instance(nullptr);

PauseMenuState::PauseMenuState()
{
}

PauseMenuState& PauseMenuState::GetInstance()
{
	// If instance is null, create new one
	if (!m_instance)
		m_instance = new PauseMenuState;

	return *m_instance;
}

PauseMenuState::~PauseMenuState()
{
}

void PauseMenuState::Init()
{
	m_backgroundTex.loadFromFile("Media/Art/PauseMenu.png");
	m_backgroundSprite.setTexture(m_backgroundTex);
}

void PauseMenuState::Cleanup()
{

}

void PauseMenuState::OnEntry()
{

}

void PauseMenuState::OnExit()
{

}

void PauseMenuState::Update()
{
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::O))
	{
		STATE.ChangeState(&TESTLEVEL);
	}

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Escape))
	{
		// Exit the game.
	}
}

void PauseMenuState::Draw(sf::RenderWindow &window)
{
	window.draw(m_backgroundSprite);
	window.display();
}