#include "TXLib.h"

void DrawAll(int x, int y, double s, int poz);
void DrawNam(int x, int y, double s, int poz);             //�������� s*11 � ������, s*10 � ������.
void DrawMoon(int x, int y, double s, int poz, int mol);            //�������� s*12 � ������, s*12 � ������.
void DrawWathDogs(int x, int y, double s, int poz, int mol);        //�������� s*8  � ������, s*8 � ������.
void DrawMan(int x, int y, double s, int poz, int mol);             //�������� s*4  � ������, s*12 � ������.
void DrawYasa(int x, int y, double s, int poz, int mol);            //�������� s*4  � ������, s*16 � ������.

int main()                                          //x, y - ����������, s - ������, poz - ���������, mol - ���������
{
    txCreateWindow(1500,900);

    DrawAll(0,0,25.0,1);

    return 0;
}



void DrawNam(int x, int y, double s, int poz, int mol)
{
    int s1, s2;
    int num = 0;

    txSetColor(RGB(0,0,0));
    txSetFillColor(RGB(0,200,100));
    txRectangle(x + s*2,  y + s*3, x + s*9,  y + s*8);

    if(poz == 1)
    {
        txRectangle(x + s*2,  y + s*1, x + s*3,  y + s*2);     //4 �������� -
        txRectangle(x + s*9,  y + s*1, x + s*8,  y + s*2);     //������� ���
        txRectangle(x + s*3,  y + s*2, x + s*4,  y + s*3);     //4 �������� -
        txRectangle(x + s*7,  y + s*2, x + s*8,  y + s*3);     //������� ���
    }
     else if(poz == 2)
        {
            txRectangle(x + s*2+mol*1,  y + s*1, x + s*3+mol*1,  y + s*2);     //4 �������� -
            txRectangle(x + s*9+mol*1,  y + s*1, x + s*8+mol*1,  y + s*2);     //������� ���
            txRectangle(x + s*3+mol*1,  y + s*2, x + s*4+mol*1,  y + s*3);     //4 �������� -
            txRectangle(x + s*7+mol*1,  y + s*2, x + s*8+mol*1,  y + s*3);     //������� ���
        }

        else if(poz == 3)
        {
            txRectangle(x + s*2+mol*1*-1,  y + s*1, x + s*3+mol*1*-1,  y + s*2);     //4 �������� -
            txRectangle(x + s*9+mol*1*-1,  y + s*1, x + s*8+mol*1*-1,  y + s*2);     //������� ���
            txRectangle(x + s*3+mol*1*-1,  y + s*2, x + s*4+mol*1*-1,  y + s*3);     //4 �������� -
            txRectangle(x + s*7+mol*1*-1,  y + s*2, x + s*8+mol*1*-1,  y + s*3);     //������� ���
        }

    txRectangle(x + s*1,  y + s*4, x + s*2,  y + s*6);     //����
    txRectangle(x + s*0,  y + s*5, x + s*1,  y + s*8);     //����
    txRectangle(x + s*9,  y + s*4, x + s*10, y + s*6);     //����
    txRectangle(x + s*10, y + s*5, x + s*11, y + s*8);     //����

    txRectangle(x + s*2,  y + s*8, x + s*3,  y + s*9);     //����
    txRectangle(x + s*3,  y + s*9, x + s*5,  y + s*10);    //����
    txRectangle(x + s*8,  y + s*8, x + s*9,  y + s*9);     //����
    txRectangle(x + s*8,  y + s*9, x + s*6,  y + s*10);    //����

    txSetFillColor(RGB(0,0,0));
    txRectangle(x + s*3,  y + s*4, x + s*4,  y + s*5);     //�����
    txRectangle(x + s*7,  y + s*4, x + s*8,  y + s*5);     //�����
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
            int b = mol*40;

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

        else if(poz == 3)
        {
            int r = mol*10;
            int g = mol*0;
            int b = mol*40;

            txSetFillColor(RGB(r+10*0,50,50));
            txSetColor(RGB(r+10*0,200,200));
            txCircle(x + s*4*-1, y + s*2, s*2);
            txSetFillColor(RGB(r+10*1,50,50));
            txSetColor(RGB(r+10*1,200,200));
            txCircle(x + s*1*-1, y + s*3, s*2);
            txSetFillColor(RGB(r+10*2,50,50));
            txSetColor(RGB(r+10*2,200,200));
            txCircle(x + s*0*-1, y + s*6, s*2);
            txSetFillColor(RGB(r+10*3,50,50));
            txSetColor(RGB(r+10*3,200,200));
            txCircle(x + s*1*-1, y + s*9, s*2);
            txSetFillColor(RGB(r+10*4,50,50));
            txSetColor(RGB(r+10*4,200,200));
            txCircle(x + s*4*-1, y + s*10,s*2);
            txSetFillColor(RGB(r+10*5,50,50));
            txSetColor(RGB(r+10*5,200,200));
            txCircle(x + s*7*-1, y + s*3, s*2);
            txSetFillColor(RGB(r+10*6,50,50));
            txSetColor(RGB(r+10*6,200,200));
            txCircle(x + s*8*-1, y + s*6, s*2);
            txSetFillColor(RGB(r+10*7,50,50));
            txSetColor(RGB(r+10*7,200,200));
            txCircle(x + s*7*-1, y + s*9, s*2);
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

        else if(poz == 3)
        {
            txLine(x + s*0+mol*10*-1,  y + s*20+mol*10, x + s*1*-1,  y + s*0);
            txLine(x + s*1+mol*10*-1,  y + s*0+mol*10,  x + s*10*-1, y + s*25);
            txLine(x + s*10+mol*10*-1, y + s*25+mol*10, x + s*19*-1, y + s*0);
            txLine(x + s*19+mol*10*-1, y + s*0+mol*10,  x + s*20*-1, y + s*20);
            txLine(x + s*20+mol*10*-1, y + s*20+mol*10, x + s*10*-1, y + s*0);
            txLine(x + s*10+mol*10*-1, y + s*0+mol*10,  x + s*0*-1,  y + s*20);
            txLine(x + s*3+mol*10*-1,  y + s*14+mol*10, x + s*17*-1, y + s*14);
        }
}

void DrawMan(int x, int y, double s, int poz, int mol)
{
    txSetColor(RGB(0,200,0));
    txSetFillColor(RGB(150,0,128));
    txCircle(x + s*2, y + s*2,s*2);                        //������

    txLine(x + s*2, y + s*4, x + s*2, y + s*8);            //�����������

    if(poz == 1)
    {
        txLine(x + s*2, y + s*8, x + s*0, y + s*12);           //����
        txLine(x + s*2, y + s*8, x + s*4, y + s*12);           //����

        txLine(x + s*2, y + s*5, x + s*0, y + s*8);            //����
        txLine(x + s*2, y + s*5, x + s*4, y + s*8);            //����
    }
     else if(poz == 2)
        {
            txLine(x + s*2, y + s*5, x + s*0, y + s*8+mol*2);           //����
            txLine(x + s*2, y + s*5, x + s*4, y + s*8+mol*2);           //����

            txLine(x + s*2, y + s*8, x + s*0, y + s*10);            //����
            txLine(x + s*2, y + s*8, x + s*4, y + s*10);            //����
        }

        else if(poz == 3)
        {
            txLine(x + s*2*-1, y + s*5, x + s*0*-1, y + s*8+mol*2);           //����
            txLine(x + s*2*-1, y + s*5, x + s*4*-1, y + s*8+mol*2);           //����

            txLine(x + s*2*-1, y + s*8, x + s*0*-1, y + s*10);            //����
            txLine(x + s*2*-1, y + s*8, x + s*4*-1, y + s*10);            //����
        }
}

void DrawYasa(int x, int y, double s, int poz, int mol)
{
    txSetColor(RGB(192,192,192));
    txSetFillColor(RGB(192,192,192));
    txCircle(x + s*2, y + s*2,s*2);
    txCircle(x + s*2, y + s*14,s*2);
    txSetColor(RGB(0,250,250));
    txLine(x + s*2, y + s*4, x + s*0, y + s*8);             //�������
    txLine(x + s*2, y + s*4, x + s*4, y + s*8);             //�����������

    txLine(x + s*0, y + s*8, x + s*2, y + s*12);            //������
    txLine(x + s*4, y + s*8, x + s*2, y + s*12);            //�����������
    if(poz == 1)
    {
        txLine(x + s*0, y + s*8, x + s*4, y + s*8);             //������������ �����
        txLine(x + s*2, y + s*4, x + s*2, y + s*12);            //�������������� �����
    }
     else if(poz == 2)
        {
            txLine(x + s*0+mol*1, y + s*80+mol*1, x + s*40+mol*1, y + s*80+mol*1);             //������������ �����
            txLine(x + s*20+mol*1, y + s*40+mol*1, x + s*20+mol*1, y + s*120+mol*1);            //�������������� �����
        }

        else if(poz == 3)
        {

            txSetColor(RGB(192,192,192));
            txSetFillColor(RGB(192,192,192));
            txCircle(x + s*2*-1, y + s*2,s*2);
            txCircle(x + s*2*-1, y + s*14,s*2);
            txSetColor(RGB(0,250,250));
            txLine(x + s*2*-1, y + s*4, x + s*0*-1, y + s*8);             //�������
            txLine(x + s*2*-1, y + s*4, x + s*4*-1, y + s*8);             //�����������

            txLine(x + s*0*-1, y + s*8, x + s*2*-1, y + s*12);            //������
            txLine(x + s*4*-1, y + s*8, x + s*2*-1, y + s*12);            //�����������
        }
}

void DrawAll(int x, int y, double s, int poz)
{
    int num;
    int sfal = s;
    int s1 = s;
    int pozfal = poz;

    num = 0;
    x = 20;
    y = 20;

    while(num <= 2)
    {
        int mol = s*1;
        DrawNam(x,y,s,poz,mol);
        x = x + 20 + s*11;
        y = y + 0 + s*0;
        s = s - 10;
        poz++;
        num++;
    }

    num = 0;
    x = 60;
    y = y + 20 + s1*10;
    s = sfal;
    poz = pozfal;

    while(num <= 2)
    {
        int mol = s*1;
        DrawMoon(x,y,s,poz,mol);
        x = x + 20 + s*12;
        y = y + 0 + s*0;
        s = s - 10;
        poz++;
        num++;
    }

    num = 0;
    x = 60;
    y = y+ 20 + s1*12;
    s = sfal;
    poz = pozfal;

    while(num <= 2)
    {
        int mol = s*1;
        DrawWathDogs(x,y,s*0.3,poz,mol);
        x = x + 20 + s*12;
        y = y + 0 + s*0;
        s = s - 10;
        poz++;
        num++;
    }

    num = 0;
    x = 1000 + s*50;
    y = 500;
    s = sfal;
    poz = pozfal;

    while(num <= 2)
    {
        int mol = s*1;
        DrawMan(x,y,s,poz,mol);
        x = x + 20 + s*8;
        y = y + 0 + s*0;
        s = s - 10;
        poz++;
        num++;
    }

    num = 0;
    x = 1000 + s*5;
    y = 20 - s*10;
    s = sfal;
    poz = pozfal;

    while(num <= 2)
    {
        int mol = s*1;
        DrawYasa(x,y,s,poz,mol);
        x = x + 20 + s*8;
        y = y + 0 + s*0;
        s = s - 10;
        poz++;
        num++;
    }
}
