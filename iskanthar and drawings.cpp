#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	char s[100];
	scanf("%s",s);
	int abc=0;
	for(int i=0;s[i]!='\0';i++){
	if(s[i]=='#') abc++;
}
printf("%d",(abc+1)/2);
}
