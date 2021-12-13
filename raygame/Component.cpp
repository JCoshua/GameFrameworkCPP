#include "Component.h"
#include "Actor.h"

Component::Component()
{
	m_owner = nullptr;
	m_name = nullptr;
	m_started = false;
}

Component::Component(Actor* actor, const char* name)
{
	assignOwner(actor);
	m_name = name;
	m_started = false;
}

Component::~Component()
{
	delete this;
}

void Component::assignOwner(Actor* owner)
{
	if (getOwner())
		return;

	m_owner = owner;
	owner->addComponent(this);
}
