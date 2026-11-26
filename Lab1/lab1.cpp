#include <stdio.h>
#include <graphics.h>
#include <conio.h>

void main() {
    int gd = DETECT, gm;

    initgraph(&gd, &gm, "c:\\turboc3\\BGI");
    setbkcolor(BLUE);
    cleardevice();
    setcolor(WHITE);
    putpixel(50, 50, YELLOW);
    line(100, 100, 300, 100);
    rectangle(100, 120, 300, 200);
    circle(200, 300, 50);
    ellipse(450, 300, 0, 360, 80, 40);
    arc(450, 150, 0, 180, 50);
    setfillstyle(SOLID_FILL, RED);
    floodfill(200, 300, WHITE);
    outtextxy(250, 20, "Basic Shapes");
    printf("Max x = %d, Max y = %d", getmaxx(), getmaxy());
    getch();
    closegraph();
}