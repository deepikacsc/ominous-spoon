#include <iostream>
using namespace std;
int main(void)
{
    int x,y;
    cout<<"What's x?";
    cin>>x;
    cout<<"What's y?";
    cin>>y;
    if(x<y)
    {
        cout<<"x is less than y\n";
    }
    else if(x>y)
    {
        cout<<"x is greater than y\n";
    }
    else
    {
        cout<<"x is equal to y\n"; 
    }
}
