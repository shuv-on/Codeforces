#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str,new_str;
    cin>>str;
    char c;
    for(int i=0;i<str.size();i++){
        c=str[i];
        new_str+=tolower(c);
    }
    for(int i=0;i<new_str.size();i++){
        if(new_str[i]=='a'||new_str[i]=='e'||new_str[i]=='i'||new_str[i]=='o'||new_str[i]=='u'||new_str[i]=='y')
        {
            new_str.erase(i,1);
            i--;
        }

    }
    for(int i=0;i<new_str.size();i++){
        cout<<"."<<new_str[i];
    }
}
