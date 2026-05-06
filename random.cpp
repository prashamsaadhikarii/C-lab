#include <graphics.h>
#include <conio.h>

int main() {
    int gd = DETECT, gm;

    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");

    // Circle
    circle(200, 150, 50);

    // Ellipse
    ellipse(400, 150, 0, 360, 80, 40);

    // Rectangle
    rectangle(50, 250, 200, 350);

    // Square
    rectangle(250, 250, 350, 350);

    // Arc
    arc(450, 300, 0, 180, 50);

    // Triangle
    line(100, 400, 50, 450);
    line(50, 450, 150, 450);
    line(150, 450, 100, 400);

    getch();
    closegraph();
    return 0;
}
