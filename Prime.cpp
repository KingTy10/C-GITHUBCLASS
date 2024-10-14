#include <iostream>
#include <cstdio>

//SYNTAX HELP FROM GEEKFORGEEKS
// ADDITONAL HELP FROM Luis Martinez
//ORIGINAL CODE BELOW 

int prime()
{

    for (int n = 1; n < 100; n++)
    {
        int cnt = 0;

        if (n <= 1)
            printf("%d is NOT prime\n", n);
        else {

            // Check for divisors from 1 to n
            for (int i = 1; i <= n; i++)
            {

                // Check how many number is divisible
                // by n
                if (n % i == 0)
                    cnt++;
            }

            // If n is divisible by more than 2 numbers
            // then it is not prime
            if (cnt > 2)
                printf("%d is NOT prime\n", n);

            // else it is prime
            else
                printf("%d is prime\n", n);
        }
    }
    return 0;    
}


//for (i = 1; i < 100; i++)
//{
//    if ((i % i) && (i % 1)
//    {
//        
//        printf("%d is prime\n" i)
//    
//    }
//    else
//    {
//        printf("%d is NOT prime")
//
//    }
//
//}