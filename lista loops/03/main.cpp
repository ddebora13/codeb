#include <iostream>

using namespace std;

int main()
{
    /*
     3. Write a program in C++ to display n terms of natural number and their sum.
        Sample Output:
        Input a number of terms: 7
        The natural numbers upto 7th terms are:
        1 2 3 4 5 6 7
        The sum of the natural numbers is: 28
    */
    int n, sum=0;
    std::cout << "Type a number: ";
    std::cin>> n;
    std::cout << "The natural numbers upto " << n << "th terms are: ";
    for (int i=1; i<=n; i++){
        sum+=i;
        std::cout<< i << " ";
    }
    std::cout<< "\nThe sum is: " << sum;
    return 0;
}
