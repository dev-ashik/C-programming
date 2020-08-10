#include<stdio.h>
struct point {
    int x, y;
};


int main() {

    //struct point pts[3];
    struct point pt = { 1, 3 };
    printf("%d %d\n", pt.x, pt.y);

    struct point* ptr = &pt;

    ptr->x = 4;
    ptr->y = 5;

    printf("%d %d\n", pt.x, pt.y);

    return 0;
}
