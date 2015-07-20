#pragma once

#include "StateManager.h"
#include <SFML/Graphics.hpp>

class GameState
{
public:
	virtual void Init() = 0;
	virtual void Cleanup() = 0;

	virtual void OnEntry() = 0;
	virtual void OnExit() = 0;

	// Handle events in seperate function?
	virtual void Update() = 0;
	virtual void Draw(sf::RenderWindow &window) = 0;

	//virtual void ChangeState(StateManager* stateManager, GameState* state)
	//{
	//	stateManager->ChangeState(state);
	//}

protected:
	GameState() { }

};