#include<iostream>
#include<string>
using namespace std;
int main() {
	int t;
	int n,m;
	string name;
	int finalMin;
	cin>>t;
	int a[101],b[101];
	for(int i=1;i<=t;i++)
	{
		cin>>n;
		cin>>m;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		for(int i=0;i<m;i++)
		{
			cin>>b[i];
		}
 int max = 0;
		for(int i=0;i<n;i++)
		{
			if(a[i]>max)
			{
				max=a[i];
			}
		}
int maxx=0;
		for(int i=0;i<m;i++)
		{
			if(b[i]>maxx)
			{
				maxx=b[i];
			}
		}
		if(max==maxx)
		{
			finalMin=max;
			name="Deepak";
		}
		else if(max<maxx){
			finalMin=max;
			name="Deepak";
		}else if(max>maxx){
			finalMin=maxx;
			name="Gautam";
		}
	cout<<finalMin<<" "<<name<<endl;
	}

	
	return 0;
}      
