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
    int b = getmaxy();
    cout<<a<<' '<<b<<endl;
    setcolor(GREEN);
    line(100,200,200,200);
    setcolor(RED);
    circle(200,200,200);

    getch();
    closegraph();

    return 0;
}
