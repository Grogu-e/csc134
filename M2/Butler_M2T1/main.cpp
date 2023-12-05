#include <iostream>
#include <iomanip>
using namespace std;
/*
CSC 134
M2T1- Receipt calculator
Viana Butler
9/6/2023
This is program should take the price of a meal, which is $5.99, and print out a simple text receipt.
It should include:
-The price before tax
-Tax amount of tax owned (8%)
-The total including tax
*/



int main()
{
    cout << "Receipt Calculator" << endl;
    //Todo: Ask the user the meal price


    //
    double meal_price = 5.99;
    double tax_percent = 0.07;// for Cumberland county. Its write as 0.07% perecent
    double tax_dollars= 0;// in dollars
    double total_price=0; //price including price


    //tax in $ is meal price times tax pct
    //then add the tax in $ to get the total $
    cout << "-------Customer Receipt--------"<< endl;
    cout << "Price:$"<< meal_price << endl;
    cout << "Tax is:$" << tax_percent << endl;


    cout << fixed << setprecision(2);

    //calculate your total
    tax_dollars= meal_price*tax_percent;
    total_price= meal_price + tax_dollars;

    //print receipt
    cout <<"--------------------------------"<< endl;
    cout <<"Total:$"<< total_price << endl;
    cout <<"Thank You for shopping with us!" << endl;
    return 0;
}
