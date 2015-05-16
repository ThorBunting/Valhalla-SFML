#pragma once

#include "GameState.h"
#include <SFML/Graphics.hpp>

class MainMenuState :
	public GameState
{
public:
	static MainMenuState& GetInstance();
	~MainMenuState();

	virtual void Init() override;
	virtual void Cleanup() override;

	virtual void OnEntry() override;
	virtual void OnExit() override;

	virtual void Update() override;
	virtual void Draw(sf::RenderWindow &window) override;

protected:
	MainMenuState();

private:
	static MainMenuState *m_instance;

	sf::CircleShape shape;

};

#define MAINMENU MainMenuState::GetInstance()