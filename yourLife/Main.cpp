#include "src/Manager.h"
#include "src/Title.h"
#include "src/Game.h"
void Main()
{
	FontAsset::Register(U"TitleFont", 60, Typeface::Heavy);
	FontAsset::Register(U"Test", 30, Typeface::Black);

	App manager;
	manager.add<Title>(State::Title);
	manager.add<Game>(State::Game);

	//from game scene
	//manager.init(State::Game);

	while (System::Update())
	{
		if (not manager.update())
		{
			break;
		}
	}
}
