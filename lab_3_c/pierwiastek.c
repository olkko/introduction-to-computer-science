#include <stdio.h>
#include <math.h>

int roots(double a, double b, double c,  double *root1, double *root2){
    int root_count;
    double dis = b * b - 4 * a * c;
    if (dis > 0){
        root_count = 2;
        *root1 = (-b + sqrt(dis)) / (2 * a);
        *root2 = (-b - sqrt(dis)) / (2 * a);
    }
    else if (dis == 0){
        root_count = 1;
        *root1 = (-b + sqrt(dis)) / (2 * a);
    }
    return root_count;
}

void main(){
    double a, b, c, root1, root2, root_count;
    printf("Enter numbers a, b, c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    root_count = roots(a, b, c, &root1, &root2);
    if (root_count == 2){
        printf("2 roots: \n");
        printf("root1 = %lf  root2 = %lf",root1, root2);
    }
    else if (root_count==1){
        printf("1 root: \n");
        printf("x0 = %lf", root1);
    }
    else{
        printf("no real roots");
    }
}
