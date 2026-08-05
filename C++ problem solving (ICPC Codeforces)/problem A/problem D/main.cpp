#include <iostream>

using namespace std;

int main()
{
    long long A, C;
    long long B, D;

    cin >> A >> B >> C >> D;

    long long x = (A * B) - (C * D);

    cout << "Difference = " << x << endl;

    return 0;
}
