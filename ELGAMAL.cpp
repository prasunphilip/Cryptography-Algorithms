#include<iostream>
#include<string.h>
#include<math.h>
using namespace std;

int modInverse(int a, int m) 
{ 
    a = a % m; 
    for (int x=1; x<m; x++) 
       if ((a*x) % m == 1) 
          return x; 
} 

int main()
{
	float p,d,e1,e2,r,c1,c2,m,n;
	cout<<"Enter the value to encrypted (PT): ";
	cin>>m;
	cout<<"Enter a large prime number (P): ";
	cin>>p;
	cout<<"Enter a decryption key (D): ";
	cin>>d;
	cout<<"Enter second part of encryption key (E1): ";
	cin>>e1;
	cout<<"Enter random integer (R): ";
	cin>>r;
	cout<<"\n";
	e2 = fmodl(pow(e1,d),p);
	cout<<"The third part of encryption is (E2): "<<e2<<endl;
	c1 = fmodl(pow(e1,r),p);
	cout<<"Encryption C1 : "<<c1<<endl;
	c2 = fmodl((m*pow(e2,r)),p);
	cout<<"Encryption C2 : "<<c2<<endl;
	n = fmodl(c2 * (modInverse(pow(c1,d),p)),p);
	cout<<"Decrypted Value : "<<n;
	return 0;
}
