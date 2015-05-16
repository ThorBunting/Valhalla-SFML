#include "StateManager.h"
#include "GameState.h"

StateManager *StateManager::m_instance(nullptr);

StateManager::~StateManager()
{
}

StateManager &StateManager::GetInstance()
{
	// If instance is null, create new one
	if (!m_instance)
		m_instance = new StateManager;

	return *m_instance;
}

void StateManager::ChangeState(GameState* state)
{
	// Removes Current State
	if (!states.empty()) {
		states.back()->Cleanup();
		states.pop_back();
	}

	// Sets Current State to New State and Initialises it.
	states.push_back(state);
	states.back()->Init();
	states.back()->OnEntry();
}

void StateManager::AddState(GameState* state)
{
	// Pauses Current State
	if (!states.empty()) {
		states.back()->OnExit();
	}

	// Sets Current State to New State and Initialises it.
	states.push_back(state);
	states.back()->Init();
	states.back()->OnEntry();
}

void StateManager::RemoveState()
{
	// Removes Current States
	if (!states.empty()) {
		states.back()->Cleanup();
		states.pop_back();
	}

	// Goes Back Into Previous State
	if (!states.empty()) {
		states.back()->OnEntry();
	}
}

void StateManager::UpdateCurrentState()
{
	states.back()->Update();
}

void StateManager::DrawCurrentState(sf::RenderWindow &window)
{
	states.back()->Draw(window);
}