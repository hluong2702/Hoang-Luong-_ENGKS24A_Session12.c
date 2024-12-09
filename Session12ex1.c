#include<stdio.h>

int sum(int a,int b){
    return a+b;
}
int main(){
    int a,b;
    printf("Moi ban nhap so thu nhat ");
    scanf("%d",&a);
    printf("Moi ban hap so thu hai ");
    scanf("%d",&b);
    printf("tong cua %d va %d la %d",a,b,a+b);
    return 0;
}