#include <iostream>
using namespace std;

// for problem1
int currentBill(int quantity, int price) {
  return quantity* price;
}

// for problem2
int calculateFine(int hours, int fine) {
  return hours * fine;
}
// for problem4
int calculateSum(int price, int quantity) {
  return price * quantity;
}
bool hasUpper = false;
bool hasLower = false;
bool hasDigit = false;
bool hasSpecial = false;
bool checkPassword(string password) {
  for (char ch : password) {
    if (isupper(ch)) {
      hasUpper = true;
    }else if(islower(ch)) {
      hasLower = true;
    }else if(isdigit(ch)) {
      hasDigit = true;
    }else if (isalnum(ch)) {
      hasSpecial = true;
    }
  }
  return hasUpper && hasLower && hasDigit && hasSpecial;
}


int main() {
  // problem1
  // int totalSum=0;
  // int ask;
  // int quantity=0;
  // do {
  //   int price=0;
  //   int currenctP=0;
  //   cout<<"\n-----Please choose from menu-----\n";
  //   cout<< "\n1. Pizza - $5";
  //   cout << "\n2. Burger - 6$";
  //   cout << "\n3. Soda - $3";
  //   cout << "\n4. Sandwich - $5";
  //   cout << "\n5. Combo SET - $17";
  //   cout<< "\n6. Quit? WHY???";
  //   cout<<"\nPlease enter your choice: ";
  //   cin>>ask;
  //   switch (ask) {
  //     case 1:
  //       price=5;
  //       cout<<"\nPlease enter quantity: ";
  //       cin>>quantity;
  //       currenctP=currentBill(quantity,price);
  //     cout << "Current: $"<<currenctP << endl;
  //       totalSum=totalSum+currenctP;
  //       break;
  //     case 2:
  //       price=6;
  //       cout<<"\nPlease enter quantity: ";
  //       cin>>quantity;
  //       currenctP=currentBill(quantity,price);
  //     cout << "Current: $"<<currenctP << endl;
  //     totalSum=totalSum+currenctP;
  //     break;
  //     case 3:
  //       price=3;
  //       cout<<"\nPlease enter quantity: ";
  //       cin>>quantity;
  //       currenctP=currentBill(quantity,price);
  //     cout << "Current: $"<<currenctP << endl;
  //     totalSum=totalSum+currenctP;
  //     break;
  //     case 4:
  //       price=5;
  //       cout<<"\nPlease enter quantity: ";
  //       cin>>quantity;
  //       currenctP=currentBill(quantity,price);
  //     cout << "Current: $"<<currenctP << endl;
  //     totalSum=totalSum+currenctP;
  //     break;
  //     case 5:
  //       price=17;
  //       cout<<"\nPlease enter quantity: ";
  //       cin>>quantity;
  //       currenctP=currentBill(quantity,price);
  //     cout << "Current: $"<<currenctP << endl;
  //     totalSum=totalSum+currenctP;
  //     break;
  //   }
  //   cout << "Total sum: $"<< totalSum;
  // }while (ask != 6);


  // problem2
  // int hours_parked = 0;
  // int fine = 0;
  // while (true) {
  //   cout << "\nHow many hours did you park: ";
  //   cin >> hours_parked;
  //   if (hours_parked >= 3 and hours_parked <= 5) {
  //     fine = 2;
  //     hours_parked = hours_parked - 2;
  //     cout << "\nFee for hour: $"<<fine;
  //     cout<< "\nFee: "<<calculateFine(hours_parked, fine);
  //   }else if (hours_parked >= 6) {
  //     fine = 5;
  //     hours_parked = hours_parked - 2;
  //     cout << "\nFee for hour: $"<<fine;
  //     cout<< "\nFee: "<<calculateFine(hours_parked, fine);
  //   }else if (hours_parked <=2) {
  //     cout << "No fee. GET OUT!!!";
  //   }
  // }

  // problem3
  // int balance = 500;
  // int ask;
  // do {
  //   int amount = 0;
  //   cout << "\n-----Bank Account-----" << endl;
  //   cout <<"\n1. Deposit";
  //   cout <<"\n2. Withdraw";
  //   cout <<"\n3. Check Balance";
  //   cout <<"\n4. Exit";
  //   cout <<"\nEnter your choice: ";
  //   cin >> ask;
  //   switch (ask) {
  //     case 1:
  //       cout <<"\nEnter Amount: ";
  //       cin >> amount;
  //       balance += amount;
  //     break;
  //     case 2:
  //       cout <<"\nEnter Amount: ";
  //       cin >> amount;
  //       if (amount > balance) {
  //         cout << "\nInsufficient funds";
  //       }else {
  //         balance -= amount;
  //       }
  //     break;
  //     case 3:
  //       cout << "\nCurrent balance: $"<<balance<< endl;
  //     break;
  //   }
  // }while (ask != 4);



  // problem4
  // int ask;
  // int totalSum = 0;
  // do {
  //   int quantity = 0, price = 0;
  //   cout << "\n-----Choose Movie-----" << endl;
  //   cout << "1. Movie A - $120" << endl;
  //   cout << "2. Movie B - $20" << endl;
  //   cout << "3. Movie C - $70" << endl;
  //   cout << "4. Quit" << endl;
  //   cout << "Enter your choice: ";
  //   cin >> ask;
  //   switch (ask) {
  //     case 1:
  //       price  = 120;
  //       cout << "Choose quantity: ";
  //       cin >> quantity;
  //       cout << "total price: " << calculateSum(price, quantity) << endl;
  //       totalSum = totalSum + calculateSum(price, quantity);
  //     break;
  //     case 2:
  //       price  = 20;
  //       cout << "Choose quantity: ";
  //       cin >> quantity;
  //       cout << "total price: " << calculateSum(price, quantity) << endl;
  //       totalSum = totalSum + calculateSum(price, quantity);
  //     break;
  //     case 3:
  //       price  = 70;
  //       cout << "Choose quantity: ";
  //       cin >> quantity;
  //       cout << "total price: " << calculateSum(price, quantity) << endl;
  //       totalSum = totalSum + calculateSum(price, quantity);
  //     break;
  //   }
  //   cout<<"Total: $"<< totalSum << endl;
  // }while (ask != 4);



  // problem5
  //   int totalSum = 0;
  //   int choice;
  //   do {
  //     int price;
  //     int quantity = 0;
  //     cout << "\n-----Choose train-----" << endl;
  //     cout << "1. Train X - $120" << endl;
  //     cout << "2. Train Y - $80" << endl;
  //     cout << "3. Train Z - $150" << endl;
  //     cout << "4. Quit" << endl;
  //     cout << "Enter your choice: ";
  //     cin >> choice;
  //     switch (choice) {
  //       case 1:
  //         price = 120;
  //         cout << "Enter quantity: ";
  //         cin >> quantity;
  //         cout << "Current price: $" << calculateSum(price, quantity) << endl;
  //         totalSum += calculateSum(price, quantity);
  //       break;
  //       case 2:
  //         price = 80;
  //         cout << "Enter quantity: ";
  //         cin >> quantity;
  //         cout << "Current price: $" << calculateSum(price, quantity) << endl;
  //         totalSum += calculateSum(price, quantity);
  //       break;
  //       case 3:
  //         price = 150;
  //         cout << "Enter quantity: ";
  //         cin >> quantity;
  //         cout << "Current price: $" << calculateSum(price, quantity) << endl;
  //         totalSum += calculateSum(price, quantity);
  //       break;
  //     }
  //     cout << "Total price: $" << totalSum << endl;
  //   }while (choice != 4);


  // problem6
    string password;
    cout << "Enter password: ";
    cin >> password;
    if (password.length() <= 8) {
      cout << "Password is too short" << endl;
    }else {
      if (checkPassword(password)) {
        cout << "Strong Password" << endl;
      }else if (!hasUpper) {
        cout << "Password should have at least one uppercase" << endl;
      }else if (!hasLower) {
        cout << "Password should have at least one lowercase" << endl;
      }else if (!hasDigit) {
        cout << "Password should have at least one digit" << endl;
      }else if (!hasSpecial) {
        cout << "Password should have at least one special" << endl;
      }
    }

  // problem7

  }


