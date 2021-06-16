#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
   int n ,g;
   int ng =1;
   srand(time(0));
   n = rand()%100+1 ;

   //printf("%d\n",n);
   printf("welcome to the game !\n");
do
{
    printf("guess the number between 1 to 100 ");
    scanf("%d",&g);
    if(g>n)
    {
        printf("please guess lower number\n");
    }
    else if(g<n)
    {
        printf("please guess the higher number\n");
    }
    else
    {
        printf("you guessed in it %d attempts\n",ng);
    }
    ng++;
}while(g!=n);


    return 0;
}
