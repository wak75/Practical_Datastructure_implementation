//project challange 1, find mean of given data by direct method
#include<iostream>
using namespace std;
int main()
{
	int i,n;
	float a[10],f[10],multi[10],result=0,sum=0,N=0;
	
	
	cout<<"enter the number of elements: ";
	cin>>n;
	
	for (i=1;i<=n;i++)
	{
		cout<<"enter the elements: ";
		cin>>a[i];
	}
	cout<<"enter the frequency: "<<endl;
	for (i=1;i<=n;i++)
	{
		cout<<"enter frequency of #"<<a[i]<<" : ";
		cin>>f[i];
		N+=f[i];
	}
	cout<<"sum of all the frequency(N) is: "<<N<<endl;
		
	for(i=1;i<=n;i++)
	{
		multi[i] = a[i]*f[i];
		
		sum+=multi[i];
	}
	
		for(i=1;i<=n;i++)
	{
		//cout<<multi[i];
		cout<<"the element is "<<a[i]<<" and its frequency is "<<f[i]<<"and their multiplication is: "<<multi[i]<<endl;
	}
	cout<<"sum of all elements with their respective frequencies are: "<<sum<<"\n\n";
	
	result=sum/N;
	cout<<"the final mean of the given question is: "<<result;

}

