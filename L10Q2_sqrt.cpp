// Allow the user to continually enter values and return the square root. Continue to do this until the user enters 0.

#include <iostream>
#include <cmath>

using namespace std;
int main(){
  int n;
  cout<<"Enter an integer: ";
  cin>>n;
  while(n!=0){
    cout<<"The square root of "<<n<<" is "<<sqrt(n)<<endl;
    cout<<"Enter a new integer: ";
    cin>>n;
  }
  return 0;
}
