#include "InputComponent.h"
#include "Engine.h"
#include "raylib.h"
#include "Transform2D.h"

void InputComponent::update(float deltaTime)
{
	int xDirection = -(int)(Engine::getKeyDown(KeyboardKey::KEY_W)) + (int)(Engine::getKeyDown(KeyboardKey::KEY_S));
	int yDirection = -(int)(Engine::getKeyDown(KeyboardKey::KEY_A)) + (int)(Engine::getKeyDown(KeyboardKey::KEY_D));

	m_moveDirection.x = xDirection;
	m_moveDirection.y - yDirection;
}