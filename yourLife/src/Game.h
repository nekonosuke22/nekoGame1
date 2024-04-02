#pragma once
#include "Manager.h"
#include "Player/Player.h"

class Game : public App::Scene
{
private:
	Player player;
	int32 cube_r = 80;

public:
	Game(const InitData& init);

	~Game();

	void update() override;
	void draw() const override;
};

