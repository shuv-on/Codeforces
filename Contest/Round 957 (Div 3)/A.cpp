#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int a,b,c;
        //s
        cin>>a>>b>>c;
        int arr[3]= {a,b,c};

        sort(arr,arr+3);
        int inc=5;

        while (inc>0)
        {
            arr[0]++;
            sort(arr,arr+3);
            inc--;
        }
        cout<<arr[0]*arr[1]*arr[2]<<"\n";
    }
    return 0;

}


