#include "Title.h"

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
}

void Title::draw() const
{
	Scene::SetBackground(ColorF{ 0, 0.2, 0.5 });
	FontAsset(U"TitleFont")(U"yourLife").drawAt(400, 100);
	Circle{ Cursor::Pos(), 50 }.draw(Palette::Orange);
}
