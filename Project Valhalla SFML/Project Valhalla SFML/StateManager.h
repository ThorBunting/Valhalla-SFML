#pragma once

#include <SFML/Graphics.hpp>
#include <vector>

class GameState;

class StateManager
{
public:
	static StateManager &GetInstance();
	~StateManager();

	void ChangeState(GameState* state);
	void AddState(GameState* state);
	void RemoveState();

	void UpdateCurrentState();
	void DrawCurrentState(sf::RenderWindow &window);

protected:
	StateManager() { }

private:
	static StateManager *m_instance;

	std::vector<GameState*> states;

};

#define STATE StateManager::GetInstance()