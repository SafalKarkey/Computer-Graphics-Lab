/*
basic things:
if moving from left to right, increase x by 1 else by -1.
if moving from up to down, increase y by 1 else by -1

if slope < 1, p = 2dy - dx
    if p < 0, increase x, next p = p + 2dy
    else, increase x, increase y, next p = p + 2dy - 2dx

if slope > 1, replace dy with dx and vice versa
*/

#include<graphics.h>
#include<stdio.h>
#include<math.h>

void bresenline(int x1, int y1, int x2, int y2){
    int x = x1, y = y1;
    int dx, dy, xinc, yinc, p;
    dx = abs(x2 - x1);
    dy = abs(y2 - y1);

    if(x2 > x1){ //check if moving from left to right
        xinc = 1;
    }
    else{
        xinc = -1;
    }

    if(y2 > y1){ //check if moving from up to down
        yinc = 1;
    }
    else{
        yinc = -1;
    }

    if(dx>dy){ //slope < 1
        p = 2*dy - dx;

        for(int k = 0; k<dx; k++){
            x += xinc; //x is always increased if slope < 1
            if(p<0){
                p += 2*dy;
            }
            else{
                y += yinc;
                p += 2*dy - 2*dx;
            }
            putpixel(x, y, WHITE);
        }
    } //else, slope > 1
    else{
        p = 2*dx - dy;

        for(int k = 0; k<dy; k++){
            y += yinc; //y is always increased if slope > 0
            if(p<0){
                p += 2*dx;
            }
            else{
                x += xinc;
                p += 2*dx - 2*dy;
            }
            putpixel(x,y, WHITE);
        }
    }
}

int main(){
    initwindow(800, 600, "Safal Karki's implementation of Bresenham's Line Algorithm");
    bresenline(0, 300, 800, 300);
    bresenline(400, 0, 400, 600);
    bresenline(0, 300, 400, 0);
    bresenline(400, 0, 800, 300);
    bresenline(800, 300, 400, 600);
    bresenline(400, 600, 0, 300);
    getch();
    closegraph();
    return 0;
}