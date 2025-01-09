#include<iostream>
#include<string>
using namespace std;
int main ()
{
    int t,sum=0;
    cin>>t;
    while(t--)
    {
        string str;
        cin>>str;
        if (str=="Tetrahedron")
        {
            sum+=4;
        }
        else if (str=="Cube")
        {
            sum+=6;
        }
        else if (str=="Octahedron")
        {
            sum+=8;
        }
        else if (str=="Dodecahedron")
        {
            sum+=12;
        }
        else if (str=="Icosahedron")
        {
            sum+=20;
        }

    }
    cout<<sum<<"\n";
    return 0;
}
