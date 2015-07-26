#pragma once
#include "GameState.h"
class PauseMenuState :
	public GameState
{
public:
	static PauseMenuState& GetInstance();
	~PauseMenuState();

	virtual void Init() override;
	virtual void Cleanup() override;

	virtual void OnEntry() override;
	virtual void OnExit() override;

	virtual void Update() override;
	virtual void Draw(sf::RenderWindow &window) override;

protected:
	PauseMenuState();

private:
	static PauseMenuState *m_instance;

	sf::Texture m_backgroundTex;
	sf::Sprite m_backgroundSprite;
	bool m_backgroundDrawn = false;

	sf::Clock m_inputTimer;

};

#define PAUSEMENU PauseMenuState::GetInstance()
