#include <stdio.h>
int power(int v, int e) {
    if (e == 0)
        return 1;
    if (e<0){
        return power(v * v, e / 2);
    }
    if (e % 2 == 0)
       return power(v * v, e / 2);
    return v * power(v * v, (e - 1) / 2);
}
int main() {
    int x = 2, v = -2;
    printf("%d", power(x, v));
}