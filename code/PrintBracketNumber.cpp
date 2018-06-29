#include <bits/stdc++.h>
#include<stack>
using namespace std;

int Prec(char ch)
{
    switch (ch)
    {
    case '+':
    case '-':
        return 1;
 
    case '*':
    case '/':
        return 2;
 
    case '^':
        return 3;
    }
    return -1;
}


void infixtopostfix(char ch[],char exp[],stack<int> *stk)
{
	int i=0,k=-1;
    while(ch[i]!='\0')
    {
    		if((ch[i]>='a' && ch[i]<='z') || (ch[i]>='A' && ch[i]<='Z')){
    			exp[++k] = ch[i];
            
    		}
    		else if(ch[i]=='('){
    			stk->push(ch[i]);
    		
    		}
    		else if(ch[i]==')')
    		{
    				while( !stk->empty() && stk->top()!='(')
    				{
    					exp[++k] = stk->top();
    					stk->pop();
    			
    				}
    				if((!stk->empty()) && (stk->top()!='(')){
    					printf("Invaid Syntax\n");
    					break; 
    				
    				}
    				else{
    					stk->pop();
    	
    				}
    		}
    		else
    		{
         			while(!stk->empty() && Prec(ch[i]) <= Prec(stk->top()))
         			{
         				exp[++k] = stk->top();
 
         				stk->pop();
         			}
         			stk->push(ch[i]);
         			cout<<stk->top()<<"\n";
    		}
    		i++;
    }  
    while (!stk->empty())
    {
    	exp[++k]=stk->top();
    	stk->pop();
    
    }
 
    exp[++k] = '\0';
}


int main()
{
	char ch[100],exp[100];
	cin>>ch;
	stack<int> stk;
	infixtopostfix(ch,exp,&stk);
	printf("\n%s\n",exp );
    return 0;
}