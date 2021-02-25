//three right triangles with height h next to each other

#include <iostream>
using namespace std;
int main(){
  int h;
  cout<<"Enter an integer:"<<endl;
  cin>>h;
  for(int i=0; i<h; i++){
    for(int j=0; j<3*h; j++){
      if((j<=i) || (j>=h && j<=i+h) || (j>=2*h && j<=i+2*h)) cout<<"*";
      else cout<<" ";
    }
    cout<<endl;
  }
  return 0;
}
