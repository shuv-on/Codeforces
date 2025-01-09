#include<bits/stdc++.h>
using namespace std;
int main ()
{
	string str;
	cin>>str;
	if(str[0]>='a'&&str[0]<='z')
	{
		cout<<str[0]-('a'-'A');
	}
	for (int i=1;i<str.size();i++)
	{
		cout<<str[i];
	}
	cout<<"\n";
	return 0;
}
