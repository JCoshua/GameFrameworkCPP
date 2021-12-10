#include "MovementComponent.h"
#include "Actor.h"
#include "Transform2D.h"
#include "InputComponent.h"

void MovementComponent::start()
{
}

void MovementComponent::update(float deltaTime)
{
	getOwner()->getTransform()->setLocalPosition(getOwner()->getTransform()->getLocalPosition() + (m_velocity.normalize() * m_speed * deltaTime));
}

void MovementComponent::draw()
{
}

void MovementComponent::end()
{
}

void MovementComponent::onCollision(Actor* other)
{
}
