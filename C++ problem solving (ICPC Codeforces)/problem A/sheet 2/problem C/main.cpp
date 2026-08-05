#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int positivecounter = 0;
    int negativecounter = 0;
    int evencounter = 0;
    int oddcounter = 0;

    int number;

    for(int x = 1; x <= n; x++)
    {
        cin >> number;

        if(number > 0)
            positivecounter++;
        else if(number < 0)
            negativecounter++;

        if(number % 2 == 0)
            evencounter++;
        else
            oddcounter++;
    }

    cout << "Even: "<<evencounter<<endl;
    cout<<"Odd: "<<oddcounter<<endl;
    cout<<"Positive: "<<positivecounter<<endl;
    cout<<"Negative: "<<negativecounter<<endl;


    return 0;
}
