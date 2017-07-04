#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1=220,num2=284,counter=210,sum2;
    while (counter<10000)
    {
        int div=0;
        int sum1=0;
        counter++;
        while (div<=counter/2)
        {
            div++;
            if ( counter % div == 0 )
              sum1 += div;
        }
        div=0;
        sum2=sum1;
        sum1=0;
        while (div<=sum2/2)
        {
            div++;
            if ( sum2 % div == 0 )
              sum1 += div;
        }
        if ( sum1 == counter )
          {
              if ( counter == sum2 ) continue;
              num1 = counter;

              if ( num1 == num2) continue;
              num2 = sum2;

              printf("%d, %d\n",num1,num2);
          }
    }
    return 0;
}
