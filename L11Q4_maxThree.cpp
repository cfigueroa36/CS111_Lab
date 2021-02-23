/*Write a function maxThree which takes three parameters and returns the value of the largest.
maxThree(11.8, 17.2, 14.4) should return 17.2*/

#include <iostream>
using namespace std;

double maxThree(double a, double b, double c){
  if(a>b && a>c) return a;
  else if (b>a && b>c) return b;
  else return c;
}

int main(){
  double x, y, z;
  cout<<"Enter three numbers: "<<endl;
  cin>>x>>y>>z;
  cout<<"The largest number is "<<maxThree(x, y, z)<<endl;
  return 0;
}
