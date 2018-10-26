#include <iostream>

using namespace std;

int main()
{
   /*
   13. Write a program to calculate the series (1) + (1+2) + (1+2+3) + (1+2+3+4) + ... + (1+2+3+4+...+n).
    Sample Output:
    Input the value for nth term: 5
        1 = 1
        1+2 = 3
        1+2+3 = 6
        1+2+3+4 = 10
        1+2+3+4+5 = 15
    The sum of the above series is: 35*/

   int n, sum=0, sum2;
    std::cout<<"Input number of terms: ";
    std::cin>>n;

    for(int i = 1; i <= n; i++){
            sum2=0;
        for(int j = 1; j <= i; j++){
            sum+=j; //general sum
            sum2+=j; //sum within loop; resets;
            std::cout<< j;
            if (j < i){
                std::cout<<"+";
            }
        }
    std::cout << " = " << sum2 << endl;
    }
   cout << " The sum of the above series is: " << sum << std::endl;
        return 0;
}
