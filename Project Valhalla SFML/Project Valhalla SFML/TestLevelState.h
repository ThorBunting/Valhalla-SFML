#pragma once
#include "GameState.h"
#include <SFML/Graphics.hpp>

class TestLevelState :
	public GameState
{
public:
	static TestLevelState& GetInstance();
	~TestLevelState();

	virtual void Init() override;
	virtual void Cleanup() override;

	virtual void OnEntry() override;
	virtual void OnExit() override;

	virtual void Update() override;

	virtual void Draw(sf::RenderWindow &window) override;

protected:
	TestLevelState();

private:
	static TestLevelState *m_instance;

	sf::Texture m_backgroundTex;
	sf::Sprite m_backgroundSprite;

	sf::Texture m_playerTex;
	sf::Sprite m_playerSprite;
};

#define TESTLEVEL TestLevelState::GetInstance()