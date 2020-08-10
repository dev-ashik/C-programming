#include<stdio.h>

struct point {
    int x, y;
};

//only valu didn't change value.
void func1(struct point p) {
    p.x = 3;
    p.y = 5;
}

// value changed.
void func2(struct point* p) {
    p->x = 3;
    p->y = 5;
}

int main() {


    struct point pt = { 1, 3 };
    //func1(pt);
    func2(&pt);

    printf("%d %d\n", pt.x, pt.y);

    return 0;
}

