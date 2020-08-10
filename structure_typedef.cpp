#include<stdio.h>
struct point {
    int x, y;
};

typedef struct point point;

int main() {
    //just define a struct point varible
    //and allocate memory ofor it
    // but its members are not initialized!
    point p1 = { 2, 3 };
    point p2 = p1;

    printf("%d %d\n", p1.x, p1.y);
    printf("%d %d\n", p2.x, p2.y);

    return 0;
}
