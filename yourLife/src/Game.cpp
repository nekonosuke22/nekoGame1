#include "Game.h"

void Game::update()
{

}

void Game::draw() const
{
	Scene::SetBackground(ColorF{ 0.3, 0.4, 0.5 });
	FontAsset(U"Test")(U"Gamedayo").drawAt(100, 100);
}
