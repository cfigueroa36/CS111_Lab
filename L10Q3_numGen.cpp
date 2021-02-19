//Generate a random 3 digit number. Get the sum of the digits.

#include <iostream>
#include <cmath>

using namespace std;
int main(){
  int n, sum=0;
  n=rand();
  while(!(n>=100 && n<=999)) n=rand();
  cout<<"The random number generated is "<<n<<endl;
  for(int i=0; i<3; i++){
    sum=sum+n%10;
    n=n/10;
  }
  cout<<"The sum of its digits is "<<sum<<endl;
  return 0;
}
