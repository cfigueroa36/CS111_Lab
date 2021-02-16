//zig-zag of stars

#include <iostream>
#include <cmath>
using namespace std;
int main(){
  int h;
  cout<<"Enter a digit"<<endl;
  cin>>h;
  for(int i=0; i<h; i++){
    for(int j=0; j<h; j++){
      if(i%2==0) cout<<"* ";
      else cout<<" *";
    }
    cout<<endl;
  }
  return 0;
}