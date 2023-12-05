#include <iostream>

using namespace std;
/*
CSC 134
M1Lab- Apple Orchard
Viana Butler
8/28/23
*/

int main()
{
    //This program will simulate an apple orchard.
    //The owner's game
    string name = "Banana Loop";
    cout << "Welcome to " << name << " 's apple orchard." << endl;
    //variables
    //# of apples owned
    int apples = 100;
    //price per apple
    double pricePerApple = 0.25;



    //calculate the total price of apples.
    //Todo
    cout << "We have " << apples << " for sale." << endl;
    cout << "Cost is $" << pricePerApple <<  " each." << endl;
    double totalPrice = apples * pricePerApple;

    //print the total price
    cout <<"Total Price is " << totalPrice << endl;
    //Ask the user how many to buy

    //print all information about the orchard
    //Todo

    return 0;
}
