#include <iostream>

using namespace std;

int main()
{
    /*9. Write a program in C++ to find the Greatest Common Divisor (GCD) of two numbers.
        Sample Output:
        Input the first number: 25
        Input the second number: 15
        The Greatest Common Divisor is: 5

    */
    int n1,n2,gcd=0;
        std::cout << "input first number: ";
        std::cin >> n1;
        std::cout << "\ninput second number: ";
        std::cin >> n2;

            for(int i = 1; i<=n1 && i<=n2; i++){
                if(n1%i==0 && n2%i ==0){
                   gcd = i;
                }
            }

        std::cout<<"\nThe Greatest Common Divisor between "<< n1<< " and " << n2 << " is: " <<gcd<<std::endl;
    return 0;
}
