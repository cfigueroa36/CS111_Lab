/* Write a complete C++ program that does the following. (Programs that correctly carry out some
of the tasks will receive partial credit.)
1. It asks the user to enter an integer n that is between 1 and 15.
2. It terminates at once if the user enters an illegal value for n.
3. It prints out a picture using (+ signs) of a diagonal line that extends over n rows and has a width of 3 characters
in each row. */

#include <iostream>
using namespace std;

int main() {
	int n;
  cout<<"Enter a digit between 1 and 15"<<endl;
  cin>>n;
  if(!(n>=1&&n<=15)){
    cout<<"Invalid input"<<endl;
    return 0;
  }
  for(int i=0; i<n; i++){
    for(int j=0; j<n+2; j++){
      if(j==i||j==i+1||j==i+2) cout<<"+";
      else cout<<" ";
    }
    cout<<endl;
  }
  return 0;
}