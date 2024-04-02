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
	if (KeyRight.pressed() && pos.x < Scene::Width())
	{
		pos.x += speed;
	}
	if (KeyUp.pressed() && pos.y > 0)
	{
		pos.y -= speed;
	}
	if (KeyDown.pressed() && pos.y < Scene::Height())
	{
		pos.y += speed;
	}
}

void Player::draw() const
{
	TextureAsset(U"player_texture").drawAt(pos.x, pos.y);
}
