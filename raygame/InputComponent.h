#pragma once
#include "Component.h"
#include "Engine.h"
#include "raylib.h"

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

	MathLibrary::Vector2 getMoveAxis();
private:
	KeyboardKey m_keyA = KeyboardKey::KEY_A;
	KeyboardKey m_keyD = KeyboardKey::KEY_D;
	KeyboardKey m_keyW = KeyboardKey::KEY_W;
	KeyboardKey m_keyS = KeyboardKey::KEY_S;
	KeyboardKey m_input1 = KeyboardKey::KEY_SPACE;
	KeyboardKey m_enter = KeyboardKey::KEY_ENTER;
	KeyboardKey m_cancel = KeyboardKey::KEY_BACKSPACE;
};

