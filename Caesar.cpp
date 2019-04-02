#include<iostream>
#include<string.h>
using namespace std;

int mono()
{
	int k,i,l,j;
	char s[50],d[50];
	char a[26] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
	char c[26] = {'Q','W','E','R','T','Y','U','I','O','P','A','S','D','F','G','H','J','K','L','Z','X','C','V','B','N','M'};
	cout<<"Enter the Text to be encrypted : ";
	cin>>s;
	l = strlen(s);
	for(i=0;i<l;i++)
	{
		for(j=0;j<26;j++)
		{
			if(s[i] == a[j])
			{
				d[i] = 	c[j];
				break;
			}
		}		
	}
	cout<<"The Cipher text is : ";
	for(i=0;i<l;i++)
		cout<<d[i];
}


int caesar()
{
	int k,i,l,m=0;
	char s[50],c[50];
	cout<<"Enter the Text to be encrypted : ";
	cin>>s;
	cout<<"Enter the key : ";
	cin>>k;
	l = strlen(s);
	for(i=0;i<l;i++)
	{
		m = (int)(s[i]);
		m = m + k;
		c[i] = char(m);
	}
	cout<<"The Ciper text is : ";
	for(i=0;i<l;i++)
	{
		cout<<c[i];
	}
	return 0;
}


int main()
{
	int c;
	cout<<"1.Caesar Cipher\n";
	cout<<"2.Monoalphabetic\n";
	cout<<"Enter your choice : ";
	cin>>c;
	switch(c)
	{
		case 1:
			caesar();
			break;
		case 2:
			mono();
			break;
		default:
			cout<<"Invalid Input";
	}
}



