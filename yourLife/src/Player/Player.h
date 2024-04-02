#pragma once
#include <Siv3D.hpp>
class Player
{
private:
	struct Pos {
		double x;
		double y;
	}pos;

	double speed = 5;

public:
	Player();
	void move();
	void draw() const;
};

