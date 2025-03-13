#include <iostream>
using namespace std;

//problem1
int multiply(int a, int b){
  if (a == 0 || b == 0){
    return 0;
  }
  if (a < 0 && b < 0) return -a + multiply(a, b + 1 );
  if (b > 0 && a > 0) return a + multiply(a, b - 1);
  if (a < 0) return a + multiply(a, b - 1);
  if (b < 0) return a + multiply(a, b + 1);
  return -multiply(a,-b);
}

// problem2
int factorial(int a) {
  if (a == 0) {
    return 1;
  }

  return a * factorial(a-1);
}

// problem3
int fibonacci(int a) {
  if (a == 0) {
    return 0;
  }else if (a==1) {
    return 1;
  }

  return fibonacci(a-1) + fibonacci(a-2);
}

// problem4
int sum(int n) {
  if (n == 0) {
    return 0;
  }

  return  n + sum(n-1);
}

// problem5
int print_desc(int a) {
  if (a == 0) {
    return 0;
  }
  cout << a << " ";
  return print_desc(a-1);
}

// problem6
int count_digits(int num) {
  if (num == 0) {
    return 0;
  }
  return 1+count_digits(num/10);
}
// 100 10 1
// 1 + 1 + 1

// problem7
int compute_sum(int a) {
  if (a == 0) {
    return 0;
  }
  return a%10 + compute_sum(a/10);
}

// problem8
int calculate_power(int a, int b) {
  if (b == 0) {
    return 1;
  }

  return a * calculate_power(a, b-1);
}

// problem9
int reverse_num(int a) {
  if (a == 0) {
    return 0;
  }

  cout << a%10 <<"";
  return reverse_num(a/10);


}
int main(){
  // problem1
  // int a, b;
  // cout << "Enter the numbers please: ";
  // cin >> a >> b;
  // cout<< multiply(a, b) << endl;

  // problem2
  // int num;
  // cout << "Enter the number to find its factorial please: ";
  // cin >> num;
  // cout << factorial(num) << endl;

  // problem3
  // cout << "Enter the fibonacci nth number please: ";
  // int number;
  // cin >> number;
  // cout << "Fibonacci nth number: "<<fibonacci(number) << endl;

  // problem4
  // int nummy;
  // cout << "Enter the nunmber of natural integers to sum please: ";
  // cin >> nummy;
  // cout << "the sum of "<<nummy<<" amount of numbers is " << sum(nummy)<<endl;

  // problem5
  // int n;
  // cout << "Please input a int: ";
  // cin >> n;
  // cout << print_desc(n) << endl;

  // problem6
  // int numb1;
  // cout << "Input number: ";
  // cin >> numb1;
  // cout << count_digits(numb1)<<endl;

  // problem7
  // int numnum;
  // cout << "Please input a int: ";
  // cin >> numnum;
  // cout << compute_sum(numnum) << endl;

  // problem8
  // int a1, b1;
  // cout << "Enter a, b: ";
  // cin >> a1;
  // cin >> b1;
  // cout << calculate_power(a1, b1) << endl;

  // problem9
  cout << reverse_num(123) << endl;
}