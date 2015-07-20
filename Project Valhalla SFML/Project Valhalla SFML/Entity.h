#pragma once

#include <SFML/Graphics/Sprite.hpp>
#include <string>
#include <vector>

enum class Faction { NEUTRAL, PLAYER, ENEMY };

class Entity
{
public:
	Entity(std::string ID);
	~Entity();

	void setTexture(sf::Texture &tex);

private:
	std::string m_ID;
	Faction m_faction = Faction::NEUTRAL;
	sf::Sprite m_sprite;
};
