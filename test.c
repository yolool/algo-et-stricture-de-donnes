
#include<stdio.h>
#include<stdlib.h>
int main(){
   float a, b,x;
    
    printf("donner la valeur de a");
    scanf("%f",&a);
    printf("donner la valeur de b");
    scanf("%f",&b);

    if (a!=0)
    {
        x=-b/a;
        printf("%.2f/%.2f=%.2f",a ,b,x);
    }
    else if (b==0 && a!=0)
    {
        printf("R");
    }
    else{
        printf("vide");
    }
    
return 0;

} 