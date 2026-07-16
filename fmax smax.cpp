#include<stdio.h>
int main(){
	int n,fmax,smax=1,curr;
	scanf("%d%d",&n,&fmax);
	for(int ctr=2;ctr<=n;ctr++){
		scanf("%d",&curr);
		if(curr>fmax){
			smax=fmax;
			fmax=curr;
		}
		else if(curr>smax){
			smax=curr;
		}
	}
	printf("%d %d",fmax,smax);
}
