#include<stdio.h>
#include<math.h>

int t,r,a;

int main()
{
    printf ("Enter The Amount :   \n");
    scanf("%d",&a);

    printf ("Enter The holding time :   \n");
    scanf("%d",&t);

    printf ("Enter The rate of interaste :   \n");
    scanf("%d",&r);

   int m = (r*t*a)/100 ;
    int tax;

printf("                       return :%d\n",m);

if (m<=600000)
   {
    printf ("                        Tax : 0%% \n ");
    printf("                   tax amount :%d\n",m*0,&tax);
    printf("Total ammount You will Recive :%d\n",m+a-tax);
   }
   else if (m > 600000 && m <= 1200000)
   {
    printf ("                       Tax : 10%% \n");
    printf("                   tax amount :%d \n",(m*10)/100,&tax);
    printf("Total ammount You will Recive :%d\n",m+a-tax);
   }
   else if (1200000<m)
   {
    printf ("                        Tax : 15%%  \n");
    printf("                   tax amount :%d\n",(m*15)/100,&tax);
    printf("Total ammount You will Recive :%d\n",m+a-tax);
   }

   
    return 0;
    
}


 
