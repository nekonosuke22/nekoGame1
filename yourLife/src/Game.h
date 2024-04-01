#pragma once
#include "Manager.h"
class Game : public App::Scene
{
private:
public:
	Game(const InitData& init);

	~Game();

	void update() override;
	void draw() const override;
};

