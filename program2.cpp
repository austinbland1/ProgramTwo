#include <iostream>
using namespace std;



int main()

{
   string name, placeoforigin;
   int age, cvc2;
   float amount;


  cout << ("Hello, what is your name?") << endl;
  cin >> name; 

  cout << "Hello, " << name << "!" << endl;
  cout << "Where are you from " << name << "?" << endl;
  cin >> placeoforigin;
  cout << placeoforigin << " is a nice place." << endl;
  cout << "How old are you, " << name << " from " << placeoforigin << endl;

  cin >> age;
  cout << name << " is " << age << " years old." << endl;
  cout << "What is your CVC2, " << name << "?" << endl;
  cin >> cvc2;
  cout << "Wow thanks, what a gift!" << endl;
  cout << "Now just for fun, how much do you want to deposit to me?" << endl;
  cin >> amount;
  cout << "Thank you for depositing " << "$" << amount << " to me." << endl;


  return 0;
}