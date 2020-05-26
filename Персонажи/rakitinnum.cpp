#include "TXLib.h"
void DrawNam(int x, int y, double s, int poz, int mol);             //занимает s*11 в ширину,
void DrawMan(int x, int y, double s, int poz, int mol);             //занимает s*4 в ширину,
void DrawYasa(int x, int y, double s, int poz, int mol);            //занимает s*4 в ширину,
void DrawMoon(int x, int y, double s, int poz, int mol);            //занимает s*12 в ширину,
void DrawWathDogs(int x, int y, double s, int poz, int mol);        //занимает s*8 в ширину,

int main()                                          //x, y - координаты, s - размер, poz - положение, mol - изменение
{
    txCreateWindow(1000,900);

    DrawNam(     10,  0,   25.0, 1, 1);
    DrawNam(     330, 0,   15.0, 2, 1);
    DrawMan(     700, 50,  25.0, 1, 1);
    DrawMan(     850, 50,  15.0, 2, 1);
    DrawYasa(    700, 450, 25.0, 1, 1);
    DrawYasa(    850, 450, 15.0, 2, 1);
    DrawMoon(    50,  300, 25.0, 1, 1);
    DrawMoon(    370, 300, 15.0, 2, 1);
    DrawWathDogs(70,  650, 8.0,  1, 1);
    DrawWathDogs(380, 650, 5.0,  2, 1);

    return 0;
}

void DrawNam(int x, int y, double s, int poz, int mol)
{
    txSetColor(RGB(0,0,0));
    txSetFillColor(RGB(0,200,100));
    txRectangle(x + s*2,  y + s*3, x + s*9,  y + s*8);     //тело(квадрат)

    if(poz == 1)
    {
        txRectangle(x + s*2,  y + s*1, x + s*3,  y + s*2);     //4 квадрата -
        txRectangle(x + s*9,  y + s*1, x + s*8,  y + s*2);     //верхние усы
        txRectangle(x + s*3,  y + s*2, x + s*4,  y + s*3);     //4 квадрата -
        txRectangle(x + s*7,  y + s*2, x + s*8,  y + s*3);     //верхние усы
    }
     else if(poz == 2)
        {
            txRectangle(x + s*2+mol*1,  y + s*1, x + s*3+mol*1,  y + s*2);     //4 квадрата -
            txRectangle(x + s*9+mol*1,  y + s*1, x + s*8+mol*1,  y + s*2);     //верхние усы
            txRectangle(x + s*3+mol*1,  y + s*2, x + s*4+mol*1,  y + s*3);     //4 квадрата -
            txRectangle(x + s*7+mol*1,  y + s*2, x + s*8+mol*1,  y + s*3);     //верхние усы
        }

    txRectangle(x + s*1,  y + s*4, x + s*2,  y + s*6);     //руки
    txRectangle(x + s*0,  y + s*5, x + s*1,  y + s*8);     //руки
    txRectangle(x + s*9,  y + s*4, x + s*10, y + s*6);     //руки
    txRectangle(x + s*10, y + s*5, x + s*11, y + s*8);     //руки

    txRectangle(x + s*2,  y + s*8, x + s*3,  y + s*9);     //ноги
    txRectangle(x + s*3,  y + s*9, x + s*5,  y + s*10);    //ноги
    txRectangle(x + s*8,  y + s*8, x + s*9,  y + s*9);     //ноги
    txRectangle(x + s*8,  y + s*9, x + s*6,  y + s*10);    //ноги

    txSetFillColor(RGB(0,0,0));
    txRectangle(x + s*3,  y + s*4, x + s*4,  y + s*5);     //глаза
    txRectangle(x + s*7,  y + s*4, x + s*8,  y + s*5);     //глаза
}

void DrawMan(int x, int y, double s, int poz, int mol)
{
    txSetColor(RGB(0,200,0));
    txSetFillColor(RGB(150,0,128));
    txCircle(x + s*2, y + s*2,s*2);                        //голова

    txLine(x + s*2, y + s*4, x + s*2, y + s*8);            //позвоночник

    if(poz == 1)
    {
    txLine(x + s*2, y + s*8, x + s*0, y + s*12);           //ноги
    txLine(x + s*2, y + s*8, x + s*4, y + s*12);           //ноги

    txLine(x + s*2, y + s*5, x + s*0, y + s*8);            //руки
    txLine(x + s*2, y + s*5, x + s*4, y + s*8);            //руки
    }
     else if(poz == 2)
        {
        txLine(x + s*2, y + s*8, x + s*0, y + s*10);           //ноги
        txLine(x + s*2, y + s*8, x + s*4, y + s*10);           //ноги

        txLine(x + s*2, y + s*5, x + s*0, y + s*8+mol*2);            //руки
        txLine(x + s*2, y + s*5, x + s*4, y + s*8+mol*2);            //руки
        }
}

void DrawYasa(int x, int y, double s, int poz, int mol)
{
    txSetColor(RGB(192,192,192));
    txSetFillColor(RGB(192,192,192));
    txCircle(x + s*2, y + s*2,s*2);
    txCircle(x + s*2, y + s*14,s*2);
    txSetColor(RGB(0,250,250));
    txLine(x + s*2, y + s*4, x + s*0, y + s*8);             //верхний
    txLine(x + s*2, y + s*4, x + s*4, y + s*8);             //треугольник

    txLine(x + s*0, y + s*8, x + s*2, y + s*12);            //нижний
    txLine(x + s*4, y + s*8, x + s*2, y + s*12);            //треугольник
    if(poz == 1)
    {
    txLine(x + s*0, y + s*8, x + s*4, y + s*8);             //вертикальная линия
    txLine(x + s*2, y + s*4, x + s*2, y + s*12);            //горизонтальная линия
    }
     else if(poz == 2)
        {
        txLine(x + s*0+mol*1, y + s*80+mol*1, x + s*40+mol*1, y + s*80+mol*1);             //вертикальная линия
        txLine(x + s*20+mol*1, y + s*40+mol*1, x + s*20+mol*1, y + s*120+mol*1);            //горизонтальная линия
        }
}

void DrawMoon(int x, int y, double s, int poz, int mol)
{
    if(poz == 1)
    {
    txSetColor(RGB(250,250,150));
    txSetFillColor(RGB(250,250,150));

    txCircle(x + s*4, y + s*2, s*2);
    txCircle(x + s*1, y + s*3, s*2);
    txCircle(x + s*0, y + s*6, s*2);
    txCircle(x + s*1, y + s*9, s*2);
    txCircle(x + s*4, y + s*10,s*2);
    txCircle(x + s*7, y + s*3, s*2);
    txCircle(x + s*8, y + s*6, s*2);
    txCircle(x + s*7, y + s*9, s*2);
    }
     else if(poz == 2)
        {
        int r = mol*10;
        int g = mol*0;
        int b = mol*50;

        txSetFillColor(RGB(r+10*0,50,50));
        txSetColor(RGB(r+10*0,200,200));
        txCircle(x + s*4, y + s*2, s*2);
        txSetFillColor(RGB(r+10*1,50,50));
        txSetColor(RGB(r+10*1,200,200));
        txCircle(x + s*1, y + s*3, s*2);
        txSetFillColor(RGB(r+10*2,50,50));
        txSetColor(RGB(r+10*2,200,200));
        txCircle(x + s*0, y + s*6, s*2);
        txSetFillColor(RGB(r+10*3,50,50));
        txSetColor(RGB(r+10*3,200,200));
        txCircle(x + s*1, y + s*9, s*2);
        txSetFillColor(RGB(r+10*4,50,50));
        txSetColor(RGB(r+10*4,200,200));
        txCircle(x + s*4, y + s*10,s*2);
        txSetFillColor(RGB(r+10*5,50,50));
        txSetColor(RGB(r+10*5,200,200));
        txCircle(x + s*7, y + s*3, s*2);
        txSetFillColor(RGB(r+10*6,50,50));
        txSetColor(RGB(r+10*6,200,200));
        txCircle(x + s*8, y + s*6, s*2);
        txSetFillColor(RGB(r+10*7,50,50));
        txSetColor(RGB(r+10*7,200,200));
        txCircle(x + s*7, y + s*9, s*2);
        }
}

void DrawWathDogs(int x, int y, double s, int poz, int mol)
{
    txSetColor(RGB(0,250,250));
    txSetColor(RGB(0,255,255));
    if(poz == 1)
    {
    txLine(x + s*0,  y + s*20, x + s*1,  y + s*0);
    txLine(x + s*1,  y + s*0,  x + s*10, y + s*25);
    txLine(x + s*10, y + s*25, x + s*19, y + s*0);
    txLine(x + s*19, y + s*0,  x + s*20, y + s*20);
    txLine(x + s*20, y + s*20, x + s*10, y + s*0);
    txLine(x + s*10, y + s*0,  x + s*0,  y + s*20);
    txLine(x + s*3,  y + s*14, x + s*17, y + s*14);
    }
     else if(poz == 2)
        {
        txLine(x + s*0+mol*10,  y + s*20+mol*10, x + s*1,  y + s*0);
        txLine(x + s*1+mol*10,  y + s*0+mol*10,  x + s*10, y + s*25);
        txLine(x + s*10+mol*10, y + s*25+mol*10, x + s*19, y + s*0);
        txLine(x + s*19+mol*10, y + s*0+mol*10,  x + s*20, y + s*20);
        txLine(x + s*20+mol*10, y + s*20+mol*10, x + s*10, y + s*0);
        txLine(x + s*10+mol*10, y + s*0+mol*10,  x + s*0,  y + s*20);
        txLine(x + s*3+mol*10,  y + s*14+mol*10, x + s*17, y + s*14);
        }
}
