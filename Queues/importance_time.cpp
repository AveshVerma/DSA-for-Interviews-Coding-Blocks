#include<iostream>
#include<queue>
using namespace std;
int main() 
{
	int n;
	cin>>n;
	queue<int>q;
	int ar1[n],ar2[n];
	for(int i=0;i<n;i++)
	{
		cin>>ar1[i];
	}
	for(int i=0;i<n;i++)
	{
		q.push(ar1[i]);
	}
	for(int i=0;i<n;i++)
	{
		cin>>ar2[i];
	}
	int total_time=0,job=0,executed_job=0;
	while(!q.empty())
	{
		job=q.front();
		if(job==ar2[executed_job])
		{
			q.pop();
			executed_job++;
			total_time++;
		}
		else
		{
			q.pop();
			q.push(job);
			total_time++;

		}
	}
cout<<total_time;
	return 0;
}