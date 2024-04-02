#include "Player.h"

Player::Player()
{
	pos.x = 0;
	pos.y = 0;
}

void Player::move()
{
	if (KeyLeft.pressed() && pos.x > 0)
	{
		pos.x -= speed;
	}
	if (KeyRight.pressed())
	{
		pos.x += speed;
	}
}

void Player::draw() const
{
	TextureAsset(U"player_texture").drawAt(pos.x, pos.y);
}
