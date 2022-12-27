#include<stdio.h>
#include<graphics.h>

void lineDDA(int x1, int y1, int x2, int y2){
    int dx = x2 - x1;
    int dy = y2 - y1;
    int steps;
    float xincrement, yincrement, x = x1, y = y1;

    if(abs(dx) > abs(dy))
    {
        steps = abs(dx);
    } 
    else 
    {
        steps = abs(dy);
    }

    //increase xk or yk by slope or 1/slope or 1
    xincrement = dx/(float)steps;
    yincrement = dy/(float)steps;

    for(int i = 0; i<steps; i++){
        x += xincrement;
        y += yincrement;
        putpixel(x, y, WHITE);
        // delay(1);
    }

}

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
    initwindow(800, 600, "DDA");
    // createman();
    // lineDDA(400, 400, 200, 200);
    lineDDA(0,0, 800, 600);
    getch();
    closegraph();
    return 0;
}