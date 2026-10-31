#include<iostream>
using namespace std;
int main()
{
    /*
    2.	Write a program that inputs a six-digit integer,
     separates the integer into its individual digits and
      prints the digits vertically using modulus operator. 
      For example, if the user types 953647, the program
       should print:
7
4
6
3
5
9

    */
    int integer;
    cout << "Enter a six digit integer : ";
    cin >> integer;
    while(integer>0)
    {
        cout << integer % 10;
        integer /= 10;
    }
    // cout << integer / 1000000 % 10<<endl;
    // cout << integer / 100000% 10<<endl;
    // cout << integer / 10000 % 10<<endl;
    // cout << integer / 1000% 10<<endl;
    // cout << integer / 100% 10<<endl;
    // cout << integer / 10 % 10<<endl;
    // cout << integer % 10<<endl;

    return 0;
}