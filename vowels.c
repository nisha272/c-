#include<string.h>
#include<stdio.h>
int countvowels(char str[]){
	int count=0;
	for(int i=0;i<strlen(str);i++){
		char ch=str[i];
		if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
			count++;
	}
	return count;
}
int main()
{
	char str[100];
	printf("enter string");
	
	    fgets(str,sizeof(str),stdin);
	
	            int vowels=countvowels(str);
	      printf("vowels:%d\n",vowels);
	            
	
	return 0;
}