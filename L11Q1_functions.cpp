/* Write a function printChar(char c, int n) that prints n copies of a character c. Ex: 
printChar('x', 9) should print x x x x x x x x x */

#include <iostream>
using namespace std;

void printChar(char c, int n){
  for(int i=0; i<n; i++) cout<<c<<" ";
  cout<<endl;
}

int main(){
  int num;
  char myChar;
  cout<<"Enter a character from the keyboard: ";
  cin>>myChar;
  cout<<"Enter an integer: ";
  cin>>num;
  printChar(myChar, num);
  return 0;
}
