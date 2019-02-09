#include <stdio.h>

int main()
{
   int a, pri,i,c;
   scanf("%d",&pri);
   if(pri == 0 || pri == 1)
   {printf("cant say");}
  
  else if(pri > 1)
    {
        for(i=2;i<pri;i++)
        {
           if(pri%i == 0 )
           c=1;
        }
        if(c == 1)
         {printf("no");}
        else
            {printf("yes");}
    }
   else
   printf("no");


}
