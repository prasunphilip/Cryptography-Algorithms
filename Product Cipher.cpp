#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	int k,l,i,j,m,c=0,d=0;
	char s[50],a[50],b[50];
	cout<<"Enter the text : ";
	cin>>s;
	cout<<"Enter the key : ";
	cin>>k;
	l = strlen(s);
	for(i=0;i<l;i++)
	{
		m = (int)(s[i]);
		m = m + k;
		s[i] = char(m);
	}
	
	for(i=0;i<l;i++)
	{
		if(i%2 == 0)
		{
			a[c] = s[i];
			c++;	
		}
		else
		{
			b[d] = s[i];
			d++;
		}
	}
	
	cout<<"The Ciphered text is :\n"<<endl;
	for(i=0;i<c;i++)
		cout<<a[i];
	cout<<" ";
	for(i=0;i<d;i++)
		cout<<b[i];
		
	return 0;
}
