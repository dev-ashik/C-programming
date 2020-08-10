#include<stdio.h>
struct point {
    int x, y;
};

int main() {
    //just define a struct point varible
    //and allocate memory ofor it
    // but its members are not initialized!
    struct point p1 = { 2, 3 };

    printf("%d %d\n", p1.x, p1.y);

    return 0;
}
