#include "Player.h"

Player::Player(MovementComponent moveComponent, InputComponent input)
{
	m_moveComponent = (MovementComponent*)addComponent(&(Component)moveComponent);
	m_input = (InputComponent*)addComponent(&(Component)input);
}

void Player::start()
{
}

void Player::update(float deltaTime)
{
}

void Player::draw()
{
}

void Player::end()
{
}
