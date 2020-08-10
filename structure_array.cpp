#include<stdio.h>
struct point {
    int x, y;
};


int main() {

    //struct point pts[3];
    struct point pts[3] = { 0 };

    pts[0].x = 1;
    pts[0].y = 3;

    return 0;
}
