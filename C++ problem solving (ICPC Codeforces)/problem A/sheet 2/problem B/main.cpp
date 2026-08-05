#include <iostream>

using namespace std;

int main()
{
    int n;cin >>n;
    for (int x=1;x<= n;x++)
    {
        if  (n==1)
            cout<<-1<<endl;
        if (x%2==0)
            cout<<x<<endl;

    }
    return 0;
}
