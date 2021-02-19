/* Write a complete C++ program that does the following. (Programs that correctly carry out some
of the tasks will receive partial credit.)
1. It asks the user to enter an integer n that is between 1 and 21.
2. It repeatedly reads n from the user until the supplied value of n is legal.
3. It prints out a picture of an n × n square formed of X characters except that a diagonal stripe, formed by the
diagonal and any position immediately to its right, is printed using an O character. */

#include <iostream>
using namespace std;

int main(){
  int n;
  cout<<"Enter a number between 1 and 21"<<endl;
  cin>>n;
  while(!(n>=1&&n<=21)){
    cout<<"Enter a  number between 1 and 21";
    cin>>n;
  }
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      if(i==j||j==i+1){
        cout<<"O";
      }
      else cout<<"X";
    }
    cout<<endl;
  }
  return 0;
}
