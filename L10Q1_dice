#include <iostream>
#include <cmath>
#include <cstdlib>

using namespace std;
int main(){
  int dice, sum=0;
  cout<<"How many dice would you like to roll"<<endl;
  cin>>dice;
  for(int i=0; i<dice; i++){
    int x=rand()%10;
    while(!(x>=1 && x<=6)) x=rand()%10;
    cout<<x<<" ";
    sum+=x;
  }
  cout<<"\nThe sum of these numbers is "<<sum<<endl;
  return 0;
}
