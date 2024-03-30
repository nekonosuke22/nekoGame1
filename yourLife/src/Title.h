#pragma once
#include "Manager.h"

class Title: public App::Scene
{
private:
	Rect m_startButton{ Arg::center = Scene::Center(), 300, 60 };
	Transition m_startTransition{ 0.4s, 0.2s };

	Rect m_exitButton{ Arg::center = Scene::Center().movedBy(0,200), 300, 60 };
	Transition m_exitTransition{ 0.4s, 0.2s };

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

