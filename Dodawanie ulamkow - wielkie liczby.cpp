#include<iostream>
using namespace std;
unsigned long long  nwd(unsigned long long a, unsigned long long b)
{
	unsigned long long zzz;
	while(b!=0)
	{
		zzz= b;
		b = a%b;
		a = zzz;
	}
    return a;
}

unsigned long long nww (unsigned long long a, unsigned long long b)
 {
 	return a*b/(nwd(a,b));
 }

int main()
{
	unsigned long long l1, l2, m1, m2;
	char c;
	cin>>l1>>c>>m1;
	cin>>l2>>c>>m2;
	unsigned long long l3, m3;
	m3=nww(m1, m2);
	unsigned long long d=l3=m3/m1*l1 + m3/m2*l2;
	l3 /= nwd(d,m3);
	m3 /= nwd(d,m3);
	cout<<l1<<"/"<<m1<<" + "<<l2<<c<<m2<<" = "<<l3<<"/"<<m3;

 	return 0;
}
