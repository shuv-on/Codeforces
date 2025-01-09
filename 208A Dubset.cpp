#include<iostream>
#include<string>
using namespace std;
int main ()
{
    string str;
    cin>>str;

    string to_remove = "WUB";
    size_t pos;

    while((pos=str.find(to_remove)) !=std::string::npos)
    {
        str.replace(pos,to_remove.length(), " ");

    }
    cout<<str<<"\n";
}
