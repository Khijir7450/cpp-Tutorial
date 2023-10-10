#include <iostream>

using namespace std;

int main()
{
    int a, b;

    cout << "Enter two Number ";
    cin >> a >> b;
/*
    if(a==b){
        cout<<"EQUAL";
    }
    else if(a>b){
        cout<<"a grater then b";
    }
    else{
        cout<<"a less then b";
    }
*/
    if (a == b)
    {
        cout << "EQUAL";
    }
    else
    {
        if (a > b)
        {
            cout << "a grater then b";
        }
        else
        {
            cout << "a less then b";
        }
    }

    return 0;
}