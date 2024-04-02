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
	if (KeyEscape.pressed())
	{
		System::Exit();
	}

	if (KeyX.pressed())
	{
		changeScene(State::Title);
	}
	player.move();
}

void Game::draw() const
{
	Scene::SetBackground(ColorF{ 0.3, 0.4, 0.5 });
	FontAsset(U"Test")(U"Escで終了").drawAt(100, 100);
	FontAsset(U"Test")(U"Xでタイトルへ戻る").drawAt(100, 120);
	player.draw();
}
