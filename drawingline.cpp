#include <graphics.h>
#include <conio.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");

    // Solid line
    setlinestyle(SOLID_LINE, 0, 3);
    line(50, 50, 200, 50);

    // Dotted line
    setlinestyle(DOTTED_LINE, 0, 3);
    line(50, 100, 200, 100);

    // Dashed line
    setlinestyle(DASHED_LINE, 0, 3);
    line(50, 150, 200, 150);

    // moveto & lineto
    setlinestyle(SOLID_LINE, 0, 1);
    moveto(50, 200);
    lineto(200, 200);

    getch();
    closegraph();
    return 0;
}
