//three right triangles with height h

#include <iostream>
using namespace std;
int main(){
  int n;
  cout<<"Enter an integer:"<<endl;
  cin>>n;
  for(int k=0;k<3; k++){
    //three triangles
    for(int i=0; i<n; i++){
      for(int j=0; j<n; j++){
        if(j<=i) cout<<"*";
        else cout<<" ";
      }
      cout<<endl;
    }
  }
  return 0;
}
