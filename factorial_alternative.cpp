#include <iostream>
#include <chrono>
using namespace std;
 unsigned long factorial_iterative(unsigned long long number){
    unsigned long long fact=1; 
    for(unsigned long long i=1;i<=number; i++){
        fact*=i; 
    }
  return fact; 
}
int main() {
// start time
 auto start =chrono::high_resolution_clock::now();
 // start coding 
 unsigned long long number , result;
cout<<"Enter number to find factorial "<<"\n";
cin>>number; 
result=factorial_iterative(number);
cout<<"Factorial for "<<number<<" = "<<result<<"\n";
// end time
auto end =chrono::high_resolution_clock::now();
// Calculate  time
 auto execution_time =chrono::duration_cast<chrono::microseconds>(end - start).count();
cout<< "Execution time: " << execution_time << "microseconds" <<endl;
    return 0;
}