#include <stdio.h>
#include <graphics.h>
#include <conio.h>

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "c:\\turboc3\\BGI");
    setbkcolor(BLUE);
    cleardevice();
    setcolor(WHITE);
    putpixel(50, 50, YELLOW);
    line(200, 100, 250, 200); // xadke line
    line(200, 100, 400, 100); // mathi ko sida line
    line(250, 200, 450, 200); // tala ko sida line
    line(400, 100, 450, 200); // right ko xadke line
    line(200, 100, 150, 200);
    line(150, 200, 150, 350);
    line(250, 200, 250, 350);
    line(450, 200, 450, 350);
    line(150, 350, 450, 350);
    circle(200, 200, 25);
    rectangle(340, 275, 380, 350);
    setfillstyle(SOLID_FILL, RED);
    floodfill(200, 300, WHITE);
    outtextxy(250, 20, "basic shapes");
    printf("Max x = %d, Max y = %d", getmaxx(), getmaxy());
    getch();
    closegraph();
    return 0;
}
