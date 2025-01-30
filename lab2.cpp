#include<bits/stdc++.h>
#include<graphics.h>
#include<stdio.h>
#include<conio.h>
#include<windows.h>

using namespace std;

int main(){
    int gd = DETECT,gm;
    initgraph(&gd,&gm,"");
    int a = getmaxx();
    //int b = getmaxy();
    int x1 = 1;
    int y1 = 1;
    int x2 = 500;
    int y2 = 500;
    //cout<<a<<' '<<b<<endl;
    setcolor(GREEN);
    float m = (float)(y2 - y1)/(float)(x2 - x1);
    float b = y2 - m * x2;
    cout<<m<<' '<<b<<endl;
    int x,y;
    if(x1 == x2){
        x = x1;
        y = y1;
        while(y <= y2){
            putpixel(x,y,GREEN);
            y++;
        }
    }
    else if(m == 0){
        x = x1;
        y = y1;
        while(x <= x2){
            putpixel(x,y,GREEN);
            x++;
        }
    }
    else if(abs(m) <=1){
        x = x1;
        y = y1;
        while(x<=x2){
            putpixel(x,y,GREEN);
            x = x + 1;
            y = m*x +b;
        }
    }
    else if(abs(m) > 1){
        x = x1;
        y = y1;
        while(y<=y2){
            putpixel(x,y,GREEN);
            y = y + 1;
            x = (y - b)/m;
        }
    }

    //line(100,200,200,200);
    getch();
    closegraph();

    return 0;
}
