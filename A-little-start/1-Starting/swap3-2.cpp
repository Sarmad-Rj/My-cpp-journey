#include <iostream>
using namespace std;
int main()
{
    int a , b, c;
    cout<<"a = ";
    cin>>a;
    cout<<"b = ";
    cin>>b;
    cout<<"c = ";
    cin>>c;
    a = a+b+c;
    b = a-b-c;
    c = a-b-c;
    a = a-b-c;
    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b<<endl;
    cout<<"c = "<<c<<endl;
}
