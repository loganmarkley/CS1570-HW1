 
//Programmer: Logan Markley
//Student ID: 12579435
//MST Username: lcmkbc
//Instructor Name: San Yeung
//Section: 109
//Date: 2/1/22
//File: hw1_MARKLEY.cpp
//Purpose: Design a vending machine with C++ (HW 1)

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
  float money=0.0;  //this variable represents the users money
  int schmapples=0; //these 5 variables represent how many times the user bought each item
  int lightGrapes=0;
  int scentPizza=0;
  int heavyGrapes=0;
  int bananas=0;
    
  cout << fixed;    //these 2 lines of code are to output monetary values to 2 decimal places.
  cout << setprecision(2);
  
  
  
  cout << "This is the Schmending Machine! How much money do you have? $";
  cin >> money;
  
  char contin = 'y';   //this variable is used to keep asking the user if they want more products
  int select;     //this variable is used to see which item the user selected
  while(contin == 'y')
  {
    cout << "Enter product selection (1-5): ";
    cin >> select;
    
    if(select == 1) //if they choose schmapple
    {
      if(money>=1.50) //makes sure they have enough money
      {
        schmapples++;
        money=money-1.50;
        cout << "Purchased: Schmapple";
      }
      else  //does not purchase if they don't have enough money
        cout << "Not enough funds!";
    }
    if(select == 2) //if they choose lightly used grape
    {
      if(money>=1.00)
      {
        lightGrapes++;
        money=money-1.00;
        cout << "Purchased: Lightly Used Grape";
      }
      else
        cout << "Not enough funds!";
    }
    if(select == 3) //if they choose scent of a pizza
    {
      if(money>=0.50)
      {
        scentPizza++;
        money=money-0.50;
        cout << "Purchased: Scent of a Pizza";
      }
      else
        cout << "Not enough funds!";
    }
    if(select == 4) //if they choose heavily used grape
    {
      if(money>=1.25)
      {
        heavyGrapes++;
        money=money-1.25;
        cout << "Purchased: Heavily Used Grape";
      }
      else
        cout << "Not enough funds!";
    }
    if(select == 5) //if they choose banana
    {
      if(money>=2.00)
      {
        bananas++;
        money=money-2.00;
        cout << "Purchased: Banana?";
      }
      else
        cout << "Not enough funds!";
    }
    
    cout <<endl<< "Keep purchasing? (y/n): ";   //asks if they want to continue purchasing and updates the contin variable to either stay in the while loop or exit
    cin >> contin;
  }
  
  cout <<endl<< "You purchased:";  //this section of code is to output how many of each item the customer bought
  if(schmapples>0)
    cout <<endl<< "Schmapple - " << schmapples;
  if(lightGrapes>0)
    cout <<endl<< "Lightly Used Grape - " << lightGrapes;
  if(scentPizza>0)
    cout <<endl<< "Scent of a Pizza - " << scentPizza;
  if(heavyGrapes>0)
    cout <<endl<< "Heavily Used Grape - " << heavyGrapes;    
  if(bananas>0)
    cout <<endl<< "Banana? - " << bananas;
    
  cout <<endl<<endl<< "You have $" <<money<< " remaining. Have a Schmealthy day!";  //outputs their money and exits the program
  
  return 0;
}
