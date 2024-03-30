#pragma once
#include "Manager.h"
class Game : public App::Scene
{
private:
public:
	Game(const InitData& init)
		: IScene{ init }
	{
		Print << U"Game::Game()";
	}

	~Game()
	{
		Print << U"Game::~Game()";
	}

	void update() override;
	void draw() const override;
};

