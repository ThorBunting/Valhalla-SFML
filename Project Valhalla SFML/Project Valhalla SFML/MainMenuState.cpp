#include "MainMenuState.h"

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
	shape.setRadius(100);
	shape.setFillColor(sf::Color::Green);
}

void MainMenuState::Cleanup()
{

}

void MainMenuState::OnEntry()
{

}

void MainMenuState::OnExit()
{

}

void MainMenuState::Update()
{
	
}

void MainMenuState::Draw(sf::RenderWindow &window)
{
	window.clear();
	window.draw(shape);
	window.display();
}