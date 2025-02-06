#include <iostream>
using namespace std;

int main() {

  // problem1
  cout << "Please input 5 numbers here with space between: ";
  int a,b,c,d,e;
  cin>>a>>b>>c>>d>>e;
  int sum = a+b+c+d+e+d;
  cout<<"Sum is "<<sum<<endl;

  // problem2
  cout<<"Input ID please: ";
  int id;
  cin>>id;
  cout<<"Please input your GPA: ";
  float gpa;
  cin>>gpa;
  cout<<"PLease input year of study: ";
  int year;
  cin>>year;
  cout<<"Please input study fee here: ";
  int study_fee;
  cin>>study_fee;
  cout<<"Student ID: "<<id<<endl<<"Student GPA: "<<gpa<<endl<<"Student year of study: "<<year<<endl<<"Student study fee: "<<study_fee<<"sums"<<endl;

  // problem3
  double celcius;
  cout << "Please enter the temperature in degrees Celcius: ";
  cin >> celcius;
  double fahrenheit;
  fahrenheit = (9/5 * celcius) + 32;
  cout << "The temperature in Celcius is: " << celcius << endl;
  cout << "The temperature in Fahrenheit is: " << fahrenheit << endl;

  // problem4
  float cost_per_item;
  cout << "Enter cost per item: ";
  cin >> cost_per_item;
  int items;
  cout << "Enter number of items: ";
  cin >> items;
  cout<<"You need to pay: $"<<items*cost_per_item<<endl;

  // problem5
  int father_age;
  cout << "Please enter your father's age: ";
  cin >> father_age;
  int mother_age;
  cout << "Please enter your mother's age: ";
  cin >> mother_age;
  int sistes_age;
  cout << "Please enter your sistes's age: ";
  cin >> sistes_age;
  int my_age;
  cout << "Please enter your age: ";
  cin >> my_age;
  cout << "The average age is " << (father_age + mother_age + sistes_age + my_age)/4 << endl;

  // problem6
  float length;
  cout << "Please enter the length of the rectangle: ";
  cin >> length;
  float width;
  cout << "Please enter the width of the rectangle: ";
  cin >> width;
  float area = length * width;
  float perimeter = 2 * length + 2 * width;
  cout << "The area of the rectangle is: " << area << endl;
  cout << "The perimeter of the rectangle is: " << perimeter << endl;

  // problem7
  int dividend;;
  int divisor;
  cout << "Enter dividend: ";
  cin >> dividend;
  cout << "Enter divisor: ";
  cin >> divisor;
  int quotient;
  float remainder;
  if (dividend > divisor) {
    quotient = dividend/divisor;
    remainder = dividend % divisor;
    cout <<"The quotient of the division: "<< quotient << endl;
    cout <<"The remainder of the quotient is: "<< remainder;
  }else {
    cout << divisor << " is greater than " <<dividend<<" ,therefore i am not programmed to do this"<< endl;
  }

  // problem8
  float usd_amount;
  cout << "Please enter the amount of usd: ";
  cin >> usd_amount;
  double exchange_rate;
  cout << "Please enter the amount of exchange rate: ";
  cin >> exchange_rate;
  int uzs_amount = usd_amount * exchange_rate;
  cout << "Amount in USD: "<<usd_amount<<endl<<"Exchange rate (1USD to UZS): "<<exchange_rate<<endl<<"The equivalent amount in UZS is: "<<uzs_amount<<endl;

  // problem9
  float radius;
  cout << "Enter the radius of the circle: ";
  cin >> radius;
  float area = 3.14 * radius * radius;
  cout << "The area of the circle is " << area << endl;

  // problem10
  float cylinder_radius;
  cout << "Enter the radius of the cylinder: ";
  cin >> cylinder_radius;
  float cylinder_height;
  cout << "Enter the height of the cylinder: ";
  cin >> cylinder_height;
  float volume = cylinder_radius * cylinder_height * cylinder_height * 3.14;
  cout << "The volume of the cylinder is: " << volume << endl;

  // problem11
  int distance = 450;
  int time = 2;
  float velocity_in_km = distance / time;
  float velocity_in_m = velocity_in_km * 0.62137;
  cout << "Distance: " << distance << endl;
  cout << "Time: " << time << endl;
  cout << "Velocity in km/hour: " << velocity_in_km << endl;
  cout << "Velocity in mile/hour: " << velocity_in_m << endl;

  // problem12
  int minutes;
  cout << "Enter minutes: ";
  cin >> minutes;
  int hours;
  int remaining_minutes;
  if (minutes >= 60) {
    hours = minutes / 60;
    remaining_minutes = minutes % 60;
    cout << hours <<" hours"<< ":" << remaining_minutes <<" minutes"<< endl;
  }else {
    cout << "Error occured: minuted should be bigger or equal to 60"<<endl;
    printf("Hello world");
  }

  // problem13
  int fixed_cost = 10000;
  int selling_price;
  cout << "Enter selling price per unit: ";
  cin >> selling_price;
  int varible_cost;
  cout << "Enter variable cost per unit: ";
  cin >> varible_cost;
  float bep = fixed_cost / (selling_price - varible_cost);
  cout << "Break-even point: " << bep << endl;

  // problem14
  float tax_rate;
  cout << "Please enter your tax rate: ";
  cin >> tax_rate;
  int salary;
  cout << "Please enter your salary: ";
  cin >> salary;
  float salary_after_tax = salary - (tax_rate/100)*salary;
  cout <<"Tax percantage: "<< tax_rate << endl <<"Core salary: " << salary << endl << "Salary after tax: "<< salary_after_tax << endl;

  // problem15
  float original_price;
  float discount;
  cout << "Please enter the price: ";
  cin >> original_price;
  cout << "Please enter the discount: ";
  cin >> discount;
  float discount_amount = original_price * (discount/100);
  float discount_price = original_price - discount_amount;
  cout << "Discount amount is: " << discount_amount << endl;
  cout << "Final price is: " << discount_price << endl;

  // problem16
  float gp1, gp2, gp3, gp4, gp5;
  cout << "Enter GPA with space between: ";
  cin >> gp1 >> gp2 >> gp3 >> gp4 >> gp5;
  int ch1, ch2, ch3, ch4, ch5;
  cout << "Enter Credit hours with space between: ";
  cin>>ch1>>ch2>>ch3>>ch4>>ch5;

  float weighted_gpa = ((gp1 * ch1) + (gp2 * ch2) + (gp3 * ch3) + (gp4 * ch4) + (gp5 * ch5)) / (ch1 + ch2 + ch3 + ch4 + ch5);
  cout << "Weighted GPA is: " << weighted_gpa << endl;

  // problem17
  float initial_price;
  cout << "Enter initial price: ";
  cin >> initial_price;
  float final_price;
  cout << "Enter final price: ";
  cin >> final_price;
  float inflation_rate = (final_price - initial_price) / initial_price;
  if (inflation_rate > 0) {
    cout << "Inflation rate: " << inflation_rate * 100 << "%" << endl;
  }else if (inflation_rate < 0) {
    cout << "Deflation rate: " << inflation_rate * 100 << "%" << endl;
  }

  // problem18
  int original_tuition;
  cout<<"Enter original tuition fee: ";
  cin>>original_tuition;
  float scholarship_rate;
  cout<<"Enter scholarship rate: ";
  cin>>scholarship_rate;
  double scholarship_amount = (scholarship_rate/100) * original_tuition;
  cout << "Scholarship amount: " << scholarship_amount << endl;
  double final_scholarship_amount= original_tuition - scholarship_amount;
  cout << "Final scholarship amount: " << final_scholarship_amount;

  // problem19
  int principal_amount;
  cout << "Enter amount of principal amount: ";
  cin >> principal_amount;
  float rate_of_interest;
  cout << "Enter rate of interest (%): ";
  cin >> rate_of_interest;
  int time;
  cout << "Enter time of interest: ";
  cin >> time;
  float simple_interest = (principal_amount * rate_of_interest * time) / 100;
  cout << "The simple interest is: " << simple_interest << endl;

  // problem20
  float principal_amount;
  cout << "Enter amount of principal amount: ";
  cin >> principal_amount;
  float annual_rate_of_interest;
  cout << "Enter annual rate of interest: ";
  cin >> annual_rate_of_interest;
  float amount_interest = principal_amount * (1 + annual_rate_of_interest / 100) * (1 + annual_rate_of_interest / 100);
  float compaund_interest = principal_amount - amount_interest;
  cout << "Principal amount is: " << principal_amount << endl;
  cout << "Annual rate of interest is: " << 2 * amount_interest << endl;
}

