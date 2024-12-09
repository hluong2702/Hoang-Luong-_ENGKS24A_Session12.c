#include<stdio.h>

void arr(){
   int numbers[5]={1,2,3,8,9};
    int max = numbers[0];
    for(int i = 0;i<5;i++){
       if(numbers[i]> max){
        max = numbers[i];
    }
}
    printf("Max %d",max);
}
int main(){
    arr();
    return 0;
}