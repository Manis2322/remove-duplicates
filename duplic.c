#include<stdio.h>
#include<string.h>
void main(){

	char s[30000];
	int i,k,j;
	printf("enter the string :");
	gets(s);
	int str=strlen(s);
	if((str>=1)&&str<=30000)
	{
	
	
	
	 for(i=0;s[i];i++)
	 {
	 
		for(j=i+1;s[j];j++)
		{
			if(s[i]==s[j])
			{
				for(k=j;s[k];k++)
				
				  s[k]=s[k+1];
				j=j-1;
				
			}
		}
	 }
	printf("the new string is : %s\n",s);
	}
	else
	printf("The entered string size is %d ,Please Enter the string with valid sizzze!!!",str);
	
	
}
