#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define Int long long int
#define Maxa 1000000000000
#define Max 1000001
bool pr[Max]={};
void seive()
{
pr[0]=pr[1]=1;
for(int i=2;i*i<Max;i++)
{
if(!pr[i])
for(int j=i*i;j<Max;j+=i)
pr[j]=1;
}

}
int main(){
seive();
int n;
scanf("%d",&n);
int *a;
a=(int*)calloc(n,sizeof(int));
for(int i=0;i<n;i++)
scanf("%d",a+i);
int min=0,max=0;
for(int i=0;i<n;i++){
if(!pr[a[i]]){
min=a[i];
max=a[i];
break;
}
}
for(int i=0;i<n;i++){
if(!pr[a[i]]){
if(min>a[i])
min=a[i];
}}
for(int i=0;i<n;i++){
if(!pr[a[i]]){
if(max<a[i])
max=a[i];
}
}
if(min==0 && max==0)
printf("%d",-1);
else
printf("%d ",max-min);

}
