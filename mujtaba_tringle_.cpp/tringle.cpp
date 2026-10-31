#include<iostream>
using namespace std;
int main()
{
    /*
         1
       1 2
     1 2 3
   1 2 3 4    
    */
    for (int i = 1; i < 5;i++)
    {
        for (int j = 5-i; j >= 1;j--){
            cout << " ";
        }
        for (int k = 1; k <= i;k++){
            cout << k;
        }
        cout <<endl;
    }

    return 0;
}