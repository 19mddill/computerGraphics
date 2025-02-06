#include<bits/stdc++.h>
#include<graphics.h>
#include<stdio.h>
#include<conio.h>
#include<windows.h>

using namespace std;

int gd = DETECT,gm;

void drawXYAxis(int maxX,int maxY){
    setcolor(WHITE);
    line(maxX/2,0,maxX/2,maxY);
    line(0,maxY/2,maxX,maxY/2);
}

void drawGraphDDA(int x1,int y1,int x2,int y2,int xx,int yy){

    setcolor(GREEN);
    float x = x1;
    float y = y1;
    float m = (float)(y2 - y1)/(float)(x2 - x1);

    if(abs(m) <= 1){
        while(x <= x2){
            putpixel(x + xx,yy - y,GREEN);
            x++;
            y += m;
        }
    }
    else if(abs(m)>1){
        while( y <= y2){
            putpixel(x + xx,yy - y,GREEN);
            y++;
            x += 1/m;
        }
    }
}

int main(){

    initgraph(&gd,&gm,"");

    int maxX = getmaxx();
    int maxY = getmaxy();
    int xx = maxX/2;
    int yy = maxY/2;

    drawXYAxis(maxX,maxY);

    drawGraphDDA(1,1,500,400,xx,yy);
    drawGraphDDA(100,100,400,100,xx,yy);

    getch();
    closegraph();

    return 0;
}
