//Write a complete C++ program that asks the user for a width w and prints a white arrow pattern (made of spaces) against a dark background made of Xs.

#include <iostream>
using namespace std;

int main() {
  int x;
  cout<<"Enter a digit"<<endl;
  cin>>x;
  for(int i=0;i<2*x-1;i++){
    for(int j=0;j<x;j++){
      if(i==j) cout<<" ";
      else if(i+j==2*x-2) cout<<" ";
      else cout<<"X";
    }
    cout<<endl;
  }
  return 0;
}
