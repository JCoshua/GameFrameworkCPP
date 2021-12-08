#pragma once
#include "Component.h"

class InputComponent :
	public Component
{
public:
	InputComponent() {};
	~InputComponent();
	void start() override;
	void update(float deltaTime) override;
	void draw() override;
	void end() override;

	MathLibrary::Vector2 getMoveDirection() { return m_moveDirection; }
	void setMoveDirection(MathLibrary::Vector2 value) { m_moveDirection = value; }
private:
	MathLibrary::Vector2 m_moveDirection;
};

