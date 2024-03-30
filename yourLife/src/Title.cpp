#include "Title.h"

void Title::update()
{

}

void Title::draw() const
{
	Scene::SetBackground(ColorF{ 0, 0.2, 0.5 });
	FontAsset(U"TitleFont")(U"yourLife").drawAt(400, 100);
	Circle{ Cursor::Pos(), 50 }.draw(Palette::Orange);
}
