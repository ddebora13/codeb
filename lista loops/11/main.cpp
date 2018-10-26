#include <iostream>
#include <math.h>
/*
        1. Write a program in C++ to find the sum of the series 1 + 1/2^2 + 1/3^3 + ..+ 1/n^n. Go to the editor
Sample Output:
Input the value for nth term: 5
1/1^1 = 1
1/2^2 = 0.25
1/3^3 = 0.037037
1/4^4 = 0.00390625
1/5^5 = 0.00032
The sum of the above series is: 1.29126
*/

int main()
{
   double a,b, sum=0;

   std::cout<< "input number of terms: ";
   std::cin >>a;

   for(int i = 1; i <= a; i++ ){
        b = 1/ pow(i,i);
        sum +=b;

   }
   std::cout << "\nsum is: " << sum;

    return 0;
}
