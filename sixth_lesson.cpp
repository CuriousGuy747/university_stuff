#include <iostream>
using namespace std;
int main() {
//    problem1
    // for (int i = 0; i <= 100; i++){
    //   cout<< i << endl;
    // }
    // int n = 0, i = 0;
    // cout << "Enter n please: ";
    // cin >> n;
    // while (i <= n) {
    //     cout<< i << endl;
    //     i++;
    // }

    // problem2
   // int count = 0, num = 2;
    // cout << "First 10 prime nums" <<endl;
    // for (; count < 10; num++) {
    //     bool isPrime = true;
    //     for (int i = 2; i*i <=num; i++) {
    //         if (num % i == 0) {
    //             isPrime = false;
    //             break;
    //         }
    //
    //     }
    //     if (isPrime) {
    //         cout << num << endl;
    //         count++;
    //     }
    // }

    // int n ;
    // cout << "Enter n: ";
    // cin >> n;
    // while ( count < n ) {
    //     bool isPrime = true;
    //     for (int i = 2; i *i <= n; i++) {
    //         if ( n % i == 0) {
    //             isPrime = false;
    //             break;
    //         }
    //     }
    //     if ( isPrime == true ) {
    //         cout << n << " is a prime number." << endl;
    //         count++;
    //     }
    //     num ++;
    // }

    // problem3
    // int col_num = 0;
    // cout<<"Please input collatz: ";
    // cin>>col_num;
    // while (col_num != 1) {
    //     if (col_num % 2 == 0) {
    //         col_num = col_num / 2;
    //         cout<<col_num<<endl;
    //     }else if (col_num % 2 == 1) {
    //         col_num = 3 * col_num + 1;
    //         cout<<col_num<<endl;
    //     }
    // }

    // problem4
    int nummy = 0;
    cout<<"Please input number: ";
    cin>>nummy;
    int counter = 0;
    while (nummy > 0 ) {
        nummy = nummy/10;
        counter++;
    }
    cout << counter << endl;

    // problem5
    // int num_num = 0;
    // cout<<"Please input number: ";
    // cin>>num_num;
    // int reverse;
    // while (num_num > 0 ) {
    //     reverse = num_num % 10;
    //     cout << reverse << " ";
    //     num_num = num_num / 10;
    // }

    // problem6
    // int num1 = 0, num2 = 0;
    // cout<<"Please input num1 num2: ";
    // cin >> num1;
    // cin >> num2;
    // while (num1 != 0 && num2 != 0) {
    //     if (num1 == 0)
    //         return num2;
    //     return num2 % num1, num1;
    // }
}