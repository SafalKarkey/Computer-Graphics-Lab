/************************
Digital Differntial Analyzer Algorithm

For endpoints left to right, (slope > 0)
#slope < 1:
y(k+1) = yk + slope
x(k+1) = xk + 1

#slope > 1:
y(k+1) = yK + 1
x(k+1) = xk + 1/slope

For endpoints right to left (slope < 0)
#slope < 1:
y(k+1) = yk - slope
x(k+1) = xk + 1

#slope > 1:
y(k+1) = yK + 1
x(k+1) = xk - 1/slope
*************************/

#include<stdio.h>
#include<graphics.h>

void paintwhite(){
    for(int i = 0; i<800; i++){
        for(int j = 0; j<600; j++){
            putpixel(i, j, WHITE);
        }
    }
    // for(int i = 0; i<800; i++){
    //     line(i, 0, 600, i);
    // }
}

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
        delay(1);
    }

}

int main(){
    initwindow(800, 600, "DDA");
    // paintwhite();
    
    // lineDDA(0,0,400, 500);
    // lineDDA(0,0,500, 400);
    lineDDA(400, 500, 0, 0);
    lineDDA(500, 400, 0,0);
    getch();
    closegraph();
    return 0;
}