// PKG_lab4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include <SFML/Graphics.hpp>
#include <iostream>
#include <windows.h>
#include <stack>
#include <vector>
#include <math.h>


using namespace std;
using namespace sf;

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

vector <vector<point>> shapes;
vector <vector<point>> pointAllVisible;
vector <vector<point>> pointAllUnvisible;
vector<point> zPointAll;
vector<ARGB> colorFill;
vector<ARGB> colorOutline;

void shapesInit(vector<vector<point>>& shapes, vector<point>& zPointAll, vector<ARGB>& colorFill, vector<ARGB>& colorOutline)
{
    vector <point> shape1;
    point p;
    ARGB color;
    //-----------------------------0-------------------------
    p.x = 1;
    p.y = 1;
    shape1.push_back(p);
    p.x = 500;
    p.y = 1;
    shape1.push_back(p);
    p.x = 500;
    p.y = 130;
    shape1.push_back(p);
    p.x = 1;
    p.y = 130;
    shape1.push_back(p);
    
    shapes.push_back(shape1);
    //затравочная точка
    p.x = 42;
    p.y = 42;
    zPointAll.push_back(p);
    //color
    color.a = 0;
    color.r = 0;
    color.g = 0;
    color.b = 0;
    colorFill.push_back(color);
    colorOutline.push_back(color);

    //-----------------------------1-------------------------
    shape1.clear();
    p.x = 303;
    p.y = 35;
    shape1.push_back(p);
    p.x = 310;
    p.y = 35;
    shape1.push_back(p);
    p.x = 310;
    p.y = 63;
    shape1.push_back(p);
    shapes.push_back(shape1);
    //затравочная точка
    p.x = 306;
    p.y = 38;
    zPointAll.push_back(p);
    //color
    color.a = 255;
    color.r = 0;
    color.g = 0;
    color.b = 0;
    colorFill.push_back(color);
    colorOutline.push_back(color);

    //-----------------------------2-------------------------
    shape1.clear();
    p.x = 319;
    p.y = 34;
    shape1.push_back(p);
    p.x = 326;
    p.y = 34;
    shape1.push_back(p);
    p.x = 319;
    p.y = 63;
    shape1.push_back(p);
    shapes.push_back(shape1);
    //затравочная точка
    p.x = 323;
    p.y = 36;
    zPointAll.push_back(p);
    //color
    color.a = 255;
    color.r = 0;
    color.g = 0;
    color.b = 0;
    colorOutline.push_back(color);
    colorFill.push_back(color);
    //-----------------------------3-------------------------
    shape1.clear();
    p.x = 282;
    p.y = 54;
    shape1.push_back(p);
    p.x = 294;
    p.y = 47;
    shape1.push_back(p);
    p.x = 296;
    p.y = 64;
    shape1.push_back(p);
    shapes.push_back(shape1);
    //затравочная точка
    p.x = 292;
    p.y = 53;
    zPointAll.push_back(p);
    //color
    color.a = 255;
    color.r = 0;
    color.g = 0;
    color.b = 0;
    colorOutline.push_back(color);
    color.a = 255;
    color.r = 197;
    color.g = 90;
    color.b = 17;
    colorFill.push_back(color);
    //-----------------------------4-------------------------
    shape1.clear();
    p.x = 336;
    p.y = 46;
    shape1.push_back(p);
    p.x = 346;
    p.y = 55;
    shape1.push_back(p);
    p.x = 329;
    p.y = 62;
    shape1.push_back(p);
    shapes.push_back(shape1);
    //затравочная точка
    p.x = 334;
    p.y = 57;
    zPointAll.push_back(p);
    //color
    color.a = 255;
    color.r = 0;
    color.g = 0;
    color.b = 0;
    colorOutline.push_back(color);
    color.a = 255;
    color.r = 197;
    color.g = 90;
    color.b = 17;
    colorFill.push_back(color);
    //-----------------------------5-------------------------
    shape1.clear();
    p.x = 287;
    p.y = 72;
    shape1.push_back(p);
    p.x = 313;
    p.y = 53;
    shape1.push_back(p);
    p.x = 313;
    p.y = 91;
    shape1.push_back(p);
    shapes.push_back(shape1);
    //затравочная точка
    p.x = 300;
    p.y = 70;
    zPointAll.push_back(p);
    //color
    color.a = 255;
    color.r = 0;
    color.g = 0;
    color.b = 0;
    colorOutline.push_back(color);
    color.a = 255;
    color.r = 197;
    color.g = 90;
    color.b = 17;
    colorFill.push_back(color);
    //-----------------------------6-------------------------
    shape1.clear();
    p.x = 314;
    p.y = 53;
    shape1.push_back(p);
    p.x = 341;
    p.y = 72;
    shape1.push_back(p);
    p.x = 314;
    p.y = 91;
    shape1.push_back(p);
    shapes.push_back(shape1);
    //затравочная точка
    p.x = 320;
    p.y = 70;
    zPointAll.push_back(p);
    //color
    color.a = 255;
    color.r = 0;
    color.g = 0;
    color.b = 0;
    colorOutline.push_back(color);
    color.a = 255;
    color.r = 197;
    color.g = 90;
    color.b = 17;
    colorFill.push_back(color);
    //-----------------------------7-------------------------
    shape1.clear();
    p.x = 290;
    p.y = 97;
    shape1.push_back(p);
    p.x = 298;
    p.y = 83;
    shape1.push_back(p);
    p.x = 298;
    p.y = 100;
    shape1.push_back(p);
    shapes.push_back(shape1);
    //затравочная точка
    p.x = 295;
    p.y = 95;
    zPointAll.push_back(p);
    //color
    color.a = 255;
    color.r = 0;
    color.g = 0;
    color.b = 0;
    colorOutline.push_back(color);
    color.a = 255;
    color.r = 197;
    color.g = 90;
    color.b = 17;
    colorFill.push_back(color);
    //-----------------------------8-------------------------
    shape1.clear();
    p.x = 303;
    p.y = 104;
    shape1.push_back(p);
    p.x = 308;
    p.y = 88;
    shape1.push_back(p);
    p.x = 312;
    p.y = 105;
    shape1.push_back(p);
    shapes.push_back(shape1);
    //затравочная точка
    p.x = 308;
    p.y = 101;
    zPointAll.push_back(p);
    //color
    color.a = 255;
    color.r = 0;
    color.g = 0;
    color.b = 0;
    colorOutline.push_back(color);
    color.a = 255;
    color.r = 197;
    color.g = 90;
    color.b = 17;
    colorFill.push_back(color);
    //-----------------------------9-------------------------
    shape1.clear();
    p.x = 316;
    p.y = 104;
    shape1.push_back(p);
    p.x = 320;
    p.y = 89;
    shape1.push_back(p);
    p.x = 325;
    p.y = 104;
    shape1.push_back(p);
    shapes.push_back(shape1);
    //затравочная точка
    p.x = 321;
    p.y = 100;
    zPointAll.push_back(p);
    //color
    color.a = 255;
    color.r = 0;
    color.g = 0;
    color.b = 0;
    colorOutline.push_back(color);
    color.a = 255;
    color.r = 197;
    color.g = 90;
    color.b = 17;
    colorFill.push_back(color);
    //-----------------------------10-------------------------
    shape1.clear();
    p.x = 333;
    p.y = 100;
    shape1.push_back(p);
    p.x = 329;
    p.y = 83;
    shape1.push_back(p);
    p.x = 341;
    p.y = 95;
    shape1.push_back(p);
    shapes.push_back(shape1);
    //затравочная точка
    p.x = 334;
    p.y = 94;
    zPointAll.push_back(p);
    //color
    color.a = 255;
    color.r = 0;
    color.g = 0;
    color.b = 0;
    colorOutline.push_back(color);
    color.a = 255;
    color.r = 197;
    color.g = 90;
    color.b = 17;
    colorFill.push_back(color);
    //-----------------------------11-------------------------
    shape1.clear();
    p.x = 270;
    p.y = 58;
    shape1.push_back(p);
    p.x = 270;
    p.y = 42;
    shape1.push_back(p);
    p.x = 291;
    p.y = 58;
    shape1.push_back(p);
    shapes.push_back(shape1);
    //затравочная точка
    p.x = 274;
    p.y = 49;
    zPointAll.push_back(p);
    //color
    color.a = 255;
    color.r = 0;
    color.g = 0;
    color.b = 0;
    colorOutline.push_back(color);
    color.a = 255;
    color.r = 197;
    color.g = 90;
    color.b = 17;
    colorFill.push_back(color);
    //-----------------------------12-------------------------
    shape1.clear();
    p.x = 282;
    p.y = 30;
    shape1.push_back(p);
    p.x = 297;
    p.y = 34;
    shape1.push_back(p);
    p.x = 291;
    p.y = 54;
    shape1.push_back(p);
    shapes.push_back(shape1);
    //затравочная точка
    p.x = 291;
    p.y = 43;
    zPointAll.push_back(p);
    //color
    color.a = 255;
    color.r = 0;
    color.g = 0;
    color.b = 0;
    colorOutline.push_back(color);
    color.a = 255;
    color.r = 197;
    color.g = 90;
    color.b = 17;
    colorFill.push_back(color);
    //-----------------------------13-------------------------
    shape1.clear();
    p.x = 333;
    p.y = 33;
    shape1.push_back(p);
    p.x = 348;
    p.y = 29;
    shape1.push_back(p);
    p.x = 339;
    p.y = 54;
    shape1.push_back(p);
    shapes.push_back(shape1);
    //затравочная точка
    p.x = 339;
    p.y = 42;
    zPointAll.push_back(p);
    //color
    color.a = 255;
    color.r = 0;
    color.g = 0;
    color.b = 0;
    colorOutline.push_back(color);
    color.a = 255;
    color.r = 197;
    color.g = 90;
    color.b = 17;
    colorFill.push_back(color);
    //-----------------------------14-------------------------
    shape1.clear();
    p.x = 362;
    p.y = 38;
    shape1.push_back(p);
    p.x = 362;
    p.y = 54;
    shape1.push_back(p);
    p.x = 340;
    p.y = 54;
    shape1.push_back(p);
    shapes.push_back(shape1);
    //затравочная точка
    p.x = 350;
    p.y = 50;
    zPointAll.push_back(p);
    //color
    color.a = 255;
    color.r = 0;
    color.g = 0;
    color.b = 0;
    colorOutline.push_back(color);
    color.a = 255;
    color.r = 197;
    color.g = 90;
    color.b = 17;
    colorFill.push_back(color);
    //mountine
    //-----------------------------1-------------------------
    shape1.clear();
    p.x = 115;
    p.y = 130;
    shape1.push_back(p);
    p.x = 275;
    p.y = 65;
    shape1.push_back(p);
    p.x = 430;
    p.y = 130;
    shape1.push_back(p);
    shapes.push_back(shape1);
    //затравочная точка
    p.x = 260;
    p.y = 100;
    zPointAll.push_back(p);
    //color
    color.a = 255;
    color.r = 0;
    color.g = 0;
    color.b = 0;
    colorOutline.push_back(color);
    color.a = 255;
    color.r = 255;
    color.g = 192;
    color.b = 0;
    colorFill.push_back(color);
    
    //--------------------------------------2---------------------------------
    shape1.clear();
    p.x = 10;
    p.y = 130;
    shape1.push_back(p);
    p.x = 170;
    p.y = 55;
    shape1.push_back(p);
    p.x = 320;
    p.y = 130;
    shape1.push_back(p);
    shapes.push_back(shape1);
    //затравочная точка
    p.x = 100;
    p.y = 100;
    zPointAll.push_back(p);
    //color
    color.a = 255;
    color.r = 0;
    color.g = 0;
    color.b = 0;
    colorOutline.push_back(color);
    color.a = 255;
    color.r = 255;
    color.g = 192;
    color.b = 0;
    colorFill.push_back(color);
    //---------------------------------3-----------------------------
    shape1.clear();
    p.x = 230;
    p.y = 130;
    shape1.push_back(p);
    p.x = 390;
    p.y = 25;
    shape1.push_back(p);
    p.x = 550;
    p.y = 130;
    shape1.push_back(p);
    shapes.push_back(shape1);
    //затравочная точка
    p.x = 520;
    p.y = 120;
    zPointAll.push_back(p);
    //color
    color.a = 255;
    color.r = 0;
    color.g = 0;
    color.b = 0;
    colorOutline.push_back(color);
    color.a = 255;
    color.r = 255;
    color.g = 192;
    color.b = 0;
    colorFill.push_back(color);
    //--------------------------------4--------------------------
    shape1.clear();
    p.x = 125;
    p.y = 130;
    shape1.push_back(p);
    p.x = 282;
    p.y = 10;
    shape1.push_back(p);
    p.x = 439;
    p.y = 130;
    shape1.push_back(p);
    shapes.push_back(shape1);
    //затравочная точка
    p.x = 255;
    p.y = 50;
    zPointAll.push_back(p);
    //color
    color.a = 255;
    color.r = 0;
    color.g = 0;
    color.b = 0;
    colorOutline.push_back(color);
    color.a = 255;
    color.r = 255;
    color.g = 192;
    color.b = 0;
    colorFill.push_back(color);
}

void brezenham(int x1, int x2, int y1, int y2, Color color, RenderWindow& window, RectangleShape& square)
{

    float x, y, dx, dy, signX, signY;
    int error, error2;
    x = x1;
    y = y1;
    dx = abs(x2 - x1);
    dy = abs(y2 - y1);
    signX = x1 < x2 ? 1 : -1; //1
    signY = y1 < y2 ? 1 : -1; //1
    error = dx - dy;
    square.setFillColor(color);
    while (x != x2 || y != y2)
    {
        //SetPixel(hdc, round(x), round(y), color);
        square.setPosition(x, y);
        window.draw(square);
        error2 = error * 2;
        if (error2 > -dy)
        {
            error -= dy;
            x += signX;
        }
        if (error2 < dx)
        {
            error += dx;
            y += signY;
        }
        //window.display();
        //Sleep(20);
    }
}
Texture texture;
Image image;

void areaB(int xz, int yz, Color color, Color colorOutline, RenderWindow& window, RectangleShape& square)
{
    stack <point> stack;
    point p;
    p.x = xz;
    p.y = yz;
    stack.push(p);
    //auto color2 = GetPixel(hdc, 1, 1);
    square.setFillColor(color);
    
    while (!stack.empty())
    {
        p = stack.top();
        stack.pop();
        
        
        int x = p.x;
        int y = p.y;
        texture.update(window);
        Sprite sprite;
        sprite.setTexture(texture);
        //sprite.setOrigin(sf::Vector2f(-500, -500));
        
        image = texture.copyToImage();
        window.display();
        //Sleep(20);
        window.clear();
        window.draw(sprite);
        Color color2;
        //color2 = image.getPixel(x + 1, y);
        if (image.getPixel(x + 1, y) != color && image.getPixel(x + 1, y) != colorOutline)
        {
            p.x = x + 1;
            square.setPosition(p.x, p.y);
            window.draw(square);
            stack.push(p);
        }
        //color2 = image.getPixel(x - 1, y);
        if (image.getPixel(x - 1, y) != color && image.getPixel(x - 1, y) != colorOutline)
        {
            p.x = x - 1;
            square.setPosition(p.x, p.y);
            window.draw(square);
            //Sleep(20);
            stack.push(p);
        }
        p.x = x;
        //color2 = image.getPixel(x, y + 20);
        if (image.getPixel(x, y + 1) != color && image.getPixel(x, y + 1) != colorOutline)
        {
            p.y = y + 1;
            square.setPosition(p.x, p.y);
            window.draw(square);
            stack.push(p);
        }
        //color2 = image.getPixel(x, y - 1);
        if (image.getPixel(x, y - 1) != color && image.getPixel(x, y - 1) != colorOutline)
        {
            p.y = y - 1;
            square.setPosition(p.x, p.y);
            window.draw(square);
            stack.push(p);
        }
        
    }
}

bool pointBelong(vector<point> shape, int x0, int y0)
{
    int a = (shape[0].x - x0) * (shape[1].y - shape[0].y) - (shape[1].x - shape[0].x) * (shape[0].y - y0);
    int b = (shape[1].x - x0) * (shape[2].y - shape[1].y) - (shape[2].x - shape[1].x) * (shape[1].y - y0); 
    int c = (shape[2].x - x0) * (shape[0].y - shape[2].y) - (shape[0].x - shape[2].x) * (shape[2].y - y0); 
    if ((a >= 0 && b >= 0 && c >= 0) || (a <= 0 && b <= 0 && c <= 0))
    {
        return true;
    }
    else
    {
        return false;
    }
   
}

vector<point> pointVisible;
vector<point> pointUnvisible;
point crossPoint;

bool intersection_lineseg(int x1, int y1, int x2, int y2, int xa, int ya, int xb, int yb)
{
    crossPoint.x = -1;
    crossPoint.y = -1;
    if (x2 == x1 && xb == xa)
        return false;
    else if (x2 == x1)
    {
        float m2 = (float)(yb - ya) / (float)(xb - xa);
        crossPoint.x = x1;
        crossPoint.y = ya - m2 * (xa - x1);
    }
    else if (xb == xa)
    {
        float m1 = (float)(y2 - y1) / (float)(x2 - x1);
        crossPoint.x = xa;
        crossPoint.y = y1 + m1 * (xa - x1);
    }
    else
    {
        float m1 = (float)(y2 - y1) / (float)(x2 - x1);
        float m2 = (float)(yb - ya) / (float)(xb - xa);
        if (m1 == m2)
            return false;
        crossPoint.x = (ya - y1 + m1 * x1 - m2 * xa) / (m1 - m2);
        crossPoint.y = (m1 * m2 * (xa - x1) + m2 * y1 - m1 * ya) / (m2 - m1);
    }

    if ((x1 >= x2 && (crossPoint.x<x2 || crossPoint.x>x1)) || (x2 >= x1 && (crossPoint.x > x2 || crossPoint.x < x1)) || (y1 >= y2 && (crossPoint.y<y2 || crossPoint.y>y1)) || (y2 >= y1 && (crossPoint.y > y2 || crossPoint.y < y1))
        || (xa >= xb && (crossPoint.x<xb || crossPoint.x>xa)) || (xb >= xa && (crossPoint.x > xb || crossPoint.x < xa)) || (ya >= yb && (crossPoint.y<yb || crossPoint.y>ya)) || (yb >= ya && (crossPoint.y > yb || crossPoint.y < ya)))
    {
        /*crossPoint.x = -1;
        crossPoint.y = -1;*/
        return false;
    }
    if ((crossPoint.x == x1 && crossPoint.y == y1) || (crossPoint.x == x2 && crossPoint.y == y2))
    {
        return false;
    }
    return true;
}


void sutherlandHodgman(vector<point> shape, int x1, int y1, int x2, int y2)
{
    bool a1 = pointBelong(shape, x1, y1);
    bool a2 = pointBelong(shape, x2, y2);
    point p;
    int pointCount;
    
    if (a1 == false && a2 == false)
    {
        
    }

    if (a1 == true && a2 == true)
    {
        p.x = x2;
        p.y = y2;
        pointUnvisible.push_back(p);
    }

    if (a1 == false && a2 == true)
    {
        
        for (int i = 0; i < 2; i++)
        {
            if (intersection_lineseg(x1, y1, x2, y2, shape[i].x, shape[i].y, shape[i + 1].x, shape[i + 1].y) )
            {
                pointUnvisible.push_back(crossPoint);
                
            }
        }
        if (intersection_lineseg(x1, y1, x2, y2, shape[2].x, shape[2].y, shape[0].x, shape[0].y))
        {
            pointUnvisible.push_back(crossPoint);
        }
        p.x = x2;
        p.y = y2;
        pointUnvisible.push_back(p);
    }
    if (a1 == true && a2 == false)
    {

        if (intersection_lineseg(x1, y1, x2, y2, shape[0].x, shape[0].y, shape[1].x, shape[1].y))
        {
            pointUnvisible.push_back(crossPoint);
        }
        if (intersection_lineseg(x1, y1, x2, y2, shape[1].x, shape[1].y, shape[2].x, shape[2].y))
        {
            pointUnvisible.push_back(crossPoint);
        }
        if (intersection_lineseg(x1, y1, x2, y2, shape[2].x, shape[2].y, shape[0].x, shape[0].y))
        {
            pointUnvisible.push_back(crossPoint);
        }
    }

}

void sutherlandHodgmanVisible(vector<point> shape, int x1, int y1, int x2, int y2)
{
    bool a1 = pointBelong(shape, x1, y1);
    bool a2 = pointBelong(shape, x2, y2);
    bool t = false;
    point p;
    int pointCount;

    if (a1 == false && a2 == false)
    {
        p.x = x2;
        p.y = y2;
        pointVisible.push_back(p);
        //pointCount++;
    }

    if (a1 == true && a2 == true)
    {
       /* p.x = x2;
        p.y = y2;
        pointUnvisible.push_back(p);*/
        //pointVisible.push_back(p);
    }

    if (a1 == false && a2 == true)
    {

        for (int i = 0; i < 2; i++)
        {
            if (intersection_lineseg(x1, y1, x2, y2, shape[i].x, shape[i].y, shape[i + 1].x, shape[i + 1].y) && t == false)
            {
                //pointUnvisible.push_back(crossPoint);
                pointVisible.push_back(crossPoint);
                t = true;
            }
        }
        if (intersection_lineseg(x1, y1, x2, y2, shape[2].x, shape[2].y, shape[0].x, shape[0].y) && t == false)
        {
            //pointUnvisible.push_back(crossPoint);
            pointVisible.push_back(crossPoint);
            t = true;
        }
        /*p.x = x2;
        p.y = y2;
        pointUnvisible.push_back(p);*/
    }
    if (a1 == true && a2 == false)
    {

        if (intersection_lineseg(x1, y1, x2, y2, shape[0].x, shape[0].y, shape[1].x, shape[1].y) && t == false)
        {
            //pointUnvisible.push_back(crossPoint);
            pointVisible.push_back(crossPoint);
            t = true;
        }
        if (intersection_lineseg(x1, y1, x2, y2, shape[1].x, shape[1].y, shape[2].x, shape[2].y) && t == false)
        {
            //pointUnvisible.push_back(crossPoint);
            pointVisible.push_back(crossPoint);
            t = true;
        }
        if (intersection_lineseg(x1, y1, x2, y2, shape[2].x, shape[2].y, shape[0].x, shape[0].y) && t == false)
        {
            //pointUnvisible.push_back(crossPoint);
            pointVisible.push_back(crossPoint);
            t = true;
        }
        p.x = x2;
        p.y = y2;
        pointVisible.push_back(p);
    }
    t = false;

}

//vector <vector<point>> pointA;
//vector <vector<point>> pointC;
//vector<point> pointZ;


// Defining region codes
const int INSIDE = 0; // 0000
const int LEFT = 1; // 0001
const int RIGHT = 2; // 0010
const int BOTTOM = 4; // 0100
const int TOP = 8; // 1000

// Defining x_max, y_max and x_min, y_min for
// clipping rectangle. Since diagonal points are
// enough to define a rectangle
const int x_max = 450;
const int y_max = 120;
const int x_min = 50;
const int y_min = 25;

// Function to compute region code for a point(x, y)
int computeCode(double x, double y)
{
    // initialized as being inside
    int code = INSIDE;

    if (x < x_min) // to the left of rectangle
        code |= LEFT;
    else if (x > x_max) // to the right of rectangle
        code |= RIGHT;
    if (y < y_min) // below the rectangle
        code |= BOTTOM;
    else if (y > y_max) // above the rectangle
        code |= TOP;

    return code;
}


// Implementing Cohen-Sutherland algorithm
// Clipping a line from P1 = (x1, y1) to P2 = (x2, y2)
void сohenSutherland(int x1, int y1, int x2, int y2, vector<point> shape)
{
    // Вычислить коды регионов для P1, P2
    int code1 = computeCode(x1, y1);
    int code2 = computeCode(x2, y2);
    point p, p1;
    bool t = false;


    // Инициализировать строку вне прямоугольного окна
    bool accept = false;

    while (true) {
        if ((code1 == 0) && (code2 == 0)) {
            // Если обе конечные точки лежат внутри прямоугольника
            p.x = x2;
            p.y = y2;
            pointVisible.push_back(p);
            if (t)
                pointVisible.push_back(p1);
            accept = true;
            break;
        }
        else if (code1 & code2) {
            // Если обе конечные точки находятся за пределами прямоугольника, в одном регионе
            break;
        }
        else {
            // Какой-то отрезок линии лежит внутри прямоугольника
            int code_out;
            double x, y;

            // Хотя бы одна конечная точка находится за пределами прямоугольника, выбераем ее.
            if (code1 != 0)
                code_out = code1;
            else
                code_out = code2;

            // Найти точку пересечения;
            // y = y1 + slope * (x - x1),
            // x = x1 + (1 / slope) * (y - y1)
            if (code_out & TOP) {
                // точка находится над прямоугольником обрезки
                x = x1 + (x2 - x1) * (y_max - y1) / (y2 - y1);
                y = y_max;
            }
            else if (code_out & BOTTOM) {
                // точка находится под прямоугольником
                x = x1 + (x2 - x1) * (y_min - y1) / (y2 - y1);
                y = y_min;
            }
            else if (code_out & RIGHT) {
                // точка находится справа от прямоугольника
                y = y1 + (y2 - y1) * (x_max - x1) / (x2 - x1);
                x = x_max;
            }
            else if (code_out & LEFT) {
                // точка находится слева от прямоугольника
                y = y1 + (y2 - y1) * (x_min - x1) / (x2 - x1);
                x = x_min;
            }

            // Теперь точка пересечения x, y найдена.
            // Заменяем точку вне прямоугольника
            // по точке пересечения
            if (code_out == code1) {
                x1 = x;
                y1 = y;
                p.x = x;
                p.y = y;
                pointVisible.push_back(p);
                
                code1 = computeCode(x1, y1);
            }
            else {
                x2 = x;
                y2 = y;
                code2 = computeCode(x2, y2);
                if (pointBelong(shape, x_min, y_min))
                {
                    p1.x = x_min;
                    p1.y = y_min;
                    t = true;
                    //pointVisible.push_back(p);
                }
                if (pointBelong(shape, x_max, y_min))
                {
                    p1.x = x_max;
                    p1.y = y_min;
                    t = true;
                    //pointVisible.push_back(p);
                }
                if (pointBelong(shape, x_min, y_max))
                {
                    p1.x = x_min;
                    p1.y = y_max;
                    t = true;
                    //pointVisible.push_back(p);
                }
                if (pointBelong(shape, x_max, y_max))
                {
                    p1.x = x_max;
                    p1.y = y_max;
                    t = true;
                    //pointVisible.push_back(p);
                }
            }
        }
    }
}


void modeADraw(RenderWindow& window, RectangleShape& square)
{
    //--------------------------------------------------------------------sutherlandHodgman get Visible part---------------------------------------------------------------------------------------
    int j, k;
    for (int i = shapes.size() - 1; i > 0; i--)
    {
        j = i - 1;
        while (j > 0)
        {
            for (int k = 0; k < shapes[i].size() - 1; k++)
            {
                sutherlandHodgmanVisible(shapes[j], shapes[i][k].x, shapes[i][k].y, shapes[i][k + 1].x, shapes[i][k + 1].y);
            }
            int k = shapes[i].size() - 1;
            sutherlandHodgmanVisible(shapes[j], shapes[i][k].x, shapes[i][k].y, shapes[i][0].x, shapes[i][0].y);
            shapes[i] = pointVisible;
            pointVisible.clear();
            j--;
        }
        /*
        for (int k = 0; k < shapes[j].size() - 1; k++)
        {
            sutherlandHodgman(shapes[i], shapes[j][k].x, shapes[j][k].y, shapes[j][k + 1].x, shapes[j][k + 1].y);
        }
        int k = shapes[j].size() - 1;
        sutherlandHodgman(shapes[i], shapes[j][k].x, shapes[j][k].y, shapes[j][0].x, shapes[j][0].y);
        for (int l = 0; l < shapes[i].size(); l++)
        {
            if ((pointVisible[0].x - shapes[i][0].x) * (by - ay) == (bx - ax) * (my - ay)) {
                if (min(ay, by) <= my && (max(ay, by) >= my) && min(ax, bx) <= mx && max(ax, bx) >= mx) {
                    cout << "YES";
                    return 0;
                }
            }
        }
        shapes[i] = pointVisible;
        pointVisible.clear();*/
        
    }
    //---------------------------------------------------------------------сohenSutherland-----------------------------------------------------------------------------------------

    for (int i = 1; i < shapes.size(); i++)
    {
        for (int j = 0; j < shapes[i].size() - 1; j++)
        {
            сohenSutherland(shapes[i][j].x, shapes[i][j].y, shapes[i][j + 1].x , shapes[i][j + 1].y, shapes[i]);
        }
        int t = shapes[i].size() - 1;
        сohenSutherland(shapes[i][t].x, shapes[i][t].y, shapes[i][0].x, shapes[i][0].y, shapes[i]);
        pointAllVisible.push_back(pointVisible);
        pointVisible.clear();
    }

    

    //--------------------------------------------------------------------------отрисовка всего---------------------------------------------------------------------------------------------------
    //отрисовка
    Color color,color2;
    /*for (int i = 1; i < shapes.size(); i++)
    {
        
        color2.a = colorOutline[i].a;
        color2.r = colorOutline[i].r;
        color2.g = colorOutline[i].g;
        color2.b = colorOutline[i].b;
        for (int j = 0; j < shapes[i].size() - 1; j++)
        {
            brezenham(shapes[i][j].x, shapes[i][j + 1].x, shapes[i][j].y, shapes[i][j + 1].y, color2, window, square);
        }
        brezenham(shapes[i][shapes[i].size() - 1].x, shapes[i][0].x, shapes[i][shapes[i].size() - 1].y, shapes[i][0].y, color2, window, square);
        
        color.a = colorFill[i].a;
        color.r = colorFill[i].r;
        color.g = colorFill[i].g;
        color.b = colorFill[i].b;
        areaB(zPointAll[i].x, zPointAll[i].y, color, color2, window, square);
    }
    */

    //--------------------------------------------------------------------------отрисовка сohenSutherland-----------------------------------------------------------------------------------------------------

    k = pointAllVisible.size() - 1;
    for (int i = 0; i <= k; i++)
    {
        Color color, color2;
        color2.a = colorOutline[i + 1].a;
        color2.r = colorOutline[i + 1].r;
        color2.g = colorOutline[i + 1].g;
        color2.b = colorOutline[i + 1].b;
        for (int j = 0; j < pointAllVisible[i].size() - 1; j++)
        {
            brezenham(pointAllVisible[i][j].x, pointAllVisible[i][j + 1].x, pointAllVisible[i][j].y, pointAllVisible[i][j + 1].y, color2, window, square);
        }
        int k2 = pointAllVisible[i].size() - 1;
        brezenham(pointAllVisible[i][k2].x, pointAllVisible[i][0].x, pointAllVisible[i][k2].y, pointAllVisible[i][0].y, color2, window, square);
        //Sleep(200);
        color.a = colorFill[i + 1].a;
        color.r = colorFill[i + 1].r;
        color.g = colorFill[i + 1].g;
        color.b = colorFill[i + 1].b;
        int cx = 0;
        int cy = 0;
        for (int j = 0; j < pointAllVisible[i].size(); j++)
        {
            cx += pointAllVisible[i][j].x;
            cy += pointAllVisible[i][j].y;
        }
        cx /= pointAllVisible[i].size();
        cy /= pointAllVisible[i].size();
        if (i == 17)
        {
            cx = 250;
            cy = 50;
        }
        areaB(cx, cy, color, color2, window, square);   
    }
    areaB(328, 55, color, color2, window, square);
}


void modeBDraw(RenderWindow& window, RectangleShape& square)
{
    int j, k;
    //--------------------------------------------------------------------sutherlandHodgman---------------------------------------------------------------------------------------

    for (int i = shapes.size() - 1; i > 0; i--)
    {
        j = i - 1;
        while (j > 0)
        {
            ////iтый треугольник является отсекающей областью
            sutherlandHodgman(shapes[i], shapes[j][0].x, shapes[j][0].y, shapes[j][1].x, shapes[j][1].y);
            sutherlandHodgman(shapes[i], shapes[j][1].x, shapes[j][1].y, shapes[j][2].x, shapes[j][2].y);
            sutherlandHodgman(shapes[i], shapes[j][2].x, shapes[j][2].y, shapes[j][0].x, shapes[j][0].y);
           
            if (i == 11 || i == 12 || i == 13 || i == 14)
            {
                sutherlandHodgman(shapes[j], shapes[i][0].x, shapes[i][0].y, shapes[i][1].x, shapes[i][1].y);
                sutherlandHodgman(shapes[j], shapes[i][1].x, shapes[i][1].y, shapes[i][2].x, shapes[i][2].y);
                sutherlandHodgman(shapes[j], shapes[i][2].x, shapes[i][2].y, shapes[i][0].x, shapes[i][0].y);
            }
            if ((!pointUnvisible.empty()))// && (pointUnvisible.size() > 2))
            {
                pointAllUnvisible.push_back(pointUnvisible);
                pointUnvisible.clear();
            }
            j--;
        }
    }
    //--------------------------------------------------------------------sutherlandHodgman get Visible part---------------------------------------------------------------------------------------
    for (int i = shapes.size() - 1; i > 0; i--)
    {
        j = i - 1;
        while (j > 0)
        {
            for (int k = 0; k < shapes[i].size() - 1; k++)
            {
                sutherlandHodgmanVisible(shapes[j], shapes[i][k].x, shapes[i][k].y, shapes[i][k + 1].x, shapes[i][k + 1].y);
            }
            int k = shapes[i].size() - 1;
            sutherlandHodgmanVisible(shapes[j], shapes[i][k].x, shapes[i][k].y, shapes[i][0].x, shapes[i][0].y);
            shapes[i] = pointVisible;
            pointVisible.clear();
            j--;
        }
        /*
        for (int k = 0; k < shapes[j].size() - 1; k++)
        {
            sutherlandHodgman(shapes[i], shapes[j][k].x, shapes[j][k].y, shapes[j][k + 1].x, shapes[j][k + 1].y);
        }
        int k = shapes[j].size() - 1;
        sutherlandHodgman(shapes[i], shapes[j][k].x, shapes[j][k].y, shapes[j][0].x, shapes[j][0].y);
        for (int l = 0; l < shapes[i].size(); l++)
        {
            if ((pointVisible[0].x - shapes[i][0].x) * (by - ay) == (bx - ax) * (my - ay)) {
                if (min(ay, by) <= my && (max(ay, by) >= my) && min(ax, bx) <= mx && max(ax, bx) >= mx) {
                    cout << "YES";
                    return 0;
                }
            }
        }
        shapes[i] = pointVisible;
        pointVisible.clear();*/

    }
    //---------------------------------------------------------------------сohenSutherland-----------------------------------------------------------------------------------------

    for (int i = 1; i < shapes.size(); i++)
    {
        for (int j = 0; j < shapes[i].size() - 1; j++)
        {
            сohenSutherland(shapes[i][j].x, shapes[i][j].y, shapes[i][j + 1].x, shapes[i][j + 1].y, shapes[i]);
        }
        int t = shapes[i].size() - 1;
        сohenSutherland(shapes[i][t].x, shapes[i][t].y, shapes[i][0].x, shapes[i][0].y, shapes[i]);
        pointAllVisible.push_back(pointVisible);
        pointVisible.clear();
    }



    //--------------------------------------------------------------------------отрисовка всего---------------------------------------------------------------------------------------------------
    //отрисовка
    Color color, color2;
    /*for (int i = 1; i < shapes.size(); i++)
    {

        color2.a = colorOutline[i].a;
        color2.r = colorOutline[i].r;
        color2.g = colorOutline[i].g;
        color2.b = colorOutline[i].b;
        for (int j = 0; j < shapes[i].size() - 1; j++)
        {
            brezenham(shapes[i][j].x, shapes[i][j + 1].x, shapes[i][j].y, shapes[i][j + 1].y, color2, window, square);
        }
        brezenham(shapes[i][shapes[i].size() - 1].x, shapes[i][0].x, shapes[i][shapes[i].size() - 1].y, shapes[i][0].y, color2, window, square);

        color.a = colorFill[i].a;
        color.r = colorFill[i].r;
        color.g = colorFill[i].g;
        color.b = colorFill[i].b;
        areaB(zPointAll[i].x, zPointAll[i].y, color, color2, window, square);
    }
    */

    //--------------------------------------------------------------------------отрисовка сohenSutherland-----------------------------------------------------------------------------------------------------

    k = pointAllVisible.size() - 1;
    for (int i = 0; i <= k; i++)
    {
        Color color, color2;
        color2.a = colorOutline[i + 1].a;
        color2.r = colorOutline[i + 1].r;
        color2.g = colorOutline[i + 1].g;
        color2.b = colorOutline[i + 1].b;
        for (int j = 0; j < pointAllVisible[i].size() - 1; j++)
        {
            brezenham(pointAllVisible[i][j].x, pointAllVisible[i][j + 1].x, pointAllVisible[i][j].y, pointAllVisible[i][j + 1].y, color2, window, square);
        }
        int k2 = pointAllVisible[i].size() - 1;
        brezenham(pointAllVisible[i][k2].x, pointAllVisible[i][0].x, pointAllVisible[i][k2].y, pointAllVisible[i][0].y, color2, window, square);
        //Sleep(200);
        color.a = colorFill[i + 1].a;
        color.r = colorFill[i + 1].r;
        color.g = colorFill[i + 1].g;
        color.b = colorFill[i + 1].b;
        int cx = 0;
        int cy = 0;
        for (int j = 0; j < pointAllVisible[i].size(); j++)
        {
            cx += pointAllVisible[i][j].x;
            cy += pointAllVisible[i][j].y;
        }
        cx /= pointAllVisible[i].size();
        cy /= pointAllVisible[i].size();
        if (i == 17)
        {
            cx = 250;
            cy = 50;
        }
        areaB(cx, cy, color, color2, window, square);
    }
    color.a = colorFill[18].a;
    color.r = colorFill[18].r;
    color.g = colorFill[18].g;
    color.b = colorFill[18].b;
    areaB(328, 55, color, color2, window, square);

    

    
    //--------------------------------------------------------------------------отрисовка sutherlandHodgman---------------------------------------------------------------------------------------------------

    k = pointAllUnvisible.size() - 1;
    for (int i = k; i >= 0; i--)
    {
        //Color color, color2;
        color2.a = 255;
        color2.r = 5;
        color2.g = 255;
        color2.b = 5;
        for (int j = 0; j < pointAllUnvisible[i].size() - 1; j++)
        {
            brezenham(pointAllUnvisible[i][j].x, pointAllUnvisible[i][j + 1].x, pointAllUnvisible[i][j].y, pointAllUnvisible[i][j + 1].y, color2, window, square);
        }
        int k2 = pointAllUnvisible[i].size() - 1;
        brezenham(pointAllUnvisible[i][k2].x, pointAllUnvisible[i][0].x, pointAllUnvisible[i][k2].y, pointAllUnvisible[i][0].y, color2, window, square);
        //window.display();
        //Sleep(900);
        color.a = 255;
        color.r = 200;
        color.g = 200;
        color.b = 0;
        int cx = 0;
        int cy = 0;
        for (int j = 0; j < pointAllUnvisible[i].size(); j++)
        {
            cx += pointAllUnvisible[i][j].x;
            cy += pointAllUnvisible[i][j].y;
        }
        cx /= pointAllUnvisible[i].size();
        cy /= pointAllUnvisible[i].size();
        if (i == 0)
        {
            cx = 345;
            cy = 70;
        }
        if (i == 1)
        {
            cx = 205;
            cy = 80;
        }
        if (i == 2)
        {
            cx = 260;
            cy = 80;
        }
        if (i == 10)
        {
            cx = 317;
            cy = 60;
        }
        if ((0, 5 * abs(pointAllUnvisible[i][0].x * pointAllUnvisible[i][1].y + pointAllUnvisible[i][1].x * pointAllUnvisible[i][2].y + pointAllUnvisible[i][2].x * pointAllUnvisible[i][0].y - pointAllUnvisible[i][1].x * pointAllUnvisible[i][0].y - pointAllUnvisible[i][2].x * pointAllUnvisible[i][1].y - pointAllUnvisible[i][0].x * pointAllUnvisible[i][2].y)) > 100)
        {
            areaB(cx, cy, color, color2, window, square);
        }


    }


}


int main()
{
    RenderWindow window(VideoMode(800, 800), "Lab4");
    RectangleShape square(Vector2f(1, 1)); //pixel

    

    shapesInit(shapes, zPointAll, colorFill, colorOutline);
    Color color1(255, 255, 255);
    window.clear(color1);
    int j, k;
    texture.create(800, 800);
    //modeADraw(window, square);
    modeBDraw(window, square);
    

    //window.display();
    //Sleep(1000);
    //window.clear(Color::Blue);
    //Sprite sprite;
    //sprite.setTexture(texture);
    //sprite.setOrigin(sf::Vector2f(-500, -500));
    //window.draw(sprite);
    window.display();
    
    while (window.isOpen())
    {
        Event event;
        while (window.pollEvent(event))
        {
            if (event.type == Event::Closed)
                window.close();
        }
    }
}
