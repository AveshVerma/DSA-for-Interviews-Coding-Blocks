#include<iostream>
#include<cstring>
#include<vector>
#include<algorithm>
using namespace std;

vector<string> output;


void permutations(char str[],int i,char str2[])
{
	if(str[i]=='\0')
	{
		if(strcmp(str,str2)<0)
		{
			output.push_back(str);
			
		}
		return;
	}

	for(int j=i;str[j]!='\0';j++)
	{
		swap(str[j],str[i]);
		permutations(str,i+1,str2);
		swap(str[j],str[i]);
	}
}


int main() {

	char str[100];
	char str2[100]="";

	cin>>str;
	strcpy(str2,str);
	
	permutations(str,0,str2);
	sort(output.begin(),output.end());

	for(auto i=output.begin();i!=output.end();i++)
	{
		cout<<*i<<"\n";
	}

	return 0;
}