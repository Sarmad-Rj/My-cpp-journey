#include <iostream>
using namespace std;
int main()
{
    int x;
    cout<<"Enter the number of rows for the pyramid: ";
    cin>>x;

    for (int a=1; a<=x; a++)
    {
    	cout<<a;
        for (int b=1; b<=2*x-1; b++)
        {
            if (b>=x-a+1 && b<=x+a-1)
            {
                cout<<" X";
            }
            else
            {
                cout<<"  ";
            }
        }
        cout << endl;
    }
}

