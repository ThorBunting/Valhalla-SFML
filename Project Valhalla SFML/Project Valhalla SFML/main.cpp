
#include "StateManager.h"
#include "MainMenuState.h"

int main()
{
	sf::RenderWindow mainWindow(sf::VideoMode(1024, 768), "Project Valhalla SFML");

	STATE.ChangeState(&MAINMENU);

	while (mainWindow.isOpen())
	{
		sf::Event event;
		while (mainWindow.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				mainWindow.close();
		}

		STATE.UpdateCurrentState();
		STATE.DrawCurrentState(mainWindow);
	}

	return 0;
}