/*Write a function isPrime to test whether a parameter is prime. Apply the function in a program which prints all the prime numbers up to 100.
isPrime(17) should return true */

#include <iostream>
using namespace std;

bool isPrime(int n){
  for(int i=2; i<=n; i++){
    if(n%i==0 && n!=i) return false;
  }
  return true;
}

int main(){
  cout<<"List of prime numbers up to 100:"<<endl;
  for(int j=2; j<101; j++){
    if(isPrime(j)==true) cout<<j<<endl;
  }
  return 0;
}
