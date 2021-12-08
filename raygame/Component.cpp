#include "Component.h"

Component::Component(Actor* actor, const char* name)
{
	m_owner = actor;
	m_name = name;
}

Component::~Component()
{
	delete this;
}

void Component::start()
{
}

void Component::update(float deltaTime)
{
}

void Component::draw()
{
}

void Component::end()
{
}

void Component::onCollision(Actor* other)
{
}
