#include <bits/stdc++.h>
#include<stdio.h>
using namespace std;

int main() {

	char ch[100],str[100];
    int T = 1;
      while(fgets(ch,sizeof(ch),stdin)){
            int i=0,count=0,k=0;
            while(ch[i]!='\0')
            {
                  if(ch[i]=='-' && count ==0)
                  {
                  	  if(ch[i+1]=='>')
                  	  {
                           //str[k]='.';
                  	  	   printf(".");
                           i=i+2;
                  	  }
                  	  else
                  	  {
                  	  	   //str[k]==ch[i];
                  	  	   printf("%c",ch[i]);
                  	  	   i++;
                  	  }
                  }
                  else if(ch[i]=='/' && count==0)
                  {
                  	   if(ch[i+1]=='/')
                  	   {
                            //str[k]=ch[i];
                            //str[k+1]=ch[i+1];
                  	   	    printf("%c",ch[i]);
                            i=i+1;
                            k++;
                            count++;
                  	   }
                  	   else
                  	   {
                  	   	    //str[k]=ch[i];
                  	   	    printf("%c",ch[i]);
                  	   	    i++;
                  	   }
                  }
                  else
                  {
                  	    //str[k]=ch[i];
                  	    printf("%c",ch[i]);
                  	    i++;
                  }
                  k++;
            }
            //str[k]='\0';
            //fputs(str,stdout); 
      }
     
    return 0;
}
