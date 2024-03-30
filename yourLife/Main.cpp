# include <Siv3D.hpp>
#include "src/Manager.h"
#include "src/Game.h"
void Main()
{
	FontAsset::Register(U"Test", 30, Typeface::Black);
	App manager;

	manager.add<Game>(U"Game");

	while (System::Update())
	{
		if (not manager.update())
		{
			break;
		}
	}
}
