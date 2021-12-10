#include "InputComponent.h"

InputComponent::~InputComponent()
{
}

void InputComponent::start()
{
}

void InputComponent::update(float deltaTime)
{
	
}

void InputComponent::draw()
{
}

void InputComponent::end()
{
}

MathLibrary::Vector2 InputComponent::getMoveAxis()
{
	int xDirection = -(Engine::getKeyDown(KeyboardKey::KEY_W)) + (Engine::getKeyDown(KeyboardKey::KEY_S));
	int yDirection = -(Engine::getKeyDown(KeyboardKey::KEY_A)) + (Engine::getKeyDown(KeyboardKey::KEY_D));

	return MathLibrary::Vector2(xDirection, yDirection);
}
