#include <iostream>

int main()
{
    /*
    7. Write a program in C++ to find the factorial of a number.
    Sample output:
    Input a number to find the factorial: 5
    The factorial of the given number is: 120
    */

    // USING WHILE LOOP
    int i =1, factorial = 1, n;
    std::cout<< "Input a number to find the factorial: ";
    std::cin>>n;

    while(i <= n){
        factorial*=i;
        i++;
    }
    std::cout<< "\nThe factorial of the given number is: "<<factorial<<std::endl;


    /*USING FOR LOOP

        int n,m=1;
            std::cout<< "Input a number to find the factorial: ";
            std::cin>>n;

        for(int i = 1; i <=n;i++){
            m*=i;
        }

            std::cout<< "\n\nThe factorial of the given number is: "<<m;
    */
    return 0;
}
