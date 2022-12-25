//Drawing a stickman using graphics.h library
#include<graphics.h>

void createman(){
    circle(400, 100, 80);
    //body
    line(400, 180, 400, 400);
    //legs
    line(400, 400, 350, 590);
    line(400, 400, 450, 590);
    //hands
    line(400, 200, 300, 350);
    line(400, 200, 500, 350);
    //eyes
    ellipse(360, 75, 0, 360, 15, 12);
    ellipse(440, 75, 0, 360, 15, 12);
    //mouth
    arc(400, 120, 200, 340, 40);
}

int main(){
    initwindow(800, 600, "MADE BY SAFAL KARKI");
    createman();

    rectangle(200, 10, 600, 590);
    
    getch();
    closegraph();
    return 1;
}