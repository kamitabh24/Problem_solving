#include<iostream>
using namespace std;

void reverse(string str,int s,int e)
{
	while(s<=e)
	{
	swap(str[s],str[e]);
	s++;
	e--;
    }
	cout<<str<<endl;
}

int main()
{
	string name="SUBHAM";
	int len=name.length();
	reverse(name,0,len-1);
	return 0;
}
