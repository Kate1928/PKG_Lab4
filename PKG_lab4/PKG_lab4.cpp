// PKG_lab4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include <SFML/Graphics.hpp>
#include <iostream>
#include <windows.h>
#include <stack>
#include <vector>
#include <math.h>

#include "Container.h"

using namespace std;
using namespace sf;


vector <Container> containerVect;
Container container;

void shapesInit()
{
    Container container;
    Container::point p;
    Container::ARGB color;
    //-----------------------------0-------------------------
    p.x = 50;
    p.y = 25;
    container.shape.push_back(p);
    p.x = 450;
    p.y = 25;
    container.shape.push_back(p);
    p.x = 450;
    p.y = 120;
    container.shape.push_back(p);
    p.x = 50;
    p.y = 120;
    container.shape.push_back(p);
    
    //затравочная точка
    container.zPoint.x = 42;
    container.zPoint.y = 42;

    //color
   
    container.colorFill.a = 0;
    container.colorFill.r = 0;
    container.colorFill.g = 0;
    container.colorFill.b = 0;
    container.colorOutline.a = 0;
    container.colorOutline.r = 0;
    container.colorOutline.g = 0;
    container.colorOutline.b = 0;
    containerVect.push_back(container);

    //-----------------------------1-------------------------
    container.shape.clear();
    p.x = 303;
    p.y = 35;
    container.shape.push_back(p);
    p.x = 310;
    p.y = 35;
    container.shape.push_back(p);
    p.x = 310;
    p.y = 63;
    container.shape.push_back(p);
    //затравочная точка
    container.zPoint.x = 306;
    container.zPoint.y = 38;
    //color
    container.colorFill.a = 255;
    container.colorFill.r = 0;
    container.colorFill.g = 0;
    container.colorFill.b = 0;
    container.colorOutline.a = 255;
    container.colorOutline.r = 0;
    container.colorOutline.g = 0;
    container.colorOutline.b = 0;
    containerVect.push_back(container);
    //-----------------------------2-------------------------
    container.shape.clear();
    p.x = 319;
    p.y = 34;
    container.shape.push_back(p);
    p.x = 326;
    p.y = 34;
    container.shape.push_back(p);
    p.x = 319;
    p.y = 63;
    container.shape.push_back(p);
    //затравочная точка
    container.zPoint.x = 323;
    container.zPoint.y = 36;
    //color
    container.colorFill.a = 255;
    container.colorFill.r = 0;
    container.colorFill.g = 0;
    container.colorFill.b = 0;
    container.colorOutline.a = 255;
    container.colorOutline.r = 0;
    container.colorOutline.g = 0;
    container.colorOutline.b = 0;
    containerVect.push_back(container);
    //-----------------------------3-------------------------
    container.shape.clear();
    p.x = 282;
    p.y = 54;
    container.shape.push_back(p);
    p.x = 294;
    p.y = 47;
    container.shape.push_back(p);
    p.x = 296;
    p.y = 64;
    container.shape.push_back(p);
    //затравочная точка
    container.zPoint.x = 292;
    container.zPoint.y = 53;
    //color
    color.a = 255;
    color.r = 0;
    color.g = 0;
    color.b = 0;
    container.colorOutline = color;
    color.a = 255;
    color.r = 197;
    color.g = 90;
    color.b = 17;
    container.colorFill = color;
    containerVect.push_back(container);
    //-----------------------------4-------------------------
    container.shape.clear();
    p.x = 336;
    p.y = 46;
    container.shape.push_back(p);
    p.x = 346;
    p.y = 55;
    container.shape.push_back(p);
    p.x = 329;
    p.y = 62;
    container.shape.push_back(p);
    //затравочная точка
    container.zPoint.x = 334;
    container.zPoint.y = 57;
    //color
    color.a = 255;
    color.r = 0;
    color.g = 0;
    color.b = 0;
    container.colorOutline = color;
    color.a = 255;
    color.r = 197;
    color.g = 90;
    color.b = 17;
    container.colorFill = color;
    containerVect.push_back(container);
    //-----------------------------5-------------------------
    container.shape.clear();
    p.x = 287;
    p.y = 72;
    container.shape.push_back(p);
    p.x = 313;
    p.y = 53;
    container.shape.push_back(p);
    p.x = 313;
    p.y = 91;
    container.shape.push_back(p);
    //затравочная точка
    p.x = 300;
    p.y = 70;
    container.zPoint = p;
    //color
    color.a = 255;
    color.r = 0;
    color.g = 0;
    color.b = 0;
    container.colorOutline = color;
    color.a = 255;
    color.r = 197;
    color.g = 90;
    color.b = 17;
    container.colorFill = color;
    containerVect.push_back(container);
    //-----------------------------6-------------------------
    container.shape.clear();
    p.x = 287;
    p.x = 314;
    p.y = 53;
    container.shape.push_back(p);
    p.x = 341;
    p.y = 72;
    container.shape.push_back(p);
    p.x = 314;
    p.y = 91;
    container.shape.push_back(p);
    //затравочная точка
    p.x = 320;
    p.y = 70;
    container.zPoint = p;
    //color
    color.a = 255;
    color.r = 0;
    color.g = 0;
    color.b = 0;
    container.colorOutline = color;
    color.a = 255;
    color.r = 197;
    color.g = 90;
    color.b = 17;
    container.colorFill = color;
    containerVect.push_back(container);
    //-----------------------------7-------------------------
    container.shape.clear();
    p.x = 290;
    p.y = 97;
    container.shape.push_back(p);
    p.x = 298;
    p.y = 83;
    container.shape.push_back(p);
    p.x = 298;
    p.y = 100;
    container.shape.push_back(p);
    //затравочная точка
    p.x = 295;
    p.y = 95;
    container.zPoint = p;
    //color
    color.a = 255;
    color.r = 0;
    color.g = 0;
    color.b = 0;
    container.colorOutline = color;
    color.a = 255;
    color.r = 197;
    color.g = 90;
    color.b = 17;
    container.colorFill = color;
    containerVect.push_back(container);
    //-----------------------------8-------------------------
    container.shape.clear();
    p.x = 303;
    p.y = 104;
    container.shape.push_back(p);
    p.x = 308;
    p.y = 88;
    container.shape.push_back(p);
    p.x = 312;
    p.y = 105;
    container.shape.push_back(p);
    //затравочная точка
    p.x = 308;
    p.y = 101;
    container.zPoint = p;
    //color
    color.a = 255;
    color.r = 0;
    color.g = 0;
    color.b = 0;
    container.colorOutline = color;
    color.a = 255;
    color.r = 197;
    color.g = 90;
    color.b = 17;
    container.colorFill = color;
    containerVect.push_back(container);
    //-----------------------------9-------------------------
    container.shape.clear();
    p.x = 316;
    p.y = 104;
    container.shape.push_back(p);
    p.x = 320;
    p.y = 89;
    container.shape.push_back(p);
    p.x = 325;
    p.y = 104;
    container.shape.push_back(p);
    //затравочная точка
    p.x = 321;
    p.y = 100;
    container.zPoint = p;
    //color
    color.a = 255;
    color.r = 0;
    color.g = 0;
    color.b = 0;
    container.colorOutline = color;
    color.a = 255;
    color.r = 197;
    color.g = 90;
    color.b = 17;
    container.colorFill = color;
    containerVect.push_back(container);
    //-----------------------------10-------------------------
    container.shape.clear();
    p.x = 333;
    p.y = 100;
    container.shape.push_back(p);
    p.x = 329;
    p.y = 83;
    container.shape.push_back(p);
    p.x = 341;
    p.y = 95;
    container.shape.push_back(p);
    //затравочная точка
    p.x = 334;
    p.y = 94;
    container.zPoint = p;
    //color
    color.a = 255;
    color.r = 0;
    color.g = 0;
    color.b = 0;
    container.colorOutline = color;
    color.a = 255;
    color.r = 197;
    color.g = 90;
    color.b = 17;
    container.colorFill = color;
    containerVect.push_back(container);
    //-----------------------------11-------------------------
    container.shape.clear();
    p.x = 270;
    p.y = 58;
    container.shape.push_back(p);
    p.x = 270;
    p.y = 42;
    container.shape.push_back(p);
    p.x = 291;
    p.y = 58;
    container.shape.push_back(p);
    //затравочная точка
    p.x = 274;
    p.y = 49;
    container.zPoint = p;
    //color
    color.a = 255;
    color.r = 0;
    color.g = 0;
    color.b = 0;
    container.colorOutline = color;
    color.a = 255;
    color.r = 197;
    color.g = 90;
    color.b = 17;
    container.colorFill = color;
    containerVect.push_back(container);
    //-----------------------------12-------------------------
    container.shape.clear();
    p.x = 282;
    p.y = 30;
    container.shape.push_back(p);
    p.x = 297;
    p.y = 34;
    container.shape.push_back(p);
    p.x = 291;
    p.y = 54;
    container.shape.push_back(p);
    //затравочная точка
    p.x = 291;
    p.y = 43;
    container.zPoint = p;
    //color
    color.a = 255;
    color.r = 0;
    color.g = 0;
    color.b = 0;
    container.colorOutline = color;
    color.a = 255;
    color.r = 197;
    color.g = 90;
    color.b = 17;
    container.colorFill = color;
    containerVect.push_back(container);
    //-----------------------------13-------------------------
    container.shape.clear();
    p.x = 333;
    p.y = 33;
    container.shape.push_back(p);
    p.x = 348;
    p.y = 29;
    container.shape.push_back(p);
    p.x = 339;
    p.y = 54;
    container.shape.push_back(p);
    //затравочная точка
    p.x = 339;
    p.y = 42;
    container.zPoint = p;
    //color
    color.a = 255;
    color.r = 0;
    color.g = 0;
    color.b = 0;
    container.colorOutline = color;
    color.a = 255;
    color.r = 197;
    color.g = 90;
    color.b = 17;
    container.colorFill = color;
    containerVect.push_back(container);
    //-----------------------------14-------------------------
    container.shape.clear();
    p.x = 362;
    p.y = 38;
    container.shape.push_back(p);
    p.x = 362;
    p.y = 54;
    container.shape.push_back(p);
    p.x = 340;
    p.y = 54;
    container.shape.push_back(p);
    //затравочная точка
    p.x = 350;
    p.y = 50;
    container.zPoint = p;
    //color
    color.a = 255;
    color.r = 0;
    color.g = 0;
    color.b = 0;
    container.colorOutline = color;
    color.a = 255;
    color.r = 197;
    color.g = 90;
    color.b = 17;
    container.colorFill = color;
    containerVect.push_back(container);
    //mountine
    //-----------------------------1-------------------------
    container.shape.clear();
    p.x = 115;
    p.y = 130;
    container.shape.push_back(p);
    p.x = 275;
    p.y = 65;
    container.shape.push_back(p);
    p.x = 430;
    p.y = 130;
    container.shape.push_back(p);
    //затравочная точка
    p.x = 260;
    p.y = 100;
    container.zPoint = p;
    //color
    color.a = 255;
    color.r = 0;
    color.g = 0;
    color.b = 0;
    container.colorOutline = color;
    color.a = 255;
    color.r = 255;
    color.g = 192;
    color.b = 0;
    container.colorFill = color;
    containerVect.push_back(container);
    
    //--------------------------------------2---------------------------------
    container.shape.clear();
    p.x = 10;
    p.y = 130;
    container.shape.push_back(p);
    p.x = 170;
    p.y = 55;
    container.shape.push_back(p);
    p.x = 320;
    p.y = 130;
    container.shape.push_back(p);
    //затравочная точка
    p.x = 100;
    p.y = 100;
    container.zPoint = p;
    //color
    color.a = 255;
    color.r = 0;
    color.g = 0;
    color.b = 0;
    container.colorOutline = color;
    color.a = 255;
    color.r = 255;
    color.g = 192;
    color.b = 0;
    container.colorFill = color;
    containerVect.push_back(container);
    //---------------------------------3-----------------------------
    container.shape.clear();
    p.x = 230;
    p.y = 130;
    container.shape.push_back(p);
    p.x = 390;
    p.y = 25;
    container.shape.push_back(p);
    p.x = 550;
    p.y = 130;
    container.shape.push_back(p);
    //затравочная точка
    p.x = 520;
    p.y = 120;
    container.zPoint = p;
    //color
    color.a = 255;
    color.r = 0;
    color.g = 0;
    color.b = 0;
    container.colorOutline = color;
    color.a = 255;
    color.r = 255;
    color.g = 192;
    color.b = 0;
    container.colorFill = color;
    containerVect.push_back(container);
    //--------------------------------4--------------------------
    container.shape.clear();
    p.x = 125;
    p.y = 130;
    container.shape.push_back(p);
    p.x = 282;
    p.y = 10;
    container.shape.push_back(p);
    p.x = 439;
    p.y = 130;
    container.shape.push_back(p);
    //затравочная точка
    p.x = 255;
    p.y = 50;
    container.zPoint = p;
    //color
    color.a = 255;
    color.r = 0;
    color.g = 0;
    color.b = 0;
    container.colorOutline = color;
    color.a = 255;
    color.r = 255;
    color.g = 192;
    color.b = 0;
    container.colorFill = color;
    containerVect.push_back(container);
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
    stack <Container::point> stack;
    Container::point p;
    p.x = xz;
    p.y = yz;
    stack.push(p);
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
        
        image = texture.copyToImage();
        window.display();
        //Sleep(20);
        window.clear();
        window.draw(sprite);
        Color color2;
        color2.a = 255;
        color2.r = 5;
        color2.g = 255;
        color2.b = 5;
        if (image.getPixel(x + 1, y) != color && image.getPixel(x + 1, y) != colorOutline && image.getPixel(x + 1, y) != color2)
        {
            p.x = x + 1;
            square.setPosition(p.x, p.y);
            window.draw(square);
            stack.push(p);
        }
        if (image.getPixel(x - 1, y) != color && image.getPixel(x - 1, y) != colorOutline && image.getPixel(x - 1, y) != color2)
        {
            p.x = x - 1;
            square.setPosition(p.x, p.y);
            window.draw(square);
            //Sleep(20);
            stack.push(p);
        }
        p.x = x;
        if (image.getPixel(x, y + 1) != color && image.getPixel(x, y + 1) != colorOutline && image.getPixel(x, y + 1) != color2)
        {
            p.y = y + 1;
            square.setPosition(p.x, p.y);
            window.draw(square);
            stack.push(p);
        }
        if (image.getPixel(x, y - 1) != color && image.getPixel(x, y - 1) != colorOutline && image.getPixel(x, y - 1) != color2)
        {
            p.y = y - 1;
            square.setPosition(p.x, p.y);
            window.draw(square);
            stack.push(p);
        }
        
    }
}

bool pointBelong(vector<Container::point> shape, int x0, int y0)
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

bool intersection_lineseg(int x1, int y1, int x2, int y2, int xa, int ya, int xb, int yb)
{
    container.crossPoint.x = -1;
    container.crossPoint.y = -1;
    if (x2 == x1 && xb == xa)
        return false;
    else if (x2 == x1)
    {
        float m2 = (float)(yb - ya) / (float)(xb - xa);
        container.crossPoint.x = x1;
        container.crossPoint.y = ya - m2 * (xa - x1);
    }
    else if (xb == xa)
    {
        float m1 = (float)(y2 - y1) / (float)(x2 - x1);
        container.crossPoint.x = xa;
        container.crossPoint.y = y1 + m1 * (xa - x1);
    }
    else
    {
        float m1 = (float)(y2 - y1) / (float)(x2 - x1);
        float m2 = (float)(yb - ya) / (float)(xb - xa);
        if (m1 == m2)
            return false;
        container.crossPoint.x = (ya - y1 + m1 * x1 - m2 * xa) / (m1 - m2);
        container.crossPoint.y = (m1 * m2 * (xa - x1) + m2 * y1 - m1 * ya) / (m2 - m1);
    }

    if ((x1 >= x2 && (container.crossPoint.x<x2 || container.crossPoint.x>x1)) || (x2 >= x1 && (container.crossPoint.x > x2 || container.crossPoint.x < x1)) || (y1 >= y2 && (container.crossPoint.y<y2 || container.crossPoint.y>y1)) || (y2 >= y1 && (container.crossPoint.y > y2 || container.crossPoint.y < y1))
        || (xa >= xb && (container.crossPoint.x<xb || container.crossPoint.x>xa)) || (xb >= xa && (container.crossPoint.x > xb || container.crossPoint.x < xa)) || (ya >= yb && (container.crossPoint.y<yb || container.crossPoint.y>ya)) || (yb >= ya && (container.crossPoint.y > yb || container.crossPoint.y < ya)))
    {
        return false;
    }
    if ((container.crossPoint.x == x1 && container.crossPoint.y == y1) || (container.crossPoint.x == x2 && container.crossPoint.y == y2))
    {
        return false;
    }
    return true;
}


void sutherlandHodgman(vector<Container::point> shape, int x1, int y1, int x2, int y2)
{
    bool a1 = pointBelong(shape, x1, y1);
    bool a2 = pointBelong(shape, x2, y2);
    Container::point p;
    int pointCount;
    
    if (a1 == false && a2 == false)
    {
        
    }

    if (a1 == true && a2 == true)
    {
        p.x = x2;
        p.y = y2;
        container.pointUnvisible.push_back(p);
    }

    if (a1 == false && a2 == true)
    {
        
        for (int i = 0; i < shape.size() - 1; i++)
        {
            if (intersection_lineseg(x1, y1, x2, y2, shape[i].x, shape[i].y, shape[i + 1].x, shape[i + 1].y) )
            {
                container.pointUnvisible.push_back(container.crossPoint);
                
            }
        }
        int i  = shape.size() - 1;
        if (intersection_lineseg(x1, y1, x2, y2, shape[i].x, shape[i].y, shape[0].x, shape[0].y))
        {
            container.pointUnvisible.push_back(container.crossPoint);
        }
        p.x = x2;
        p.y = y2;
        container.pointUnvisible.push_back(p);
    }
    if (a1 == true && a2 == false)
    {
        for (int i = 0; i < shape.size() - 1; i++)
        {
            if (intersection_lineseg(x1, y1, x2, y2, shape[i].x, shape[i].y, shape[i + 1].x, shape[i + 1].y))
            {
                container.pointUnvisible.push_back(container.crossPoint);
            }
        }
        int i = shape.size() - 1;
        if (intersection_lineseg(x1, y1, x2, y2, shape[i].x, shape[i].y, shape[0].x, shape[0].y))
        {
            container.pointUnvisible.push_back(container.crossPoint);
        }
    }

}

void sutherlandHodgmanVisible(vector<Container::point> shape, int x1, int y1, int x2, int y2)
{
    bool a1 = pointBelong(shape, x1, y1);
    bool a2 = pointBelong(shape, x2, y2);
    bool t = false;
    Container::point p;
    int pointCount;

    if (a1 == false && a2 == false)
    {
        p.x = x2;
        p.y = y2;
        container.pointVisible.push_back(p);
        //pointCount++;
    }

    if (a1 == true && a2 == true)
    {
       
    }

    if (a1 == false && a2 == true)
    {

        for (int i = 0; i < shape.size() - 1; i++)
        {
            if (intersection_lineseg(x1, y1, x2, y2, shape[i].x, shape[i].y, shape[i + 1].x, shape[i + 1].y) && t == false)
            {
                container.pointVisible.push_back(container.crossPoint);
                t = true;
            }
        }
        int i = shape.size() - 1;
        if (intersection_lineseg(x1, y1, x2, y2, shape[i].x, shape[i].y, shape[0].x, shape[0].y) && t == false)
        {
            container.pointVisible.push_back(container.crossPoint);
            t = true;
        }
    }
    if (a1 == true && a2 == false)
    {

        for (int i = 0; i < shape.size() - 1; i++)
        {
            if (intersection_lineseg(x1, y1, x2, y2, shape[i].x, shape[i].y, shape[i + 1].x, shape[i + 1].y) && t == false)
            {
                container.pointVisible.push_back(container.crossPoint);
                t = true;
            }
        }
        int i = shape.size() - 1;
        if (intersection_lineseg(x1, y1, x2, y2, shape[i].x, shape[i].y, shape[0].x, shape[0].y) && t == false)
        {
            container.pointVisible.push_back(container.crossPoint);
            t = true;
        }
        p.x = x2;
        p.y = y2;
        container.pointVisible.push_back(p);
    }
    t = false;

}

// Function to compute region code for a point(x, y)
int computeCode(double x, double y)
{
    // initialized as being inside
    int code = container.INSIDE;

    if (x < containerVect[0].shape[0].x) // to the left of rectangle
        code |= container.LEFT;
    else if (x > containerVect[0].shape[2].x) // to the right of rectangle
        code |= container.RIGHT;
    if (y < containerVect[0].shape[0].y) // below the rectangle
        code |= container.BOTTOM;
    else if (y > containerVect[0].shape[2].y) // above the rectangle
        code |= container.TOP;

    return code;
}


// Implementing Cohen-Sutherland algorithm
// Clipping a line from P1 = (x1, y1) to P2 = (x2, y2)
void сohenSutherland(int x1, int y1, int x2, int y2, vector<Container::point> shape,int x_min, int y_min, int x_max, int y_max)
{
    // Вычислить коды регионов для P1, P2
    int code1 = computeCode(x1, y1);
    int code2 = computeCode(x2, y2);
    Container::point p, p1;
    bool t = false;
    int xStart = x1;
    int yStart = y1;
    int xEnd = x2;
    int yEnd = y2;

    // Инициализировать строку вне прямоугольного окна
    bool accept = false;

    while (true) {
        if ((code1 == 0) && (code2 == 0)) {
            // Если обе конечные точки лежат внутри прямоугольника
            p.x = x2;
            p.y = y2;
            container.pointVisible.push_back(p);
            if (t)
                container.pointVisible.push_back(p1);
            accept = true;
            break;
        }
        else if (code1 & code2) {
            // Если обе конечные точки находятся за пределами прямоугольника, в одном регионе
            p.x = x2;
            p.y = y2;
            container.pointUnvisible.push_back(p);
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
            if (code_out & container.TOP) {
                // точка находится над прямоугольником обрезки
                x = x1 + (x2 - x1) * (y_max - y1) / (y2 - y1);
                y = y_max;
            }
            else if (code_out & container.BOTTOM) {
                // точка находится под прямоугольником
                x = x1 + (x2 - x1) * (y_min - y1) / (y2 - y1);
                y = y_min;
            }
            else if (code_out & container.RIGHT) {
                // точка находится справа от прямоугольника
                y = y1 + (y2 - y1) * (x_max - x1) / (x2 - x1);
                x = x_max;
            }
            else if (code_out & container.LEFT) {
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
                container.pointVisible.push_back(p);
                container.pointUnvisible.push_back(p);
                code1 = computeCode(x1, y1);
                if (pointBelong(shape, x_min, y_min))
                {
                    p.x = x_min;
                    p.y = y_min;
                    container.pointUnvisible.push_back(p);
                }
                if (pointBelong(shape, x_max, y_min))
                {
                    p.x = x_max;
                    p.y = y_min;
                    container.pointUnvisible.push_back(p);
                }
                if (pointBelong(shape, x_min, y_max))
                {
                    p.x = x_min;
                    p.y = y_max;
                    container.pointUnvisible.push_back(p);
                }
                if (pointBelong(shape, x_max, y_max))
                {
                    p.x = x_max;
                    p.y = y_max;
                    container.pointUnvisible.push_back(p);
                }
            }
            else {
                if (computeCode(x, y) == 0)
                {
                    p.x = x;
                    p.y = y;
                    container.pointUnvisible.push_back(p);
                    p.x = xEnd;
                    p.y = yEnd;
                    container.pointUnvisible.push_back(p);
                }
                x2 = x;
                y2 = y;
                code2 = computeCode(x2, y2);
                if (pointBelong(shape, x_min, y_min))
                {
                    p1.x = x_min;
                    p1.y = y_min;
                    t = true;
                }
                if (pointBelong(shape, x_max, y_min))
                {
                    p1.x = x_max;
                    p1.y = y_min;
                    t = true;
                }
                if (pointBelong(shape, x_min, y_max))
                {
                    p1.x = x_min;
                    p1.y = y_max;
                    t = true;
                }
                if (pointBelong(shape, x_max, y_max))
                {
                    p1.x = x_max;
                    p1.y = y_max;
                    t = true;
                }
            }
        }
    }
}

void modeB(RenderWindow& window, RectangleShape& square)
{
    int k = containerVect.size() - 1;
    for (int i = 1; i <= k; i++)
    {
        Color color, color2;
        color2.a = containerVect[i].colorOutline.a;
        color2.r = containerVect[i].colorOutline.r;
        color2.g = containerVect[i].colorOutline.g;
        color2.b = containerVect[i].colorOutline.b;
        for (int l = 0; l < containerVect[i].pointAllVisible.size(); l++)
        {
            for (int j = 0; j < containerVect[i].pointAllVisible[l].size() - 1; j++)
            {
                brezenham(containerVect[i].pointAllVisible[l][j].x, containerVect[i].pointAllVisible[l][j + 1].x, containerVect[i].pointAllVisible[l][j].y, containerVect[i].pointAllVisible[l][j + 1].y, color2, window, square);
            }
            int k2 = containerVect[i].pointAllVisible[l].size() - 1;
            brezenham(containerVect[i].pointAllVisible[l][k2].x, containerVect[i].pointAllVisible[l][0].x, containerVect[i].pointAllVisible[l][k2].y, containerVect[i].pointAllVisible[l][0].y, color2, window, square);
        }
        //Sleep(200);
        color.a = containerVect[i].colorFill.a;
        color.r = containerVect[i].colorFill.r;
        color.g = containerVect[i].colorFill.g;
        color.b = containerVect[i].colorFill.b;
        int cx = 0;
        int cy = 0;
        for (int j = 0; j < containerVect[i].pointAllVisible[0].size(); j++)
        {
            cx += containerVect[i].pointAllVisible[0][j].x;
            cy += containerVect[i].pointAllVisible[0][j].y;
        }
        cx /= containerVect[i].pointAllVisible[0].size();
        cy /= containerVect[i].pointAllVisible[0].size();
        if (i == 18)
        {
            areaB(328, 55, color, color2, window, square);
            cx = 235;
            cy = 55;
        }
        areaB(cx, cy, color, color2, window, square);
        color2.a = 255;
        color2.r = 5;
        color2.g = 255;
        color2.b = 5;
        for (int k = 0; k < containerVect[i].pointAllUnvisible.size(); k++)
        {
            for (int j = 0; j < containerVect[i].pointAllUnvisible[k].size() - 1; j++)
            {
                brezenham(containerVect[i].pointAllUnvisible[k][j].x, containerVect[i].pointAllUnvisible[k][j + 1].x, containerVect[i].pointAllUnvisible[k][j].y, containerVect[i].pointAllUnvisible[k][j + 1].y, color2, window, square);
            }
            int k2 = containerVect[i].pointAllUnvisible[k].size() - 1;
            brezenham(containerVect[i].pointAllUnvisible[k][k2].x, containerVect[i].pointAllUnvisible[k][0].x, containerVect[i].pointAllUnvisible[k][k2].y, containerVect[i].pointAllUnvisible[k][0].y, color2, window, square);
            color.a = 255;
            color.r = 200;
            color.g = 200;
            color.b = 0;
            int cx = 0;
            int cy = 0;
            for (int j = 0; j < containerVect[i].pointAllUnvisible[k].size(); j++)
            {
                cx += containerVect[i].pointAllUnvisible[k][j].x;
                cy += containerVect[i].pointAllUnvisible[k][j].y;
            }
            cx /= containerVect[i].pointAllUnvisible[k].size();
            cy /= containerVect[i].pointAllUnvisible[k].size();
            if (k == 0 && i == 18)
            {
                cx = 345;
                cy = 70;
            }
            if (k == 1 && i == 18)
            {
                cx = 205;
                cy = 80;
            }
            if (k == 2 && i == 18)
            {
                cx = 260;
                cy = 80;
            }
            if (k == 10 && i == 18)
            {
                cx = 317;
                cy = 60;
            }
            if ((0, 5 * abs(containerVect[i].pointAllUnvisible[k][0].x * containerVect[i].pointAllUnvisible[k][1].y + containerVect[i].pointAllUnvisible[k][1].x * containerVect[i].pointAllUnvisible[k][2].y + containerVect[i].pointAllUnvisible[k][2].x * containerVect[i].pointAllUnvisible[k][0].y - containerVect[i].pointAllUnvisible[k][1].x * containerVect[i].pointAllUnvisible[k][0].y - containerVect[i].pointAllUnvisible[k][2].x * containerVect[i].pointAllUnvisible[k][1].y - containerVect[i].pointAllUnvisible[k][0].x * containerVect[i].pointAllUnvisible[k][2].y)) > 100)
            {
                areaB(cx, cy, color, color2, window, square);
            }
        }


    }
}

void modeA(RenderWindow& window, RectangleShape& square)
{
    int k = containerVect.size() - 1;
    for (int i = 1; i <= k; i++)
    {
        Color color, color2;
        color2.a = containerVect[i].colorOutline.a;
        color2.r = containerVect[i].colorOutline.r;
        color2.g = containerVect[i].colorOutline.g;
        color2.b = containerVect[i].colorOutline.b;
        for (int l = 0; l < containerVect[i].pointAllVisible.size(); l++)
        {
            for (int j = 0; j < containerVect[i].pointAllVisible[l].size() - 1; j++)
            {
                brezenham(containerVect[i].pointAllVisible[l][j].x, containerVect[i].pointAllVisible[l][j + 1].x, containerVect[i].pointAllVisible[l][j].y, containerVect[i].pointAllVisible[l][j + 1].y, color2, window, square);
            }
            int k2 = containerVect[i].pointAllVisible[l].size() - 1;
            brezenham(containerVect[i].pointAllVisible[l][k2].x, containerVect[i].pointAllVisible[l][0].x, containerVect[i].pointAllVisible[l][k2].y, containerVect[i].pointAllVisible[l][0].y, color2, window, square);
        }
        //Sleep(200);
        color.a = containerVect[i].colorFill.a;
        color.r = containerVect[i].colorFill.r;
        color.g = containerVect[i].colorFill.g;
        color.b = containerVect[i].colorFill.b;
        int cx = 0;
        int cy = 0;
        for (int j = 0; j < containerVect[i].pointAllVisible[0].size(); j++)
        {
            cx += containerVect[i].pointAllVisible[0][j].x;
            cy += containerVect[i].pointAllVisible[0][j].y;
        }
        cx /= containerVect[i].pointAllVisible[0].size();
        cy /= containerVect[i].pointAllVisible[0].size();
        if (i == 18)
        {
            areaB(328, 55, color, color2, window, square);
            cx = 235;
            cy = 55;
        }
        areaB(cx, cy, color, color2, window, square);
    }

}

int main()
{
    RenderWindow window(VideoMode(800, 800), "Lab4");
    RectangleShape square(Vector2f(1, 1)); //pixel

    

    
    Color color1(255, 255, 255);
    window.clear(color1);
    int j, k;
    texture.create(800, 800);

    
    shapesInit();
    //--------------------------------------------------------------------get container data part---------------------------------------------------------------------------------------

    for (int i = containerVect.size() - 1; i > 0; i--)
    {
        j = i - 1;
        containerVect[i].pointAllVisible.push_back(containerVect[i].shape);
        
        //------------------------------------------------------------sutherlandHodgman------------------------------------------------------------------------------------------
        while (j > 0)
        {
            sutherlandHodgman(containerVect[i].shape, containerVect[j].shape[0].x, containerVect[j].shape[0].y, containerVect[j].shape[1].x, containerVect[j].shape[1].y); // get Unvisible part
            sutherlandHodgman(containerVect[i].shape, containerVect[j].shape[1].x, containerVect[j].shape[1].y, containerVect[j].shape[2].x, containerVect[j].shape[2].y); // get Unvisible part
            sutherlandHodgman(containerVect[i].shape, containerVect[j].shape[2].x, containerVect[j].shape[2].y, containerVect[j].shape[0].x, containerVect[j].shape[0].y); // get Unvisible part
            k = containerVect[i].shape.size() - 1;
            if (i == 11 || i == 12 || i == 13 || i == 14)
            {
                for (int k = 0; k < containerVect[i].shape.size() - 1; k++)
                {
                    sutherlandHodgman(containerVect[j].shape, containerVect[i].shape[k].x, containerVect[i].shape[k].y, containerVect[i].shape[k + 1].x, containerVect[i].shape[k + 1].y); // get Unvisible part
                }
                sutherlandHodgman(containerVect[j].shape, containerVect[i].shape[k].x, containerVect[i].shape[k].y, containerVect[i].shape[0].x, containerVect[i].shape[0].y); // get Unvisible part
            }
            if (container.pointUnvisible.size() > 2)
            {
                containerVect[i].pointAllUnvisible.push_back(container.pointUnvisible);
                container.pointUnvisible.clear();
            }
            for (int k = 0; k < containerVect[i].pointAllVisible[0].size() - 1; k++)
            {
                sutherlandHodgmanVisible(containerVect[j].shape, containerVect[i].pointAllVisible[0][k].x, containerVect[i].pointAllVisible[0][k].y, containerVect[i].pointAllVisible[0][k + 1].x, containerVect[i].pointAllVisible[0][k + 1].y); // get Visible part
            }
            int k = containerVect[i].pointAllVisible[0].size() - 1;
            sutherlandHodgmanVisible(containerVect[j].shape, containerVect[i].pointAllVisible[0][k].x, containerVect[i].pointAllVisible[0][k].y, containerVect[i].pointAllVisible[0][0].x, containerVect[i].pointAllVisible[0][0].y); // get Visible part
            containerVect[i].pointAllVisible[0] = container.pointVisible;
            
            container.pointVisible.clear();
            
            j--;
        }
        //--------------------------------------------------------------сohenSutherland----------------------------------------------------------------------------------
        for (int l = 0; l < containerVect[i].pointAllVisible.size(); l++)
        {
            for (j = 0; j < containerVect[i].pointAllVisible[l].size() - 1; j++)
            {
                сohenSutherland(containerVect[i].pointAllVisible[l][j].x, containerVect[i].pointAllVisible[l][j].y, containerVect[i].pointAllVisible[l][j + 1].x, containerVect[i].pointAllVisible[l][j + 1].y, containerVect[i].pointAllVisible[l], containerVect[0].shape[0].x, containerVect[0].shape[0].y, containerVect[0].shape[2].x, containerVect[0].shape[2].y);
            }
            int t = containerVect[i].pointAllVisible[l].size() - 1;
            сohenSutherland(containerVect[i].pointAllVisible[l][t].x, containerVect[i].pointAllVisible[l][t].y, containerVect[i].pointAllVisible[l][0].x, containerVect[i].pointAllVisible[l][0].y, containerVect[i].pointAllVisible[l], containerVect[0].shape[0].x, containerVect[0].shape[0].y, containerVect[0].shape[2].x, containerVect[0].shape[2].y);
            containerVect[i].pointAllVisible[l] = container.pointVisible;
            container.pointVisible.clear();
            if (container.pointUnvisible.size() > 2)
            {
                containerVect[i].pointAllUnvisible.push_back(container.pointUnvisible);
                container.pointUnvisible.clear();
            }
               
        }


    }


    //--------------------------------------------------------------------draw part---------------------------------------------------------------------------------------

    //modeB(window, square);
       
    int i = 0;
    
    int choice = 0;
    if (choice == 0)
    {
        modeA(window, square);
    }
    else
    {
        modeB(window, square);
    }
    
    

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
