#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    double height,width,area,radius,areacircle;
    cout<<"To find out Area of rectangle" <<endl;
    cout<<"enter Height";
    cin>>height;

    cout<<"Enter width";
    cin>>width;

     area=height*width;
    std::cout<<area<<endl;

     cout<<"to find out area of a circle" <<endl;
     cout<<"enter Radius";
     cin>>radius;
     areacircle=3.1416*radius*radius;
     cout<<areacircle;

    getch();
}
