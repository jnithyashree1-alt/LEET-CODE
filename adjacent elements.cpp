
#include<stdio.h>
int main()
{
    int m,n;scanf("%d%d",&m,&n);
    int a[m][n];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
}
int rd[]={-1,-1,-1,0,0,1,1,1};
int cd[]={-1,0,1,-1,1,-1,0,1};
for(int i=0;i<m;i++)
{
    for(int j=0;j<n;j++)
    {
        int sum=0;
        for(int k=0;k<8;k++)
        {
            int ar=i+rd[k],ac=j+cd[k];
            if(ar>=0&&ar<m&&ac>=0&&ac<n)
            {
                sum+=a[ar][ac];
            }
        }
        printf("%d ",sum);
    }
    printf("\n");
}
}
