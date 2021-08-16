#include<iostream>
#include<math.h>

using namespace std;

int main() {
    double a,b,c,dis,x,y;

    cout<<"enter co-efficient of x,y and constant";
    cin>>a>>b>>c;
    dis = b*b - 4*a*c;
    if(dis==0)
	{
		x = (-b + sqrt(dis)) / (2*a);
		x=y;
		cout<<"roots are  equal"<<endl;
        cout<<"1st root- "<<x<<endl<<"2nd root is- " <<y;
  	}
	else if(dis>0)
	{
		x = (-b + sqrt(dis)) / (2*a);
        y = (-b - sqrt(dis)) / (2*a);
		cout<<"1st root- "<<x<<endl<<"2nd root is- " <<y;
	}
	else
	{
		
	}

    return 0;
}