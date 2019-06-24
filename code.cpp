#include<iostream>
using namespace std;
int main()
{float mpdr;
float p=1;
float ddr,n;
cout<<"candidate nodes:"<<endl;
cin>>n;
cout<<"enter desired ddr :"<<endl;
cin>>ddr;
//calculation of ddr and mpdr when no of candidate nodes =2
if(n==2)
{
cout<<"delivery ratio obtained before bifurcation"<<endl;
float result=1;
for(int i=1;i<=n;i++)
{
result=result*(1-0.01*ddr);
}
for(int i=1;i<=n;i++)
cout<<"ddr"<<i<<" : "<<ddr<<endl;
mpdr=1-result;
cout<<"delivery ratio "<<mpdr*100<<endl;
//MPDR after bifurcation
cout<<"\nAfter bifurcation"<<endl;
 result=1;
int i=0;
float ddr1;
ddr1=ddr/2;
cout<<"ddr 1 : "<<ddr1<<endl;
result=result*(1-0.01*ddr1);
float ddr2=1-((1-0.01*ddr)/result);
result=result*(1-ddr2);
cout<<"ddr 2 : "<<ddr2*100<<endl;
float t=1-result;
cout<<"\ndelivery ratio : "<<t*100<<endl;
}

//calculation of ddr and mpdr when no of candidate nodes =3

if(n==3)
{cout<<"delivery ratio obtained before bifurcation"<<endl;
float result=1;
for(int i=1;i<=n;i++)
{result=result*(1-0.01*ddr);}
for(int i=1;i<=n;i++)
cout<<"ddr"<<i<<" : "<<ddr<<endl;
mpdr=1-result;
cout<<"delivery ratio : "<<mpdr*100<<endl;
//MPDR after bifurcation

cout<<"\nAfter bifurcation"<<endl;
result=1;
int i=0;
float ddr1;
ddr1=ddr/2;
cout<<"ddr 1 : "<<ddr1<<endl;
result=result*(1-0.01*ddr1);
float ddr2=1-((1-0.01*ddr)/result);
ddr2=ddr2/2;
result=result*(1-ddr2);
cout<<"ddr 2 : "<<ddr2*100<<endl;
float ddr3=1-((1-0.01*ddr)/result);
result=result*(1-ddr3);
cout<<"ddr 3 : "<<ddr3*100<<endl;
float t=1-result;
cout<<"\ndelivery ratio : "<<t*100<<endl;
}
}
        	 



