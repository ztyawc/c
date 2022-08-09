#include <stdio.h>

int main() {
    //输入一个数,判断是否为素数
    int x,y=0;
    scanf("%d",&x);
    for (int i = 2; i <x ; x++) {
        if(x%i==0)
            y++;
    }
    if(y==0) printf("YES");

    //输出100以内的素数
    for (int i=2;i<100;i++){
        int num=0;
        for (int j=2;j<i;j++){
            if(i%j==0) num++;
        }
        if(num==0) printf("%d\n",i);
    }

    //数组找出最大数
    int arr[6]={1,34,4534,234,435,4};
    int num,max;
    max=arr[0];
    num=0;
    for (int i = 0; i < 6; i++) {
        if(arr[i]>max){
            max=arr[i];
            num=i;
        }
    }
    printf("max=%d\n",max);
    printf("num=%d",num);
}
