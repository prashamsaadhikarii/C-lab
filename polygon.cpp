#include <graphics.h>
#include <conio.h>

int main() {
    int gd = DETECT, gm;

    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");

    // 5-sided polygon (pentagon)
    int points[] = {
        200,100,
        250,150,
        230,220,
        170,220,
        150,150,
        200,100   // same as first point (IMPORTANT)
    };

    // Draw polygon
    drawpoly(6, points);

    // Set fill style
    setfillstyle(SOLID_FILL, BLUE);

    // Fill polygon
    fillpoly(6, points);

    getch();
    closegraph();
    return 0;
}
