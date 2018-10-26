#include <iostream>


int main()
{
 /*
 5. Write a program in C++ to check whether a number is prime or not.
    Sample Output:
    Input a number to check prime or not: 13
    The entered number is a prime number.

    dividir os numeros
    verificar se o numero é divisivel apenas por ele mesmo e 1

 */
    int n, ctr =0;
    std::cout << "Input a number to check prime or not: ";
    std::cin>> n;

    for(int i = 1; i <= n; i++){
        if(n%i == 0){
            ctr++;
        }
    }

    if(ctr == 2){
        std::cout<< n << " is a prime number.\n";
    }
    else
        std::cout<< "nope\n";

    return 0;
}
