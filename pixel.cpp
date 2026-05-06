#include <graphics.h>
#include <stdio.h>
#include <conio.h>

int main() {
    int gd = DETECT, gm,errorcode;
    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");
    errorcode=graphresult();
    if(errorcode!=grOk){
    	printf("Failed Graphics !");
    	exit(EXIT_FAILURE);
	}
    // plotting pixels
    putpixel(50, 50, WHITE);
    outtextxy(55, 50, "(50,50)");

    putpixel(100, 50, WHITE);
    outtextxy(105, 50, "(100,50)");

    putpixel(150, 100, WHITE);
    outtextxy(155, 100, "(150,100)");

    putpixel(200, 150, WHITE);
    outtextxy(205, 150, "(200,150)");

    putpixel(250, 200, WHITE);
    outtextxy(255, 200, "(250,200)");

    putpixel(300, 250, WHITE);
    outtextxy(305, 250, "(300,250)");

    putpixel(350, 300, WHITE);
    outtextxy(355, 300, "(350,300)");

    putpixel(400, 350, WHITE);
    outtextxy(405, 350, "(400,350)");

    putpixel(450, 400, WHITE);
    outtextxy(455, 400, "(450,400)");

    putpixel(500, 450, WHITE);
    outtextxy(505, 450, "(500,450)");

    outtextxy(10, 10, "Origin (0,0)");

    getch();
    closegraph();
    return 0;
}
