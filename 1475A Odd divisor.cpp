#include <iostream>
using namespace std;
int main()
{
    int c;
    cin >> c;
    while (c--) {
       unsigned long long number;
        cin >> number;


            while (!(number % 2) )
                number /=2;



            cout << (number == 1 ? "NO" : "yes")<< endl;

        }

        }

