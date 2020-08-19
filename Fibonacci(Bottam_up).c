#include <stdio.h>
#define reading scanf("%d",&n);
#define fib_function int k=fib(n,arr);
#define print_nth_number  printf("%d\n",k);
#define fibo  int fib(int n,int arr[])


fibo{
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    for(int i=2;i<=n;i++){
        arr[i]=arr[i-1]+arr[i-2];
    }
    return arr[n];
}


int main()
{
    int n;
    reading;
    int arr[n];
    arr[0]=0;
    arr[1]=1;
    fib_function;
    print_nth_number;
    return 0;
}
