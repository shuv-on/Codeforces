#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
   string str,s="";
   cin>>str;
   for (int i=0;i<str.size();i++)
   {
       if(str[i]!='+')
       s+=str[i];
   }
   sort(s.begin(),s.end());
   cout<<s[0];
   for(int i=1;i<s.size();i++)
   {
       cout<<'+'<<s[i];
   }
   cout<<"\n";
   return 0;
}

