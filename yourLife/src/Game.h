﻿#pragma once
#include "Manager.h"
#include "Player/Player.h"

class Game : public App::Scene
{
private:
	Player player;
public:
	Game(const InitData& init);

	~Game();

	void update() override;
	void draw() const override;
};

