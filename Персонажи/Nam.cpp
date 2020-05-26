#include "TXLib.h"                  //завершение програмы - ESC

void DrawNam    (int x, int y, int s, int r, int g, int b, int syc);
void DrawNamMove(int x, int y, int r, int g, int b);

int main()
{
    txCreateWindow (1280, 800);

    DrawNamMove(100, 100, 0, 180, 0);

    return 0;
}

void DrawNam(int x, int y, int s, int syc, int r, int g, int b)
{
    txSetColor(TX_NULL);
    txSetFillColor(RGB(r,g,b));
    txRectangle(x+2*s, y+2*s, x+9*s, y+6*s);           //тело

    txSetFillColor(RGB(0,0,0));
    txRectangle(x+3*s, y+3*s, x+4*s, y+4*s);           //глаз правый
    txRectangle(x+7*s, y+3*s, x+8*s, y+4*s);           //глаз левый

    txSetFillColor(RGB(r,g,b));
    txRectangle(x+2*s, y+0*s, x+3*s, y+1*s);           //рога правые
    txRectangle(x+3*s, y+1*s, x+4*s, y+2*s);           //рога правые
    txRectangle(x+9*s, y+0*s, x+8*s, y+1*s);           //рога левые
    txRectangle(x+8*s, y+1*s, x+7*s, y+2*s);           //рога левые

    txRectangle(x+1*s,  y+3*s,  x+2*s,  y+5*s);        //рука правая
    txRectangle(x+0*s,  y+4*s,  x+1*s,  y+7*s);        //рука правая
    txRectangle(x+9*s,  y+3*s,  x+10*s, y+5*s);        //рука левая
    txRectangle(x+10*s, y+4*s,  x+11*s, y+7*s);        //рука левая

    if(syc == 0)
    {
        txRectangle(x+2*s, y+6*s, x+3*s, y+7*s);   //нога правая
        txRectangle(x+3*s, y+7*s, x+5*s, y+8*s);   //нога правая
        txRectangle(x+9*s, y+6*s, x+8*s, y+7*s);   //нога левая
        txRectangle(x+8*s, y+7*s, x+6*s, y+8*s);   //нога левая
    }
    else if( syc == 1)
    {
        txRectangle(x+2*s, y+6*s, x+3*s, y+7*s);            //нога правая
        txRectangle(x+3*s, y+7*s, x+4*s, y+8*s);            //нога правая
        txRectangle(x+9*s, y+6*s, x+8*s, y+7*s);            //нога левая
        txRectangle(x+8*s, y+7*s, x+7*s, y+8*s);            //нога левая
    }
}

void DrawNamMove(int x, int y, int r, int g, int b)
{
    int num;
    int xdub = x;
    int ydub = y;
    int NamMove = 0;
    DrawNam(xdub, ydub, 25, 0, r, g, b);
    txSleep(17);

    while(1)
    {
        if(GetAsyncKeyState(VK_ESCAPE)) break;
        if(GetAsyncKeyState(0x57) || GetAsyncKeyState(0x53) || GetAsyncKeyState(0x41) || GetAsyncKeyState(0x44))
        {
            if(NamMove < 80) NamMove++;
            if(NamMove >= 80) NamMove = 0;
            txSetFillColor(RGB(0,0,0));
            txClear();

            if(GetAsyncKeyState(0x57))
            {
                ydub = ydub - 5;
                if(NamMove < 40) DrawNam(xdub, ydub, 25, 0, r, g, b);
                if(NamMove > 40) DrawNam(xdub, ydub, 25, 1, r, g, b);
                txSleep(5);
                continue;
            }
            if(GetAsyncKeyState(0x53))
            {
                ydub = ydub + 5;
                if(NamMove < 40) DrawNam(xdub, ydub, 25, 0, r, g, b);
                if(NamMove > 40) DrawNam(xdub, ydub, 25, 1, r, g, b);
                txSleep(5);
                continue;
            }
            if(GetAsyncKeyState(0x41))
            {
                xdub = xdub - 5;
                if(NamMove < 40) DrawNam(xdub, ydub, 25, 0, r, g, b);
                if(NamMove > 40) DrawNam(xdub, ydub, 25, 1, r, g, b);
                txSleep(5);
                continue;
            }
            if(GetAsyncKeyState(0x44))
            {
                xdub = xdub + 5;
                if(NamMove < 40) DrawNam(xdub, ydub, 25, 0, r, g, b);
                if(NamMove > 40) DrawNam(xdub, ydub, 25, 1, r, g, b);
                txSleep(5);
                continue;
            }
        }
    }
}
