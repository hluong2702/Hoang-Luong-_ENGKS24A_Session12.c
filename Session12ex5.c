#include<stdio.h>

int isPrime(int x){
    int count =0;
    for(int i =1;i<=x;i++){
        if(x%i==0){
            count++;
        }
    }
    if(count==2){
        return 1;
    }

} 
int main(){
    int n, n1;
    printf("Moi ban nhap vao mot so nguyen  ");
    scanf("%d",&n);
    printf("Moi ban nhap vao mot so nguyen  ");
    scanf("%d",&n1);
    if(isPrime(n)==1){
        printf("So %d la so nguyen to \n",n);
    }else{
        printf("Khong phai la so nguyen to");
    }
     if(isPrime(n1)==1){
        printf("So %d la so nguyen to \n",n1);
    }else{
        printf("Khong phai la so nguyen to");
    }
    return 0;
}