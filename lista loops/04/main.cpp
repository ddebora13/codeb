#include <iostream>


int main()
{
    /*
    4. Write a program in C++ to find the perfect numbers between 1 and 500.
        The perfect numbers between 1 to 500 are:
        6
        28
        496

        perfect number:
        get  a number
        find its divisors
        sum the divisors and the result must be the number
    */
        int i = 1, u = 1, n, sum =0;
            std::cout<< "number: ";
            std::cin>>n;


         while(i <= n){

            while(u <= n){

               if(u < i){

                if(i%u ==0){
                    sum+=u;
                }

               }

            u++;
            }

            if(sum == i){
                std::cout<<i<<"\n";
            }

            i++;
            u = 1;
            sum=0;
         }

/*        for(int i = 1; i <=n; i++){

            for(int k = 1; k < n/2; i++){
                if(i<k){
                        if(k%i==0){
                            sum+=k;
                        }

                }
            }

            if(sum == i){
                std::cout << i << " ";
            }

        }*/



    return 0;
}
