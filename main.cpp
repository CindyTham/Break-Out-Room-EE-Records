#include <iostream>
#include <string>
using namespace std;

// Employee Info Headings
class Employee{
  public:
  string name;
  int yearjoined;
  string salary;
  string address;
};

int main (){
  // Employee 01
  Employee empnum1;
  empnum1.name = "Robert";
  empnum1.yearjoined = 2018;
  empnum1.salary = "£25,000";
  empnum1.address = "64C London Street";
  
  // Employee 02
  Employee empnum2;
  empnum2.name = "Farah";
  empnum2.yearjoined = 2015;
  empnum2.salary = "£35,000";
  empnum2.address = "68D Bristol Road";

  // Employee 03
  Employee empnum3;
  empnum3.name = "Satinder";
  empnum3.yearjoined = 2019;
  empnum3.salary = "£32,500";
  empnum3.address = "26B Salt Street";

  // Print Info
  cout << "Employee Records";
  cout << "\n";

  // 01
  cout << "\nName: " << empnum1.name;
  cout << "\nYear Joined: " << empnum1.yearjoined;
  cout << "\nSalary: " << empnum1.salary;
  cout << "\nAddress: " << empnum1.address;
  cout << "\n";

  // 02
  cout << "\nName: " << empnum2.name;
  cout << "\nYear Joined: " << empnum2.yearjoined;
  cout << "\nSalary: " << empnum2.salary;
  cout << "\nAddress: " << empnum2.address;
  cout << "\n";

  // 03
  cout << "\nName: " << empnum3.name;
  cout << "\nYear Joined: " << empnum3.yearjoined;
   cout << "\nSalary: " << empnum3.salary;
  cout << "\nAddress: " << empnum3.address;
  cout << "\n";

  return 0;
}