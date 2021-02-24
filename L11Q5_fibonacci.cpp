/* Write a function fibonacci(int n) which calculates the nth Fibonacci number.
Write a program that uses this function and the function isPrime to print out the first five Fibonacci numbers that are also prime.
fibonacci(10) should return 34 */

#include <iostream>
using namespace std;

int fibonacci(int n){
  int n1=0, n2=1, n3=0;
  for(int i=0; i<n-2; i++){
    n3=n2+n1;
    n1=n2;
    n2=n3;
  }
  return n3;
}

int main(){
  int n;
  cout<<"Enter an integer: "<<endl;
  cin>>n;
  cout<<fibonacci(n)<<endl;
  return 0;
}
