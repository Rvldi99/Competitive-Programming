#include <stdio.h>

void update(int *aPtr,int *bPtr) {
    int c = (*aPtr) + (*bPtr);
    int d = (*aPtr) - (*bPtr);
    
    if(d < 0) {
        d *= -1;
    }
    
    *aPtr = c;
    *bPtr = d;
}

int main() {
    int a, b;
    int *aPtr = &a;
    int *bPtr = &b;
    
    scanf("%d", &a);
    scanf("%d", &b);
    
    update(aPtr, bPtr);
    
    printf("%d\n", a);
    printf("%d\n", b);
}
