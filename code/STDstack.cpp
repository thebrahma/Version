#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{
    char ch[250];
    int front,back,present,T;
    scanf("%d",&T);
    while(T--)
    {
        scanf("%s",ch);
        int temp = strlen(ch);
        int flag = temp -1;
        int signal=0;
        for(int i=0;i<temp;i++)
        {

            if(i==0)
            {
                front = ch[i+1];
                back  = ch[temp-1];
                present = ch[i];
                back = present+1;
                cout<<i;
            }
            else if((0<i)&&(i<flag))
            {
                front = ch[i+1];
                back  = ch[i-1];
                present = ch[i];
                cout<<i;

            }
            else
            {
                front = ch[0];
                back  = ch[i-1];
                present = ch[i];
                front = present+1;
            }
                    if(present>front)
                    {
                        front++;
                    }
                    else
                    {
                        front--;
                    }
                    if(present>back)
                    {
                        back++;
                    }
                    else
                    {
                        back--;
                    }
                    if ((present != front)||(present!= back))
                    {
                        printf("NO\n");
                        signal++;
                        break;
                    }
        }
        if(signal==0){
                printf("YES\n");
        }
    }
    return 0;
}
