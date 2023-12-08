#include <iostream>
#include <chrono>
using namespace std;
  int factorial_recursion (unsigned long long number ){
    if(number==0)
    return 1 ;
    else 
    return number*factorial_recursion(number-1);
  }
main(){
//start time
auto start = chrono::high_resolution_clock::now();
// start coding 
unsigned long long number,result;
cout<<"Enter number to find Factorial"<<"\n";
cin>>number;
result=factorial_recursion(number);
cout<<"Factorial for "<<number<<" = "<<result<<"\n";
// end time
auto end =chrono::high_resolution_clock::now();
// Calculate  time
auto execution_time =chrono::duration_cast<chrono::microseconds>(end - start).count();
cout << "Execution time: " << execution_time << "microseconds40" <<endl;
}