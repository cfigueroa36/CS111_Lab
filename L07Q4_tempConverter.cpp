//Convert celsius to fahrenheit and viceversa

#include <iostream>
using namespace std;
int main(){
  double temp;
  char type;
  cout<<"Is your temperature in Celsius (c) or Fahrenheit (f)? Enter the appropriate letter"<<endl;
  cin>>type;
  cout<<"What is the temperature in degrees "<<type<<"?"<<endl;
  cin>>temp;
  while(!(type=='c'||type=='f')){
    cout<<"Enter the appropriate character"<<endl;
    cin>>type;
  }
  if(type=='f'){
    cout<<"Your temperature in Celsius is "<<(temp-32)*5/9<<endl;
  } else cout<<"Your temperature in Fahrenheit is "<<(temp*9/5)+32<<endl;
  return 0;
}
