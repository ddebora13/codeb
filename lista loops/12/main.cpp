#include <iostream>
#include <math.h>
/*
12. Write a program in C++ to calculate the sum of the series (1*1) + (2*2) + (3*3) + (4*4) + (5*5) + ... + (n*n). Go to the editor
Sample Output:
Input the value for nth term: 5
1*1 = 1
2*2 = 4
3*3 = 9
4*4 = 16
5*5 = 25
The sum of the above series is: 55
*/

int main()
{
   int a, sum=0;

    std::cout <<"Input number of terms: ";
    std::cin >>a;

    for(int i = 1; i <=a; i++){
        sum += (i*i);
    }

    std::cout<< "\nthe sum is: " << sum;
    return 0;
}
