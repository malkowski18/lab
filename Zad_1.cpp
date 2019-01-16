#include<iostream>

using namespace std;

typedef struct trojkat;

struct trojkat 
	{
	double a,b,c;
	};
	
double obw(struct trojkat t1);

int main()
{
struct trojkat t1;
t1.a=5;
t1.b=56;
t1.c=40;
cout<<obw(t1);

	return 0;
}
double obw(struct trojkat t1)
{
	double obwod=t1.a+t1.b+t1.c;
	return obwod;
}
