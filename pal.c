#include<stdio.h>
#include<string.h>
#include<stdlib.h>

char* string_rev(char*);
int check(char*,char*);

void main()
{
	char* s=(char*)malloc(sizeof(char)*100);   //String s declaration
	printf("Enter any string:");
	scanf("%[^\n]",s);			   //Reading s from stdin
	char* rev=(char*)malloc(sizeof(char)*100); //String rev declaration
	rev=string_rev(s);			   //function to reverse the string
	int flag=check(s,rev);
	if(flag==1)				   //returns 1 if string is a palindrome, 0 otherwise
		printf("%s is a palindrome\n",s);
	else
		printf("%s is not a palindrome\n",s);
		
	
	int mid;
	if(strlen(s)%2==1)			   //This prints the middle element in the string
	{
		mid=strlen(s)/2 +1;
		printf("The middle element is %c\n",s[mid]);
	}
	else
	{
		mid=strlen(s)/2;
		printf("The middle elements are %c,%c\n",s[mid-1],s[mid]);
	}
}

char* string_rev(char* s)			   //function to reverse the string
{
	int i,k=0;
	char* rev=(char*)malloc(sizeof(char)*100);
	for(i=strlen(s)-1;i>=0;i--)
	{
		rev[k++]=s[i];
	}
	
	return rev;
}

int check(char* s1,char* s2)                      //this function returns 1 if string is a palindrome, 0 otherwise
{
	int i,c=0;
	for(i=0;i<strlen(s1);i++)
	{
		if(s1[i]==s2[i])
			c++;
	}
	if(c==strlen(s1))
		return 1;
		
	return 0;
}
