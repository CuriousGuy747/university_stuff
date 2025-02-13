#include <iostream>
using namespace std;
int main() {

  // during lesson
  // cout << "Please enter two numbers" << endl;
  // int n1, n2;
  // cin >> n1 >> n2;
  //
  // while (true) {
  //   int main_choice;
  //   cout << "Choose the options \n1. Switch case\n2. Quit the loop" << endl;
  //   cin >> main_choice;
  //   int result;
  //   if (main_choice == 1) {
  //     int choice;
  //     cout << "Enter choice from 1 to 4:" << endl;
  //     cin >> choice;
  //     switch (choice) {
  //       case 1:
  //         result = n1 + n2;
  //         cout << result << endl;
  //       break;
  //       case 2:
  //         result = n1 - n2;
  //         cout << result << endl;
  //       break;
  //       case 3:
  //         result = n1 * n2;
  //         cout << result << endl;
  //       break;
  //       case 4:
  //         if (n2 == 0) {
  //           cout << "denominator can't be zero" << endl;
  //         }else {
  //           result = n1 / n2;
  //           cout << result << endl;
  //         }
  //       break;
  //       default:
  //         cout << "Are you stupid?!" << endl;
  //     }
  //   }
  //   else if (main_choice == 2) {
  //     break;
  //   }
  // }

  // problem1.1
  // for (int i = 1; i <=10; i++) {
  //   cout<< i<<endl;
  // }

  // problem1.2
  // cout << "Input n: " << endl;
  // int n;
  // cin >> n;
  // for (int i = 1; i <= n; i++) {
  //   cout << i << endl;
  // }

  // problem1.3
  // int result = 0;
  //
  // for (int i = 1; i <= 10; i++) {
  //   result = result + i;
  // }
  // cout << result << endl;

  // problem1.4
  // cout << "Input n: ";
  // int n;
  // cin >> n;
  // int result = 0;
  // for (int i = 1; i <= n; i++) {
  //   result = result + i;
  // }
  // cout << result << endl;

  // problem1.6
  // int n;
  // cout << "Enter a number: ";
  // cin >> n;
  // int average = 0;
  // int result = 0;;
  // for (int i = 1; i <= n; i++) {
  //   average += i;
  // }
  // result = average / n;
  // cout << "SUM = " << average << endl;
  // cout << "Average = " << result << endl;

  // problem2.1
  // for (int i = 1; i <=10; i+=2) {
  //
  //     cout<<i <<" ";
  // }

  // problem2.2
  // for (int i = 0; i <=10; i+=2) {
  //
  //     cout<<i <<" ";
  // }

  // problem2.3
  // int n;
  // cout << "Enter a number: ";
  // cin >> n;
  // for (int i = 1; i <=n; i+=2) {
  //
  //     cout<<i <<" ";
  // }

  // problem2.4
  // int n;
  // cout << "Enter a number: ";
  // cin >> n;
  // for (int i = 0; i <=n; i+=2) {
  //
  //   cout<<i <<" ";
  // }

  // problem2.5
  // for (int i = 10; i <=100; i+=10) {
  //   cout << i << endl;
  // }

  // problem2.6
  // int n;
  // cout << "Enter a number: ";
  // cin >> n;
  // for (int i = 10; i <=n; i+=10) {
  //   cout << i << endl;
  // }

  // problem3
  // for (int i = 65; i <= 95; i++) {
  //   cout << static_cast<char>(i) << " ";
  // }

  // problem4
  cout << "Enter a number: ";
  int number;
  cin >> number;
  int result = 1;
  if (number >=0) {
    for (int i = 1; i <= number; i++) {
      result = result * i;
    }
    cout << result << endl;
  }else {
    cout << "Number must be greater than 0" << endl;
  }

  // problem5

}