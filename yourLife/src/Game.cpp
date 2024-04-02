#include "Game.h"

Game::Game(const InitData& init)
		:IScene{ init }
{
	Print << U"Game::Game()";
	Print << Random<int32>(0, 7);
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
	for(int32 i = 80; i < Scene::Width()-80; i+=cube_r)
	{
		for (int32 j = 20; j < Scene::Height()-20; j+=cube_r)
		{
			Rect{i, j, cube_r, cube_r}.draw(Palette::Pink).drawFrame(2);
		}
	}
	FontAsset(U"Test")(U"Escで終了").drawAt(100, 100);
	FontAsset(U"Test")(U"Xでタイトルへ戻る").drawAt(100, 120);
	player.draw();
}
