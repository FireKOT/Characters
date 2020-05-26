#include "TXLib.h"

void DrawNam(int x, int y);
void DrawMan(int x, int y);
void DrawYasa(int x, int y);
void DrawMoon(int x, int y);
void DrawKamen(int x, int y);

int main()
{
    txCreateWindow(1000,900);

    DrawNam(10,0);
    DrawNam(310,0);
    DrawMan(700,50);
    DrawMan(850,50);
    DrawYasa(700,450);
    DrawYasa(850,450);
    DrawMoon(50,300);
    DrawMoon(350,300);
    DrawKamen(50,650);
    DrawKamen(350,650);

    return 0;
}

void DrawNam(int x, int y)
{
    txSetFillColor(RGB(0,200,100));
    txRectangle(x + 50, y + 25,x + 75, y + 50);
    txRectangle(x + 225, y + 25, x + 200, y + 50);
    txRectangle(x + 75, y + 50, x + 100, y + 75);
    txRectangle(x + 175, y + 50, x + 200, y + 75);
    txRectangle(x + 50, y + 75, x + 225, y + 200);
    txRectangle(x + 25, y + 100, x + 50, y + 150);
    txRectangle(x + 0, y + 125, x + 25, y + 200);
    txRectangle(x + 225, y + 100, x + 250, y + 150);
    txRectangle(x + 250, y + 125, x + 275, y + 200);
    txRectangle(x + 50, y + 200, x + 75, y +225);
    txRectangle(x + 75, y + 225, x + 125, y +250);
    txRectangle(x + 200, y + 200, x + 225, y +225);
    txRectangle(x + 200, y + 225, x + 150, y +250);
    txSetFillColor(RGB(0,0,0));
    txRectangle(x + 75, y + 100, x + 100, y + 125);
    txRectangle(x + 175, y + 100, x + 200, y + 125);
}

void DrawMan(int x, int y)
{
    txSetColor(RGB(0,200,0));
    txSetFillColor(RGB(150,0,128));
    txCircle(x + 50, y + 50,50);
    txLine(x + 50, y + 100, x + 50, y + 200);
    txLine(x + 50, y + 200, x + 0, y + 300);
    txLine(x + 50, y + 200, x + 100, y + 300);
    txLine(x + 50, y + 125, x + 0, y+ 200);
    txLine(x + 50, y + 125, x + 100, y+ 200);
}

void DrawYasa(int x, int y)
{
    txSetColor(RGB(192,192,192));
    txSetFillColor(RGB(192,192,192));
    txCircle(x + 50, y + 50,50);
    txSetColor(RGB(0,250,250));
    txLine(x + 50, y + 100, x + 0, y + 200);
    txLine(x + 50, y + 100, x + 100, y + 200);
    txLine(x + 0, y + 200, x + 50, y + 300);
    txLine(x + 100, y + 200, x + 50, y + 300);
    txSetFillColor(RGB(192,192,192));
    txCircle(x + 50, y + 350,50);
}

void DrawMoon(int x, int y)
{
    txSetColor(RGB(250,250,150));
    txSetFillColor(RGB(250,250,150));
    txCircle(x + 100, y + 50,50);
    txCircle(x + 25, y + 75,50);
    txCircle(x + 0, y + 150,50);
    txCircle(x + 25, y + 225,50);
    txCircle(x + 100, y + 250,50);
    txCircle(x + 175, y + 75,50);
    txCircle(x + 200, y + 150,50);
    txCircle(x + 175, y + 225,50);
}

void DrawKamen(int x, int y)
{
     txSetColor(RGB(0,250,250));
     txLine(x + 0, y + 200, x + 200, y + 200);
     txLine(x + 0, y + 200, x + 50, y + 100);
     txLine(x + 50, y + 100, x + 150, y + 100);
     txLine(x + 150, y + 100, x + 200, y + 200);
     txLine(x + 50, y + 100, x + 100, y + 200);
     txLine(x + 100, y + 200, x + 150, y + 100);
     txLine(x + 150, y + 100, x + 100, y + 0);
     txLine(x + 100, y + 0, x + 50, y + 100);
     txLine(x + 50, y + 100, x + 0, y + 0);
     txLine(x + 0, y + 0, x + 200, y + 0);
     txLine(x + 200, y + 0, x + 150, y + 100);
}
