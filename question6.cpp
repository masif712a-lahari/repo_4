#include <iostream>
using namespace std;
int main()
{
    /*
    6.	Write a program to enter the values of two variables
    'a' and 'b' from user and then check if
     both the conditions 'a < 50' and 'a < b' are true.
    */
    int a, b;
    cout << " Enter a value of a : ";
    cin >> a;

    cout << " Enter a value of b : ";
    cin >> b;
    if (a < 50)
    {
        if (a < b)
        {
            cout << "a < b " << endl;
        }
        cout << "a < 50 " << endl;
    }
    return 0;
}