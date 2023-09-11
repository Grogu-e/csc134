
#include <iostream>
#include <iomanip>
using namespace std;
/*
CSC 134
M2T2- Receipt calculator V2
Viana Butler
9/11/2023
This is program should take the price of a meal, which the user will entered.


The user should enter:
-The name of the food item
-Its price
-How many they want

The program will then print out a simple text receipt.
It should include:
-The price before tax
-Tax amount of tax owned (8%)
-The total including tax
*/



int main()
{
    //#set varables
    double menu_price = 0;
    double tax_percent = 0.07;// for Cumberland county. Its write as 0.07% perecent
    double item_price;
    int num_items;
    string item_name;



    double tax_dollars= 0;// in dollars
    double total_price=0; //price including price

    //1- greet user
    cout << "Welcome to T-Rex Grill's" << endl;
    //set varables
    //Todo: Ask the user the meal price



    //2- Ask the user for thier order
    cout << "What would you like today? " << endl;
    cin.ignore();
    getline(cin,item_name);

    cout <<  "What's the price on that item? " << endl;
    cin >> item_price;

    cout << "What the price on that item? " << endl;
    cin >> num_items;
    //you can put "(s)" or not
    cout << "How many " << item_name << "(s) do you want? " << endl;
    cin >> num_items;



    //3- Calculate the nemu price
    menu_price = num_items * item_price;

    //Todo: Ask the user the meal price


    //4 - Print the receipt
    cout << "-------Customer Receipt--------"<< endl;
    cout << "Price:$"<< menu_price << endl;
    cout << "Tax is:$" << tax_percent << endl;


    cout << fixed << setprecision(2);

    //calculate your total
    tax_dollars= menu_price*tax_percent; //in dollars
    total_price= menu_price + tax_dollars;// price including tax

    //print receipt
    cout <<"--------------------------------"<< endl;
    cout <<"Total:$"<< total_price << endl;
    cout <<"Thank You for shopping with us!" << endl;
    return 0;
}
