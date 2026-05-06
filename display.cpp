#include <graphics.h>
#include <conio.h>
#include <stdio.h>

int main() {
    int gd = DETECT, gm,errorcode;
  

    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");
    errorcode = graphresult();
    if (errorcode != grOk) {
        printf("Graphics initialization failed!!");
        exit(EXIT_FAILURE);
    }
      char str[50];
    // Normal text
    outtextxy(100, 50, "Default Text");

    // Change text style (font, direction, size)
    settextstyle(DEFAULT_FONT, HORIZ_DIR, 2);
    outtextxy(100, 100, "Horizontal Text");

    settextstyle(DEFAULT_FONT, VERT_DIR, 2);
    outtextxy(400, 150, "Vertical");

    // Get screen size
    int maxx = getmaxx();
    int maxy = getmaxy();

    sprintf(str, "Max X: %d", maxx);
    outtextxy(10, maxy - 40, str);

    sprintf(str, "Max Y: %d", maxy);
    outtextxy(10, maxy - 20, str);

    getch();
    closegraph();
    return 0;
}
