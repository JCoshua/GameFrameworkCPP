#pragma once
#include "Component.h"
#include <Vector2.h>

class MovementComponent :
	public Component
{
public:
	MovementComponent() {};
	MovementComponent(float speed) { m_speed = speed; }
	~MovementComponent() { delete this; }
	void start() override;
	void update(float deltaTime) override;
	void draw() override;
	void end() override;
	void onCollision(Actor* other) override;

	float getSpeed() { return m_speed; }
	void setSpeed(float value) { m_speed = value; }
	MathLibrary::Vector2 getVelocity() { return m_velocity; }
	void setVelocity(MathLibrary::Vector2 value) { m_velocity = value; }
private:
	float m_speed;
	MathLibrary::Vector2 m_velocity;
};

