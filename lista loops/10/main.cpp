#include <iostream>
#include <iomanip>
/*
        10. Write a program in C++ to find the sum of digits of a given number.
            Sample Output:
            Input a number: 1234
            The sum of digits of 1234 is: 10
*/
int main()
{
    int n,n2, sum=0, r,j;
    float mi;
    std::cout<< "input a number: ";
    std::cin>> n;

    while(n > 0){
        r = n%10;
        n = n / 10;
        sum += r;

    }
    mi = n%10;
    j = n%10;
    std::cout << std::setprecision(3) << mi<< std::endl;
    std::cout <<j <<std::endl;

    std::cout<< "\n\nsum of the digits is: "<< sum;
     return 0;
}
