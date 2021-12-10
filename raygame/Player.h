#pragma once
#include "Actor.h"
#include "MovementComponent.h"
#include "InputComponent.h"
#include "raylib.h"
class Player :
	public Actor
{
public:
	Player() {};
	Player(MovementComponent moveComponent, InputComponent input);
	~Player();
	void start() override;
	void update(float deltaTime) override;
	void draw() override;
	void end() override;
	void setVelocity(MathLibrary::Vector2 velocity) { m_moveComponent->setVelocity(velocity); };

private:
	InputComponent* m_input;
	MovementComponent* m_moveComponent;
};

