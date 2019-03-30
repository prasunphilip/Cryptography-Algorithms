#include<iostream>
#include<string.h>
#include<math.h>
using namespace std;
int main()
{
	int p,q,a,b,A,B,ak,bk;
	cout<<"Enter a and b values : ";
	cin>>a>>b;
	cout<<"Enter two prime numbers : ";
	cin>>p>>q;
	A = fmod(pow(q,a),p);
	B = fmod(pow(q,b),p);
	cout<<"Value of A : "<<A<<"\n";
	cout<<"Value of B : "<<B<<"\n";
	ak = fmod(pow(A,b),p);
	bk = fmod(pow(B,a),p);
	cout<<"Value of Ak(Key 1) : "<<ak<<"\n";
	cout<<"Value of Bk(Key 2) : "<<bk<<"\n";
	if(ak == bk)
		cout<<"Keys match. They can communicate.";
	else
		cout<<"Keys do not match. They cannot communicate.";
	return 0;
}
