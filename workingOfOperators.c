#include<stdio.h>
int main()
{
    int a = 10, b = 4, c = 10, d = 20;
 


    if (a > b && c == d)
        printf("a is greater than b AND c is equal to d\n");
    else
        printf("AND condition not satisfied\n");

    if (a > b || c == d)
        printf("a is greater than b OR c is equal to d\n");
    else
        printf("Neither a is greater than b nor c is equal "
               " to d\n");

    if (!a)
        printf("a is zero\n");
    else
        printf("a is not zero");
        
        if (a > b)
        printf("a is greater than b\n");
    else
        printf("a is less than or equal to b\n");
 

    if (a >= b)
        printf("a is greater than or equal to b\n");
    else
        printf("a is lesser than b\n");
 

    if (a < b)
        printf("a is less than b\n");
    else
        printf("a is greater than or equal to b\n");
 

    if (a <= b)
        printf("a is lesser than or equal to b\n");
    else
        printf("a is greater than b\n");
 

    if (a == b)
        printf("a is equal to b\n");
    else
        printf("a and b are not equal\n");

    if (a != b)
        printf("a is not equal to b\n");
    else
        printf("a is equal b\n");
        
     
      c =  a;
   printf("Line 1 - =  Operator Example, Value of c = %d\n", c );

   c +=  a;
   printf("Line 2 - += Operator Example, Value of c = %d\n", c );

   c -=  a;
   printf("Line 3 - -= Operator Example, Value of c = %d\n", c );

   c *=  a;
   printf("Line 4 - *= Operator Example, Value of c = %d\n", c );

   c /=  a;
   printf("Line 5 - /= Operator Example, Value of c = %d\n", c );

   c  = 200;
   c %=  a;
   printf("Line 6 - %= Operator Example, Value of c = %d\n", c );

   c <<=  2;
   printf("Line 7 - <<= Operator Example, Value of c = %d\n", c );

   c >>=  2;
   printf("Line 8 - >>= Operator Example, Value of c = %d\n", c );

   c &=  2;
   printf("Line 9 - &= Operator Example, Value of c = %d\n", c );

   c ^=  2;
   printf("Line 10 - ^= Operator Example, Value of c = %d\n", c );

   c |=  2;
   printf("Line 11 - |= Operator Example, Value of c = %d\n", c );
   
   return 0;
}
