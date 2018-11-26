#include<iostream>
using namespace std;
unsigned int n;
unsigned int ziua;
unsigned int luna;
unsigned int anul;
int main()
{
int code;
cin>>code;
if (code==1) {
                     cout<<endl<<" French format "<<endl;
                     cout<<" Day = ";cin>>ziua;
                     cout<<" Month = ";cin>>luna;
                     cout<<" Year = ";cin>>anul;
                     ziua=ziua<<27;
                     luna=luna<<23;
                     n=n|luna;
                     n=n|anul;
                     cout<<"Codul datei este="<<n;
                    }
else
if (code==2)  {
                     cout<<endl<<" English format "<<endl;
                     cout<<" Month = ";cin>>luna;
                     cout<<" Day = ";cin>>ziua;
                     cout<<" Year = ";cin>>anul;
                     luna=luna<<28;
                     n=n|luna;
                     ziua=ziua<<23;
                     n=n|anul;
                     cout<<"Codul datei este="<<n;
                    }
else
{ cout<<endl<<" Sorry , no bananas today !"; }
return  0;
}
