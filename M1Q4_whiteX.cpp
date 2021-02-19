  
//Write a complete C++ program that asks the user for a height h and prints a white X pattern (made of spaces) against a dark background made of Xs.

#include <iostream>
using namespace std;

int main(){
  int h;
  cout<<"Enter an integer"<<endl;
  cin>>h;
  for(int i=0; i<h; i++){
    for(int j=0; j<h; j++){
      if(i==j||(i!=j && i+j==h-1)) cout<<" ";
      else cout<<"X";
    }
    cout<<endl;
  }
  return 0;
}
