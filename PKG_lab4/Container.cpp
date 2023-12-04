#include "Container.h"

//void Container::shapesInit(vector<vector<point>>& shapes, vector<point>& zPointAll, vector<COLORREF>& colorFill, vector<COLORREF>& colorBorder)
//{
//    vector <point> shape1;
//    point p;
//    COLORREF color;
//    //-----------------------------0-------------------------
//    p.x = 0;
//    p.y = 0;
//    shape1.push_back(p);
//    p.x = 500;
//    p.y = 0;
//    shape1.push_back(p);
//    p.x = 0;
//    p.y = 130;
//    shape1.push_back(p);
//    p.x = 500;
//    p.y = 130;
//    shape1.push_back(p);
//    shapes.push_back(shape1);
//    //затравочная точка
//    p.x = 1;
//    p.y = 1;
//    zPointAll.push_back(p);
//    //color
//    color = 0x00000000;
//    colorFill.push_back(color);
//
//    //-----------------------------1-------------------------
//    shape1.clear();
//    p.x = 303;
//    p.y = 35;
//    shape1.push_back(p);
//    p.x = 310;
//    p.y = 35;
//    shape1.push_back(p);
//    p.x = 310;
//    p.y = 63;
//    shape1.push_back(p);
//    shapes.push_back(shape1);
//    //затравочная точка
//    p.x = 306;
//    p.y = 38;
//    zPointAll.push_back(p);
//    //color
//    color = 0x00000000;
//    colorFill.push_back(color);
//    //-----------------------------2-------------------------
//    shape1.clear();
//    p.x = 319;
//    p.y = 34;
//    shape1.push_back(p);
//    p.x = 326;
//    p.y = 34;
//    shape1.push_back(p);
//    p.x = 319;
//    p.y = 63;
//    shape1.push_back(p);
//    shapes.push_back(shape1);
//    //затравочная точка
//    p.x = 323;
//    p.y = 36;
//    zPointAll.push_back(p);
//    //color
//    color = 0x00000000;
//    colorFill.push_back(color);
//    //-----------------------------3-------------------------
//    shape1.clear();
//    p.x = 182;
//    p.y = 54;
//    shape1.push_back(p);
//    p.x = 194;
//    p.y = 47;
//    shape1.push_back(p);
//    p.x = 196;
//    p.y = 64;
//    shape1.push_back(p);
//    shapes.push_back(shape1);
//    //затравочная точка
//    p.x = 292;
//    p.y = 53;
//    zPointAll.push_back(p);
//    //color
//    color = 0x000000FF;
//    colorFill.push_back(color);
//    //-----------------------------4-------------------------
//    shape1.clear();
//    p.x = 336;
//    p.y = 46;
//    shape1.push_back(p);
//    p.x = 346;
//    p.y = 55;
//    shape1.push_back(p);
//    p.x = 329;
//    p.y = 62;
//    shape1.push_back(p);
//    shapes.push_back(shape1);
//    //затравочная точка
//    p.x = 334;
//    p.y = 57;
//    zPointAll.push_back(p);
//    //color
//    color = 0x000000FF;
//    colorFill.push_back(color);
//    //-----------------------------5-------------------------
//    shape1.clear();
//    p.x = 187;
//    p.y = 72;
//    shape1.push_back(p);
//    p.x = 313;
//    p.y = 53;
//    shape1.push_back(p);
//    p.x = 313;
//    p.y = 91;
//    shape1.push_back(p);
//    shapes.push_back(shape1);
//    //затравочная точка
//    p.x = 300;
//    p.y = 70;
//    zPointAll.push_back(p);
//    //color
//    color = 0x000000FF;
//    colorFill.push_back(color);
//    //-----------------------------6-------------------------
//    shape1.clear();
//    p.x = 314;
//    p.y = 53;
//    shape1.push_back(p);
//    p.x = 341;
//    p.y = 72;
//    shape1.push_back(p);
//    p.x = 314;
//    p.y = 91;
//    shape1.push_back(p);
//    shapes.push_back(shape1);
//    //затравочная точка
//    p.x = 320;
//    p.y = 70;
//    zPointAll.push_back(p);
//    //color
//    color = 0x000000FF;
//    colorFill.push_back(color);
//    //-----------------------------7-------------------------
//    shape1.clear();
//    p.x = 290;
//    p.y = 97;
//    shape1.push_back(p);
//    p.x = 298;
//    p.y = 83;
//    shape1.push_back(p);
//    p.x = 298;
//    p.y = 100;
//    shape1.push_back(p);
//    shapes.push_back(shape1);
//    //затравочная точка
//    p.x = 295;
//    p.y = 95;
//    zPointAll.push_back(p);
//    //color
//    color = 0x000000FF;
//    colorFill.push_back(color);
//    //-----------------------------8-------------------------
//    shape1.clear();
//    p.x = 303;
//    p.y = 104;
//    shape1.push_back(p);
//    p.x = 308;
//    p.y = 88;
//    shape1.push_back(p);
//    p.x = 312;
//    p.y = 105;
//    shape1.push_back(p);
//    shapes.push_back(shape1);
//    //затравочная точка
//    p.x = 308;
//    p.y = 101;
//    zPointAll.push_back(p);
//    //color
//    color = 0x000000FF;
//    colorFill.push_back(color);
//    //-----------------------------9-------------------------
//    shape1.clear();
//    p.x = 316;
//    p.y = 104;
//    shape1.push_back(p);
//    p.x = 320;
//    p.y = 89;
//    shape1.push_back(p);
//    p.x = 325;
//    p.y = 104;
//    shape1.push_back(p);
//    shapes.push_back(shape1);
//    //затравочная точка
//    p.x = 321;
//    p.y = 100;
//    zPointAll.push_back(p);
//    //color
//    color = 0x000000FF;
//    colorFill.push_back(color);
//    //-----------------------------10-------------------------
//    shape1.clear();
//    p.x = 333;
//    p.y = 100;
//    shape1.push_back(p);
//    p.x = 328;
//    p.y = 82;
//    shape1.push_back(p);
//    p.x = 341;
//    p.y = 95;
//    shape1.push_back(p);
//    shapes.push_back(shape1);
//    //затравочная точка
//    p.x = 334;
//    p.y = 94;
//    zPointAll.push_back(p);
//    //color
//    color = 0x000000FF;
//    colorFill.push_back(color);
//    //-----------------------------11-------------------------
//    shape1.clear();
//    p.x = 270;
//    p.y = 58;
//    shape1.push_back(p);
//    p.x = 270;
//    p.y = 42;
//    shape1.push_back(p);
//    p.x = 291;
//    p.y = 58;
//    shape1.push_back(p);
//    shapes.push_back(shape1);
//    //затравочная точка
//    p.x = 274;
//    p.y = 49;
//    zPointAll.push_back(p);
//    //color
//    color = 0x000000FF;
//    colorFill.push_back(color);
//    //-----------------------------12-------------------------
//    shape1.clear();
//    p.x = 282;
//    p.y = 30;
//    shape1.push_back(p);
//    p.x = 297;
//    p.y = 34;
//    shape1.push_back(p);
//    p.x = 291;
//    p.y = 54;
//    shape1.push_back(p);
//    shapes.push_back(shape1);
//    //затравочная точка
//    p.x = 291;
//    p.y = 43;
//    zPointAll.push_back(p);
//    //color
//    color = 0x000000FF;
//    colorFill.push_back(color);
//    //-----------------------------13-------------------------
//    shape1.clear();
//    p.x = 333;
//    p.y = 33;
//    shape1.push_back(p);
//    p.x = 348;
//    p.y = 29;
//    shape1.push_back(p);
//    p.x = 339;
//    p.y = 54;
//    shape1.push_back(p);
//    shapes.push_back(shape1);
//    //затравочная точка
//    p.x = 339;
//    p.y = 42;
//    zPointAll.push_back(p);
//    //color
//    color = 0x000000FF;
//    colorFill.push_back(color);
//    //-----------------------------14-------------------------
//    shape1.clear();
//    p.x = 362;
//    p.y = 38;
//    shape1.push_back(p);
//    p.x = 362;
//    p.y = 54;
//    shape1.push_back(p);
//    p.x = 340;
//    p.y = 54;
//    shape1.push_back(p);
//    shapes.push_back(shape1);
//    //затравочная точка
//    p.x = 350;
//    p.y = 50;
//    zPointAll.push_back(p);
//    //color
//    color = 0x000000FF;
//    colorFill.push_back(color);
//    //mountine
//    //-----------------------------1-------------------------
//    shape1.clear();
//    p.x = 115;
//    p.y = 130;
//    shape1.push_back(p);
//    p.x = 275;
//    p.y = 65;
//    shape1.push_back(p);
//    p.x = 430;
//    p.y = 130;
//    shape1.push_back(p);
//    shapes.push_back(shape1);
//    //затравочная точка
//    p.x = 260;
//    p.y = 100;
//    zPointAll.push_back(p);
//    //color
//    color = 0x0000A5FF;
//    colorFill.push_back(color);
//	//--------------------------------------2---------------------------------
//    shape1.clear();
//    p.x = 10;
//    p.y = 130;
//    shape1.push_back(p);
//    p.x = 170;
//    p.y = 55;
//    shape1.push_back(p);
//    p.x = 30;
//    p.y = 130;
//    shape1.push_back(p);
//    shapes.push_back(shape1);
//    //затравочная точка
//    p.x = 100;
//    p.y = 100;
//    zPointAll.push_back(p);
//    //color
//    color = 0x0000FFFF;
//    colorFill.push_back(color);
//    //---------------------------------3-----------------------------
//    shape1.clear();
//    p.x = 230;
//    p.y = 130;
//    shape1.push_back(p);
//    p.x = 390;
//    p.y = 25;
//    shape1.push_back(p);
//    p.x = 550;
//    p.y = 130;
//    shape1.push_back(p);
//    shapes.push_back(shape1);
//    //затравочная точка
//    p.x = 520;
//    p.y = 120;
//    zPointAll.push_back(p);
//    //color
//    color = 0x0000FFFF;
//    colorFill.push_back(color);
//    //--------------------------------4--------------------------
//    shape1.clear();
//    p.x = 125;
//    p.y = 130;
//    shape1.push_back(p);
//    p.x = 182;
//    p.y = 10;
//    shape1.push_back(p);
//    p.x = 140;
//    p.y = 130;
//    shape1.push_back(p);
//    shapes.push_back(shape1);
//    //затравочная точка
//    p.x = 170;
//    p.y = 25;
//    zPointAll.push_back(p);
//    //color
//    color = 0x0000FFFF;
//    colorFill.push_back(color);
//}


