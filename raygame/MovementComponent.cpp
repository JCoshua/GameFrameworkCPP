#include "MovementComponent.h"
#include "Actor.h"
#include "Transform2D.h"
#include "InputComponent.h"

void MovementComponent::update(float deltaTime)
{
	for (int i = 0; i < getOwner()->getComponentCount(); i++)
		if (getOwner()->getComponent(i)->getName() == "InputComponent")
			m_velocity = ((InputComponent*)getOwner()->getComponent(i))->getMoveDirection();

	getOwner()->getTransform()->setLocalPosition(getOwner()->getTransform()->getLocalPosition() + (m_velocity * m_speed * deltaTime));
}
