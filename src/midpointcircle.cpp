#include<graphics.h>
#include<stdio.h>

void midpointCircle(int h, int k, int r){
    initwindow(800, 600, "Midpoint circle");

    for(int radius = 0; radius <= 500; radius++){
        r = r + radius;
        int x = 0, y = r;
        int p = 1 - r;

        while(x<=y){
            printf("Drawing...\n");
            putpixel(h + x, k + y, WHITE);
            delay(1);
            putpixel(h + y, k + x, RED);
            delay(1);
            putpixel(h + x, k - y, BLUE);
            delay(1);
            putpixel(h + y, k - x, GREEN);
            delay(1);
            putpixel(h - x, k + y, MAGENTA);
            delay(1);
            putpixel(h - y, k + x, BROWN);
            delay(1);
            putpixel(h - x, k - y, YELLOW);
            delay(1);
            putpixel(h - y, k - x, WHITE);
            delay(1);

            if(p < 0){
                printf("x++\n");
                x += 1;
                p += 2*x + 3;
            }
            else{
                printf("x++, y--\n");
                x += 1;
                y -= 1;
                p += 2*x - 2*y +5;
            }
        }
    }

    getch();
    closegraph();
}

int main(){
    midpointCircle(400, 300, 100);
    return 0;
}