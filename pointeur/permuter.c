#include<stdio.h>
void Permuter(float *a,float *b){
    float p=*a;
    *a=*b;
    *b=p;
}
int main(){
float a,b;
printf("entrer le premier nombre :"); scanf("%f",&a);
printf("entrer le deuxieme nombre :"); scanf("%f",&b);

printf(" avant la permutation : x = %.2f    &&    y = %.2f\n",a,b);
Permuter(&a,&b);
printf(" avant la permutation : x = %.2f    &&    y = %.2f",a,b);

return 0;
}
