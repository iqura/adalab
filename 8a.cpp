#include <iostream>

using namespace std;
int main()
{
	int i,N,arr[20],f,ele,s;
	cout<<"enter the number of elemnts";
	cin>>N;
	cout<<"Enter elments";
	for(int i=1;i<=N;i++)
	{
		cin>>arr[i];
	}
	for(i=1;i<=N/2;i++)
	{
		f=i;
		ele=arr[f];
		s=2*f;
		if(s<N)
		{
			if(arr[s]<ele && arr[s+1]<ele)
					continue;
			else
			{
				cout<<"False it is not a max heap\n";
					return 0;
			}
		}
		if(s<=N)
		{
			if(arr[s]<ele)
				continue;
			else
			{
				cout<<"False it is not a  max heap\n";
				return 0;
			}
		}
	}
	cout<<"True it is a max\n";
	return 0;
	}
