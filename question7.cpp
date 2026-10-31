#include<iostream>
using namespace std;
int main()
{
    /*
    7.	Write a program to enter the values of two variables
     'a' and 'b' from user and then check if atleast
     one of the conditions 'a < 50' and 'a < b' is true.
    */


      int a, b;
    cout << " Enter a value of a : ";
    cin >> a;
    
    cout << " Enter a value of b : ";
    cin >> b;
     if (a < 50||a < b)
    {
    
            cout << "a < b " << endl;
        
        cout << "a < 50 " << endl;
    }
return 0;

}