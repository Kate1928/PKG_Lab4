#pragma once
#include <vector>
#include <windows.h>
#include <wincrypt.h>

using namespace std;


class Container
{
public:
	struct point
	{
		int x;
		int y;
	};
	struct ARGB
	{
		BYTE a;
		BYTE r;
		BYTE g;
		BYTE b;
	};

	vector <vector<Container::point>> pointAllVisible;
	vector <vector<Container::point>> pointAllUnvisible;
	vector <point> shape;
	vector<point> pointUnvisible;
	vector<point> pointVisible;
	point zPoint;
	point crossPoint;
	ARGB colorFill;
	ARGB colorOutline;
	
	
	// Defining region codes
	const int INSIDE = 0; // 0000
	const int LEFT = 1; // 0001
	const int RIGHT = 2; // 0010
	const int BOTTOM = 4; // 0100
	const int TOP = 8; // 1000
	// Defining x_max, y_max and x_min, y_min for
	// clipping rectangle. Since diagonal points are
	// enough to define a rectangle
	int x_max;
	int y_max;
	int x_min;
	int y_min;


};

