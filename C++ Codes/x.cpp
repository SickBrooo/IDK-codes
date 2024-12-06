#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;
int main()
{
    float Num1,Num2;
    cout<<"input Two integer number :"<<endl <<"then press enter:";
    cin>>Num1>>Num2;
    cout<<endl<<endl;

    float sum=Num1+Num2;
    cout<<setw(35)<<"the sum is ___"<<sum;cout<<endl;

    cout<<noshowpoint;

    float sub=Num1-Num2;
    cout<<setw(35)<<"the subtraction is ___"<<sub<<endl;

    cout<<showpoint;
    cout<<fixed;
    cout<<setprecision(10);
    float mul=Num1*Num2;
    cout<<setw(35)<<"the multiplication is ___"<<mul;
    cout<<endl;

    double div=(float)Num1/Num2;  //type casting
    cout<<setw(35)<<"the Division is ___"<<div;
    cout<<endl;

    //int rem=Num1/Num2;
    //cout<<"the remainder is___"<<rem;
    //cout<<endl;






    getch();
}
