#include <graphics.h>
#include <stdio.h>
#include <conio.h>

int main() {
    int gd = DETECT, gm;
    int errorcode;
    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");
    errorcode = graphresult();
    if (errorcode != grOk) {
        printf("Graphics initialization failed!!");
        exit(EXIT_FAILURE);
    }

    outtextxy(100, 100, "Graphics Initialized Successfully!");

    getch();
    closegraph();
    return 0;
}
