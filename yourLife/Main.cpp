# include <Siv3D.hpp>
#include "src/Title.h"
#include "src/Game.h"
void Main()
{
	FontAsset::Register(U"TitleFont", 60, Typeface::Heavy);
	FontAsset::Register(U"Test", 30, Typeface::Black);
	App manager;

	manager.add<Title>(U"Title")
		.add<Game>(U"Game");

	while (System::Update())
	{
		if (not manager.update())
		{
			break;
		}
	}
}
