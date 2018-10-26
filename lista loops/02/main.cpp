#include <iostream>

using namespace std;

int main()
{
    /*
    2. Write a program in C++ to find the sum of first 10 natural numbers.
        Sample Output:
        Find the first 10 natural numbers:
        ---------------------------------------
        The natural numbers are:
        1 2 3 4 5 6 7 8 9 10
        The sum of first 10 natural numbers: 55
    */
    int sum =0;
    for(int i = 1; i<=10 ; i++){
        sum+=i;
    }
     std::cout << "The sum of first 10 natural numbers: "<< sum;
    return 0;
}
