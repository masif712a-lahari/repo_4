#include<iostream>
using namespace std;
int main()
{
    /*
    3.	Write a program to convert Fahrenheit into Celsius.

𝟓
 
𝑪 =
 
  ( 𝑭 − 𝟑𝟐)
𝟗

    */
    float Frinhite, celcius;
    cout << "Enter a Frinhite : ";
    cin >> Frinhite;
    celcius = (Frinhite - 32) * 5 / 9;
    cout << " Equalence Ceclius : " << celcius << " C` ";
    return 0;
}