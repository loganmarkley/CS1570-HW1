//Programmer: Logan Markley
//Student ID: 12579435
//MST Username: lcmkbc
//Instructor Name: San Yeung
//Section: 109
//Date: 2/4/22
//File: hw1 MARKLEY.cpp
//Purpose: Design a vending machine with C++ (HW 1)

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
  //---variable declaration---
  float money=0.0;  //this variable represents the users money.
  int schmapples=0; //these 5 variables represent how many times the user bought each item.
  int lightGrapes=0;
  int scentPizza=0;
  int heavyGrapes=0;
  int bananas=0;
  
  const int SCHMAPPLES_SLOT=1;   //these 5 constants represent the item's slot(location) in the vending machine.
  const int LIGHTGRAPES_SLOT=2;  //use these to see which product the user selects.
  const int SCENTPIZZA_SLOT=3;
  const int HEAVYGRAPES_SLOT=4;
  const int BANANAS_SLOT=5;
  
  const float SCHMAPPLES_PRICE=1.50;  //these 5 constants represent the item's price in the vending machine.
  const float LIGHTGRAPES_PRICE=1.00; //use these for calculations with the user's money.
  const float SCENTPIZZA_PRICE=0.50;
  const float HEAVYGRAPES_PRICE=1.25;
  const float BANANAS_PRICE=2.00;
    
  cout << fixed;    //these 2 lines of code are to output monetary values to 2 decimal places.
  cout << setprecision(2);
  
  
  
  //---machine coding---
  cout << "This is the Schmending Machine! How much money do you have? $";
  cin >> money;
  
  char contin = 'y';   //this variable is used to keep asking the user if they want more products.
  int select;          //this variable is used to see which item the user selected.
  while(contin == 'y')
  {
    cout << "Enter product selection (1-5): ";
    cin >> select;
    
    if(select == SCHMAPPLES_SLOT) //if they choose schmapple
    {
      if(money>=SCHMAPPLES_PRICE) //makes sure they have enough money
      {
        schmapples++;
        money=money-SCHMAPPLES_PRICE;
        cout << "Purchased: Schmapple";
      }
      else  //does not purchase if they don't have enough money
        cout << "Not enough funds!";
    }
    if(select == LIGHTGRAPES_SLOT) //if they choose lightly used grape
    {
      if(money>=LIGHTGRAPES_PRICE)
      {
        lightGrapes++;
        money=money-LIGHTGRAPES_PRICE;
        cout << "Purchased: Lightly Used Grape";
      }
      else
        cout << "Not enough funds!";
    }
    if(select == SCENTPIZZA_SLOT) //if they choose scent of a pizza
    {
      if(money>=SCENTPIZZA_PRICE)
      {
        scentPizza++;
        money=money-SCENTPIZZA_PRICE;
        cout << "Purchased: Scent of a Pizza";
      }
      else
        cout << "Not enough funds!";
    }
    if(select == HEAVYGRAPES_SLOT) //if they choose heavily used grape
    {
      if(money>=HEAVYGRAPES_PRICE)
      {
        heavyGrapes++;
        money=money-HEAVYGRAPES_PRICE;
        cout << "Purchased: Heavily Used Grape";
      }
      else
        cout << "Not enough funds!";
    }
    if(select == BANANAS_SLOT) //if they choose banana
    {
      if(money>=BANANAS_PRICE)
      {
        bananas++;
        money=money-BANANAS_PRICE;
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
