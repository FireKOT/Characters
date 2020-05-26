#include "TXLib.h"

void draw_namnam();
void draw_man();
void draw_yasa();
void draw_moon();
void draw_kamen();

int main()
{
   txCreateWindow(800,800);
   draw_namnam();
   draw_man();
   draw_yasa();
   draw_moon();
   draw_kamen();

   return 0;
}
void draw_namnam()
{
    txSetFillColor(RGB(0,200,100));               //9 на 11
    txRectangle(350,500,400,525);
    txRectangle(425,500,475,525);
    txRectangle(325,475,350,500);
    txRectangle(475,475,500,500);
    txRectangle(275,400,300,475);
    txRectangle(525,400,550,475);
    txRectangle(325,350,500,475);
    txRectangle(300,375,325,425);
    txRectangle(500,375,525,425);
    txRectangle(325,325,350,300);
    txRectangle(350,350,375,325);
    txRectangle(475,325,500,300);
    txRectangle(475,350,450,325);
    txSetFillColor(RGB(0,0,0));
    txRectangle(350,375,375,400);
    txRectangle(450,375,475,400);
    txSetFillColor(RGB(0,200,0));
    txSetColor(RGB(0,200,0));
    txCircle(357,382,5);
    txSetFillColor(RGB(0,250,250));
    txSetColor(RGB(0,250,250));
    txCircle(468,382,5);
}

void draw_man()
{
    txSetColor(RGB(0,200,0));
    txSetFillColor(RGB(150,0,128));
    txCircle(100,100,50);
    txLine(100,150,100,300);
    txLine(100,300,50,400);
    txLine(100,300,150,400);
    txLine(100,175,50,250);
    txLine(100,175,150,250);
}

void draw_yasa()
{
    txSetColor(RGB(0,250,250));
    txSetFillColor(RGB(192,192,192));
    txCircle(700,100,50);
    txLine(700,150,710,225);
    txLine(710,225,690,300);
}

void draw_moon()
{
    txSetColor(RGB(250,250,150));
    txSetFillColor(RGB(250,250,150));
    txCircle(200,500,50);
    txCircle(125,525,50);
    txCircle(100,600,50);
    txCircle(125,675,50);
    txCircle(200,700,50);
}

void draw_kamen()
{
    txSetColor(RGB(0,250,250));
    txLine(500,700,700,700);
    txLine(500,700,550,600);
    txLine(550,600,600,700);
    txLine(600,700,650,600);
    txLine(650,600,700,700);
    txLine(550,600,650,600);
    txLine(550,600,525,700);
    txLine(525,700,650,600);
    txLine(550,600,675,700);
    txLine(675,700,650,600);
}
