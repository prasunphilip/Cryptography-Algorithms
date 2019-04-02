#include <iostream>
#include<string.h>
#include <ctype.h>
using namespace std;
int main()
{
	int i=0,j=0,h=0,k=0,l,d=0;
	char a[50],str[50],str1[50];
	cout<<"Enter the String\n";
	gets(a);
	l = strlen(a);
	while (i<l) 
    { 
        if (a[i] != ' ') 
           a[j++] = a[i];
		else
			d++; 
        i++; 
    } 
	for(i=0;i<l-d;i++)
	{
		if(i%2==0)
		{
			str[k] = a[i];
			cout<<a[i]<<"\n";
			k++;
		}
		else
		{
			str1[h] = a[i];
			cout<<a[i]<<"\n";
			h++;
		}
	}
	cout<<"The Cipher Text is\n";
	cout<<str;
	cout<<str1;
	return 0;
}
