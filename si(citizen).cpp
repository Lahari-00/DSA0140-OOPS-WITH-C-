#include<iostream>
using namespace std;
int main()
{
	int p,t,r,c,si_1,si_2,y=1,n=2;
	cout<<"enter principal amount";
	cin>>p;
	cout<<"enter the no.of years";
	cin>>t;
	cout<<"is senior citizen";
	cin>>c;
	if(c==1)
    {
        si_1=(p*t*12)/100;
	    cout<<"simple interest is"<<si_1;
    }
	else
	{
		si_2=(p*t*10)/100;
	    cout<<"simple interest is"<<si_2;
    }
    return 0;
}
