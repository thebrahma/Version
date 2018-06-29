#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	stack <int> stk;
	scanf("%d",&T);
	char ch[200];
	while(T--)
	{
		scanf("%s",ch);
		int i=0,k=0;
		while(ch[i]!='\0')
		{
				if(ch[i]=='(')
				{
					k++;
					stk.push(k);
					printf("%d",k );
				}
				if(ch[i]==')')
				{
					int temp = stk.top();
					printf("%d",temp );
					stk.pop();
				}
				i++;
		}
		printf("\n");
	}

	return 0;
}