#include<iostream>
using namespace std;
int main()
{
    /*
    
    5.	Write a program that takes two numbers from user and
     checks if the two numbers are equal or not by returning 
     1 or 0 respectively.
    */
    int n1, n2;
    cout << "Enter numebr 1: ";
    cin >> n1;
    cout << " Enter a number 2 : ";
    cin >> n2;
    if(n1==n2){
        cout << " 1";
    }else{
        cout << " 0 ";
    }
    return 0;
}