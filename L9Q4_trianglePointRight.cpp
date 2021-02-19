//Create a triangle with height h, where h is the input by the user, and the triangle points to the right

#include <iostream>
using namespace std;

int main(){
  int h;
  cout<<"Enter an integer: "<<endl;
  cin>>h;
  for(int i=0; i<h; i++){
    for(int j=0; j<h/2+1; j++){
      if(j<=i && i<=h/2) cout<<"*";
      else if(i+j<=h-1 && i>=h/2) cout<<"*";
      else cout<<" ";
    }
    cout<<endl;
  }
}
