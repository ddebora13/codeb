#include <iostream>

/*
 8. Write a program in C++ to find the last prime number occur before the entered number.
    Sample Output:
    Input a number to find the last prime number occurs before the number: 50
    47 is the last prime number before 50
*/

int main()
{
    int n, ctr = 0;
    std::cout<< "Input a number to find the last prime number occurs before the number: ";
    std::cin>>n;


    for(int a = n-1; a >= 1; a--){

        for(int b = 2; b <a; b++){ // because the number only can be divided by itself and 1.

            if(a%b == 0){
                ctr ++;
            }

        }
        if(ctr == 0){
                if(a==1){
                    std::cout << "no prime number less than 2";
                    break;
                }
            std::cout << "last prime number is: "<< a;
                break;
        }

    ctr = 0;
    }
    return 0;
}

