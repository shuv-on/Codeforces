#include<bits/stdc++.h>
using namespace std;
int main ()
{
	string str;
	cin>>str;
	if(str[0]>=97&&str[0]<=122)
	{
		cout<<97-str[0];
	}
	for (int i=1;i<str.size();i++)
	{
		cout<<str[i];
	}
	cout<<"\n";
	return 0;
}