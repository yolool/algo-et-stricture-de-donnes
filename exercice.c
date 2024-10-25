#include<stdio.h>

int main(){
  int a;
  int nf;
  int i;
  int b;
  

/*printf("donner le nombre de fois");
scanf("%d",&nf);
for (i=1;i<=nf;i++){
    printf("%d===>ENSI\n",i);
}
*/
/*i=1;
do
{
    printf("%d===>ENSI\n",i++);
} while (i<=10);

*/


/*
do
{
     printf("donner un entier tel que 1<a<100");
      scanf("%d",&a);
} while (a<1 || a>100);


printf("Bravo");

 
*/

printf("donner la valeur de a");
scanf("%d",&a);
printf("donner la valeur de b");
scanf("%d",&b);


if (a>b)

    printf("le min entre a et b est b=%d",b);
else
    
 printf("le min entre a et b est a=%d",a);



return 0;

}
