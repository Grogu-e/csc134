#include <iostream>

using namespace std;

/*
M5T2 -void functions and value returning functios
csc 134
viana butler
10/31/23

*/

//list all functions here
int square(int);
int add(int, int);
void print_answer_line(int num,int num_squared);


int main()
{
    cout << "M5T2: Using Multiple  Funcitons" << endl;
    int num = 4;
    cout << num<< " Squared is " << square(num) << endl;
    cout << "2+3= " << add(2,3) << endl;

    //
    cout << "Number\tSquared" << endl;
    for (int num=1; num <= 10; num++){
       print_answer_line(num,square(num));
    }


}
//write the functions here

//a square() funtion that takes an int and returns the square of that int
int square(int num) {
    int answer = num * num;
    return answer;

}
//add () takes two ints, returns the sum
int add(int first, int second){
    int answer = first + second;
    return answer;
}
void print_answer_line(int num,int num_squared)
{
    cout << num << "\t\t" << num_squared << endl;
}
