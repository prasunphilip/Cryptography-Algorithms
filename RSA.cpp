#include<iostream>
#include<string.h>
#include<math.h>
using namespace std;
int calc(int,int);
int main()
{
	int i,x,d,p,q,e,n,a,l;
	float c,m;
	cout<<"Enter the value to be ciphered : ";
	cin>>l;
	cout<<"Enter two prime numbers : ";
	cin>>p>>q;
	n = p * q;
	cout<<"Enter value of e (if no value put 0): ";
	cin>>e;
	x = (p - 1) * (q - 1);
	if(e == 0)
		e = calc(x,p);
	for(i=0;i<n;i++)
	{
		a = ((x * i) + 1) % e;
		if(a == 0)
		{
			d = ((x * i) + 1) / e;
			break;	
		}	
	}
	cout<<"\n";
	cout<<"The value of n : "<<n<<"\n";
	cout<<"The value of Phi(n) : "<<x<<"\n";
	cout<<"The value of e : "<<e<<"\n";
	cout<<"the value of d is : "<<d<<"\n";
	cout<<"The Ciphered is : ";
	c = fmodl(pow(l,e),n);
	cout<<c<<"\n";
	cout<<"The Decipher is : ";
	m = fmodl(pow(c,d),n);
	cout<<m;
	return 0;	
}

int calc(int x,int p) //claculate value of e
{
	int i,j,k=0,a=x;
	for(i=x;i>0;i--)
	{
		for(j=i;j>0;j--)
		{
			if(i%j == 0 && x%j == 0)
			{
				k++;	
			}
		}
		if(k == 1)
		{
			if(i<a && i != 1 && i>=p)
			{
				a = i;
				k = 0;
			}
		}
		else
			k = 0;
	}
	return a;
}
