#include<iostream>
#include<string>
using namespace std;
int main ()
{
    string value;
    value="qwertyuiopasdfghjkl;zxcvbnm,./";

    string str;
    char dir;
    cin>>dir;
    cin>>str;

    for(int i=0;i<str.size();i++)
    {
        int index=value.find(str[i]);
        if(dir=='R')
        {
            cout<<value[index-1];
        }
        else
        {
            cout<<value[index+1];
        }

    }

}
