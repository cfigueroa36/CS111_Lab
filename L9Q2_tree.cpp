//Create a Christmas tree with h as the height given by the user

#include <iostream>
#include <cmath>
using namespace std;
int main(){
  int h;
  cout<<"Enter a digit"<<endl;
  cin>>h;
  for(int i=0; i<h; i++){
    for(int j=0; j<2*h; j++){
      if(j<=h-i-1||j>=h+i+1) cout<<" ";
      else cout<<"*";
    }
    cout<<endl;
  }
  return 0;
}