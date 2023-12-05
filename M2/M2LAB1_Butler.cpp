#include <iostream>
#include <string>
#include <iomanip> 
using namespace std;


/* 
M2LAB1
  viana Butler


*/

int main() {
  //Creating Constants for the cost and amount charged.
  const double COST_PER_CUBIT_FOOT = 0.25;
  const double CHARGE_PER_CUBIT_FOOT = 0.50;

  //Creating variables : legths, width, height, volume of the create, cost to build the creat, charge for the creat and profit made on the create

  double length, width,height, volume,cost,charge,profit;


  //Setting the desired output
  cout << setprecision(2) << fixed << showpoint;


 //Promping the user for input
  cout << "Enter the demensions " << endl;
  cout << "Length: " << endl;
  cin >> length;
  cout << "Width: " << endl;
  cin >> width;
  cout << "Height: " << endl;
  cin >> height;


  //CALCULATE the create's volume, the cost to produce it, charge the customer and profit.

  volume = length * width * height;
  cost = volume * COST_PER_CUBIT_FOOT;
charge = volume * CHARGE_PER_CUBIT_FOOT;
  profit = charge - cost;


  //Display the calculations



  cout >> "The volume of the create is: ";
  cout << volume << " cubic feet.\n" << endl;
  
  
  
}