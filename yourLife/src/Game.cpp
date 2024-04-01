#include "Game.h"

Game::Game(const InitData& init)
		:IScene{ init }
{
	Print << U"Game::Game()";
}

Game::~Game()
{
	Print << U"Game::~Game()";
}

void Game::update()
{

}

void Game::draw() const
{
	Scene::SetBackground(ColorF{ 0.3, 0.4, 0.5 });
	FontAsset(U"Test")(U"Gamedayo").drawAt(100, 100);
}
