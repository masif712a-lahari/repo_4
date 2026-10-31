#include<iostream>
using namespace std;
int main()
{
    cout << "Enter marks of one subject(out of 100) : ";

    float marks;
    cin >> marks;
/*
Marks	CGPA
93 (or above)	4.00
87 to 92	3.67
82 to 86	3.33
77 to 81	3.00
72 to 76	2.67
68 to 71	2.30
64 to 67	2.00
60 to 63	1.67
0 to 59	0.00
*/
    cout << " CGPA : ";
    if (marks>=93)
    {
        cout << "4.00";
    }else if(marks>=87&&marks<=92){
        cout << "3.67";
    }else if(marks>=82&&marks<=86){
        cout << "3.33";
    }else if(marks>=77&&marks<=81){
        cout << "3.00";
    }else if(marks>=72&&marks<=76){
        cout << "2.67";
    }else if(marks>=68&&marks<=71){
        cout << "2.30";
    }else if(marks>=64&&marks<=67){
        cout << "2.00";
    }else if(marks>=60&&marks<=63){
        cout << "1.63";
    }
    



    return 0;
}