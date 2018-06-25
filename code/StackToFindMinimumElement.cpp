#include <bits/stdc++.h>
#include <stack>
using namespace std;
int main()
{
	stack <int> stk;
	int arr[10];
	for(int i=0;i<5;i++)
	{
		cin>>arr[i];
	}
	sort(arr,arr+5);
		for(int i=0;i<5;i++)
			printf("%d",arr[i] );
	for(int i=0;i<5;i++)
	{
		stk.push(arr[i]);
	}
	for(int i=0;i<5;i++)
	{
		printf("%d\n",stk.top());
		stk.pop();
	}
	return 0;
}