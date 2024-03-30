#pragma once
#include "Manager.h"
class Title: public App::Scene
{
private:
public:
	Title(const InitData& init)
		: IScene{init}
	{
		Print << U"Title::Title()";
	}

	~Title()
	{
		Print << U"Title::~Title()";
	}

	void update() override;
	void draw() const override;
};

