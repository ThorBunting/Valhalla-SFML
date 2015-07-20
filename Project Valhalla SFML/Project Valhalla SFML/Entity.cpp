#include "Entity.h"


Entity::Entity(std::string ID)
{
}


Entity::~Entity()
{
}

void Entity::setTexture(sf::Texture &tex)
{
	m_sprite.setTexture(tex, true);
}
