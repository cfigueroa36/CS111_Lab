/*
Write a function diceRoll(int x) that rolls x dice and retuns the result. Use
rand() to generate the dice rolls.
diceRoll(3) should print anything from 3 to 18
*/

#include <iostream>
using namespace std;

int diceRoll(int n){
  int diceNum, sum=0;
  for(int i=0; i<n; i++){
    diceNum=0;
    while(!(diceNum>=1 && diceNum <=6))diceNum=rand()%10;
    sum+=diceNum;
  }
  cout<<sum<<endl;;
  return sum;
}

int main(){
  int num;
  cout<<"Enter the numder of dice you want to roll: "<<endl;
  cin>>num;
  diceRoll(num);
  return 0;
}
