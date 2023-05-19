#include<iostream>
#include<string>
#include<conio.h>
using namespace std;

void DisplayPurpose();
int GetIntegers();
int AddIntegers(int, int); //function prototypes
void DisplayAnswer(int);

int main()
{
    int x, y = 0;
    DisplayPurpose(); //function call, no arguments no returns
    x = GetIntegers(); //function call with return value
    y = GetIntegers(); //function call with return value
    int answer = AddIntegers(x, y); // x & y are arguments - values sent to paramenter variables of a function
    DisplayAnswer(answer); // answer is the only argument - value sent to parameter variable of a function
}
void DisplayPurpose() //no return, no parameters
{
    cout << "This program adds two integers " << endl;
    cout << endl;
    cout << endl;
}
int GetIntegers() //int return, no parameters
{
    int num;
    cout << "Please enter an integer" << endl;
    cin  >> num;
    return num;
}
int AddIntegers(int a, int b) // int return & 2 int parameters
{
    int sum = a + b;
    return sum;
}
void DisplayAnswer(int s) // no return, 1 parameter
{
    cout << "The sum is: " << s << endl;
}