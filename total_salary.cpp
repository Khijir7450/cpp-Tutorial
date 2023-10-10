#include <iostream>

using namespace std;

int main(){

    int basic;
    cout<<"Enter basic salary-"<<endl;
    cin>>basic;

    char grade;
    cout<<"Enter grade(A/B/C)-"<<endl;
    cin>>grade;

    int allow;
    if(grade == 'A'){
        allow = 1700;
        
    }
    else if(grade == 'B'){
        allow = 1500;
       
    }
    else if(grade == 'C'){
        allow = 1300;
       
    }
    else{
        cout<<"you entered invalid grade";
    }

    float hra;
    hra = (20/100.00) * basic;

    float da;
    da = (50/100.00) * basic;

    float pf = (11/100.00) * basic;

    float total_salary;

    total_salary = basic + allow + hra + da - pf;

    cout<<"Basic - "<<basic<<endl;
    cout<<"Allow - "<<allow<<endl;
    cout<<"Hra - "<<hra<<endl;
    cout<<"DA - "<<da<<endl;
    cout<<"Pf - "<<pf<<endl;

    cout<< "Your total salary is - "<< total_salary;

    return 0;
}