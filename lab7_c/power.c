#include <stdio.h>

double potega(double x, int n){
    //while(n>0){
        //printf(x);
    //}
   // return result;
   if (n==0){
       return 1;
   }
   if (n<0){
       return 1/(x*n);
   }
    int power=1,i;
    for(i=1;i<=n;++i){
        power=power*x;
        }
    return power;
}


int power(double v, int e) {
    if (e == 0)
        return 1;
    if (e < 0){
        return power(v * v, e / 2);
    }
    if (e % 2 == 0)
       return power(v * v, e / 2);
    return v * power(v * v, (e - 1) / 2);
}


int main(){
    
    printf("%lf\n", potega(3, -2));
    printf("%lf\n", potega(2, 4));
    printf("%lf\n", potega(4, 0));
    printf("%d\n", power(3, -2));
    printf("%d\n", power(2, 4));
    printf("%d\n", power(4, 0));
}