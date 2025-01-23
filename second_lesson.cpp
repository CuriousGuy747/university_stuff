# include <iostream>
#include <iomanip>
using namespace std;
int main() {

  // problem1
  // string name;
  // int age;
  //
  // cout<<"Please input your name: ";
  // cin>>name;
  //
  // cout<<"Please input your age: ";;
  // cin>>age;
  //
  // cout<<"Welcome "<<name<< " your age is "<<age<<endl;

  // problem2
  // for (int i = 1; i <= 5; ++i) {
  //   std::cout << std::right << std::setw(5) << i;
  // }

  // problem3
  // int a;
  // int b;
  // cout<<"Enter a number for a: ";
  // cin>>a;
  //
  // cout<<"Enter a number for b: ";
  // cin>>b;
  // int c = a;
  // a =b;
  // b = c;
  // cout<<"Number a: "<<a<< " Number b: "<<b<<endl;

  // problem4
  int main_int;
  cout << "Enter limiting number: ";
  cin>> main_int;

  for (int i = 1; i<=main_int; ++i) {
    std::cout<<setw(10)<<i<< std::setw(10) << i*i << std::endl;
  }

  // problem5
  // string text;
  // cout<<"Enter text: ";
  // cin>>text;
  // int padding = (50 - text.length()) / 2;
  //
  // std::cout<<std::setw(padding + text.length())<<text<<std::setw(padding + text.length())<<std::endl;
}
