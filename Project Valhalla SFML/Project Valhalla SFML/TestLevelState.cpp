#include "TestLevelState.h"
#include "MainMenuState.h"
#include "PauseMenuState.h"

TestLevelState *TestLevelState::m_instance(nullptr);

TestLevelState::TestLevelState()
{
}

TestLevelState& TestLevelState::GetInstance()
{
	// If instance is null, create new one
	if (!m_instance)
		m_instance = new TestLevelState;

	return *m_instance;
}

TestLevelState::~TestLevelState()
{
}


void TestLevelState::Init()
{
	m_backgroundTex.loadFromFile("Media/Art/TestLevelBackground.png");
	m_backgroundSprite.setTexture(m_backgroundTex);

	m_playerTex.loadFromFile("Media/Art/Player.png");
	m_playerSprite.setTexture(m_playerTex);
	m_playerSprite.setPosition(128.f, 128.f);
}

void TestLevelState::Cleanup()
{

}

void TestLevelState::OnEntry()
{

}

void TestLevelState::OnExit()
{

}

void TestLevelState::Update()
{
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::P))
	{
		STATE.ChangeState(&PAUSEMENU);
		// Set timescale to 0;
	}

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::W))
	{
		m_playerSprite.move(0, -0.1);
	}

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::A))
	{
		m_playerSprite.move(-0.1, 0);
	}

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::S))
	{
		m_playerSprite.move(0, 0.1);
	}

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::D))
	{
		m_playerSprite.move(0.1, 0);
	}
}

void TestLevelState::Draw(sf::RenderWindow &window)
{
	window.clear();
	window.draw(m_backgroundSprite);
	window.draw(m_playerSprite);
	window.display();
}