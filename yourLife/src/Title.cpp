#include "Title.h"

Title::Title(const InitData& init)
	: IScene{ init }
{
	Print << U"Title::Title()";
}

Title::~Title()
{
	Print << U"Title::~Title()";
}

void Title::update()
{
	m_startTransition.update(m_startButton.mouseOver());
	m_exitTransition.update(m_exitButton.mouseOver());


	if (m_startButton.mouseOver() || m_exitButton.mouseOver())
	{
		Cursor::RequestStyle(CursorStyle::Hand);
	}

	if (m_startButton.leftClicked())
	{
		changeScene(State::Game);
	}

	else if(m_exitButton.leftClicked())
		System::Exit();
}

void Title::draw() const
{
	Scene::SetBackground(ColorF{ 0, 0.2, 0.5 });
	FontAsset(U"TitleFont")(U"yourLife").drawAt(400, 100);
	Circle{ Cursor::Pos(), 50 }.draw(Palette::Orange);

	m_startButton.draw(ColorF{ 1.0, m_startTransition.value() }).drawFrame(2);
	m_exitButton.draw(ColorF{ 1.0, m_exitTransition.value() }).drawFrame(2);

	FontAsset(U"Menu")(U"はじめる").drawAt(m_startButton.center(), ColorF{ 0.25 });
	FontAsset(U"Menu")(U"おわる").drawAt(m_exitButton.center(), ColorF{ 0.25 });
}
