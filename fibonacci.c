#include<stdio.h>
long int fibonacci(int n){
    long int f[n+1];
    f[0]=0;
    f[1]=1;
    int i;
    for(i=2;i<=n;i++){
       f[i]=f[n-1]+f[n-2];
       }
 return f[n];
 }
 int main(){
   int n;
   long int ans;
   printf("Enter the number");
   scanf("%d",&n);
   ans=fibonacci(n);
   printf("The %dth fibonacci number is %d",n,ans);
   return 0;
   }
