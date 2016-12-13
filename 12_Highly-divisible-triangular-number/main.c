//
// Created by regoeco on 6/12/16.
//
/*
    The sequence of triangle numbers is generated by adding the natural numbers. So the 7th triangle number would be 1 + 2 + 3 + 4 + 5 + 6 + 7 = 28. The first ten terms would be:

    1, 3, 6, 10, 15, 21, 28, 36, 45, 55, ...

    Let us list the factors of the first seven triangle numbers:

         1: 1
         3: 1,3
         6: 1,2,3,6
        10: 1,2,5,10
        15: 1,3,5,15
        21: 1,3,7,21 =
        28: 1,2,4,7,14,28= 3³ + 1

    We can see that 28 is the first triangle number to have over five divisors.

    What is the value of the first triangle number to have over five hundred divisors?

    ###################################################################################
    solutión
    n = P(n) = P( p1^a1 * p2^a2 * ... * pn^an ) = (a1 + 1) * (a2 + 1) * ... * (an + 1) = num_div

    num_div = 500:
        500 = (a1 + 1) * (a2 + 1) * ... * (an + 1) =  P( p1^a1 * p2^a2 * ... * pn^an ) = P(n) = n
            = 5 * 5 * 5 * 2 * 2 = (4 + 1) * (4 + 1) * (4 + 1) * (1 + 1) * (1 + 1)
                                   ↑         ↑         ↑         ↑         ↑
                                   a1        a2        a3        a4        a5
            = P( p1⁴ * p2⁴ * p3⁴ * p4 * p5) = P(n) = n
              p1 < p2 < p3 < p4 < p5
            = P( 2⁴ * 3⁴ * 5⁴ * 7 * 11) = P(62,370,000) = 62,370,000
            =


    sum = n * ( n + 1 ) / 2
    n² + n - 2sum = 0
 */
#include <stdio.h>
#include <math.h>
int main(void){

    register int i, j;
    register double t = 0;
    register int c = 0;

    //t = i*(i + 1)/2;
    //t = 62370000;
    //i = 11100;

    i = 1;
    t = 0;
    while(i<100){
        t = i*(i + 1)/2;
        for(j = 1, c = 0; j<=t; fmod(t,j)==0?c++:0, j++);
        printf("%d:\t%0.0f\t%d\n", i, t, c);
        i++;
    }
    return 1;
}
