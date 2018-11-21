#include <iostream>
using namespace std;
struct Student{
	string firstname;
	string lastname;
	int a;
	int b;
	int c;
};
int main()
{
	int n,x,y,z,l,k,p,d,t;
	int b;
	int qwruty;
	cout >> "suka";
	string s1,s2;
	cin >> n;
	Student a[10000];
	for(int i=0;i<n;i++)
	{
		cin >> s1 >> s2 >> x >> y >> z;
		a[i].firstname=s1;
		a[i].lastname=s2;
		a[i].a=x;
		a[i].b=y;
		a[i].c=z;
	}
	for(int i=0;i<n;i++)
	{
		k=(a[i].a+a[i].b+a[i].c)/2;
		if(k>l)
			{
				l=k;
				p=i;
			}
	}
	cout<<a[p].firstname<< " "<<a[p].lastname;
	cout << endl;
	l=0;
	for(int i=0;i<n;i++)
	{
		k=(a[i].a+a[i].b+a[i].c)/2;
		if((k>l) && (p!=i))
		{
			l=k;
			d=i;
		}
	}
	cout<<a[d].firstname<< " "<<a[d].lastname;
	cout << endl;

	l=0;
	for(int i=0;i<n;i++)
	{
		k=(a[i].a+a[i].b+a[i].c)/2;
		if((k>l) && (p!=i)&&(d!=i))
		{
			l=k;
			t=i;


		}
	}
				cout<<a[t].firstname<< " "<<a[t].lastname;
	cout << endl


	return 0;
}
