#include <iostream>

using namespace std;
int main() {
  cout<<"Hello World!\n"<<endl;
  var int a;
  const int b = 13;

  //some code here
  // cout - console output
  // cin - console input
  cin>>a;
    cout<< a + b <<endl;

  int age;
  cout <<"Enter your age, please: "<<endl;
  cin >> age;
  if(age>=18) {
    cout<<"You can do some legal stuff"<<endl;
  }else if(age<=10) {
    cout<<"Sit at home, kid"<<endl;
  }
  cout << "Your age is: "<<age<<endl;
  return 0;
  }

