#include<iostream>
using namespace std;
int main()
{
    /*
    4.	Write a program that finds the value of X by using 
    given formula. Take value of ‘a’ and ‘b’ from
user.
X = 5ab ( a + b ) – 3ab

    */
    int a, b;
    cout << " Enter a value of a : ";
    cin >> a;
    
    cout << " Enter a value of b : ";
    cin >> b;
    cout << " x = " << 5 * a * b*(a + b) - 3 * a * b;

    return 0;
}