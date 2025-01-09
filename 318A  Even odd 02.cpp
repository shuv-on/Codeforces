#include<iostream>
using namespace std;

int main()
{
    long long int a, b;
    cin >> a >> b;


    long long int num_odds = (a + 1) / 2;

    if (b <= num_odds) {

        cout << 2 * b - 1 << "\n";
    } else {

       long long int even_index = b - num_odds;
        cout << 2 * even_index << "\n";
    }

    return 0;
}
