#include <stdio.h>

int main() {


}
void judge_Prime_number(){
    //输入一个数,判断是否为素数
    int x,y=0;
    scanf("%d",&x);
    for (int i = 2; i <x ; x++) {
        if(x%i==0)
            y++;
    }
    if(y==0) printf("YES");
}
void prime_numbers_to_100(){
    //输出100以内的素数
    for (int i=2;i<100;i++){
        int num=0;
        for (int j=2;j<i;j++){
            if(i%j==0) num++;
        }
        if(num==0) printf("%d\n",i);
    }
}

void arr_max(){
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
void Fibonacci_sequence(){
    //Fibonacci数列
    int arr[15];
    arr[0]=1;
    arr[1]=1;
    for (int i = 2; i <15 ; i++) {
        arr[i]=arr[i-1]+arr[i-2];
    }
    for (int i = 0; i <15 ; i++) {
        printf("%d\n",arr[i]);
    }
}
void Bubble_Sort(){
    //冒泡排序
    int arr[10]={98,4,56,345,34,754,345,3456,546,675};
    for (int i = 0; i <9 ; i++) {
        for (int j = 0; j <10-1-i ; j++) {
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    for (int i = 0; i <10 ; i++) {
        printf("%d\n",arr[i]);
    }
}
void str_convert(){
    //将字符串大写转小写，小写转大写
    char str[20];
    gets(str);
    for (int i = 0; str[i]!='\0';i++) {
        if(str[i]>='A'&&str[i]<='Z')
            str[i]+=32;
        else if(str[i]>='a'&&str[i]<='z')
            str[i]-=32;
    }
    puts(str);
}