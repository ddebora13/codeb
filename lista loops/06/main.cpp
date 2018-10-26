#include <iostream>

int main()
{

    /*
    6. Write a program in C++ to find prime number within a range. Go to the editor
        Input number for starting range: 1
        Input number for ending range: 100
        The prime numbers between 1 and 100 are:
        2 3 5 7 11 13 17 19 23 29 31 37 41 43 47 53 59 61 67 71 73 79 83 89 97
        The total number of prime numbers between 1 to 100 is: 25
    */

    int n1, n2, ctr =0, fnd=0;;
    std::cout<< "Input number for starting range: ";
    std::cin>>n1;
    std::cout<< "\nInput number for ending range: ";
    std::cin>>n2;

    std::cout<<"\nThe prime numbers between "<< n1 << " and "<< n2 << " are:\n";
    for(int i = n1; i <=n2; i++){
        for(int u=1; u <=i; u++){
            if(i%u==0){
                ctr++;
            }
        }
        if(ctr==2){
            fnd++;
            std::cout << i << " ";
             }
        ctr=0;
    }

    std::cout << "\n\nThe total number of prime numbers between "<< n1 << " and "<< n2 <<" is: " << fnd <<std::endl;

    return 0;
}
