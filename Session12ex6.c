#include <stdio.h>


int isPerfect(int x){
    if (x <= 0) {
        return 0;
    }

    int sum = 0;
    for (int i = 1; i <= x / 2; i++){ 
        if (x % i == 0) {
            sum += i;
    }
    }

    return (sum == x);
    }

int main() {
    int n1, n2;

    printf("Moi ban nhap so nguyen thu nhat ");
    scanf("%d", &n1);
    printf("Moi ban nhap so nguyen thu hai ");
    scanf("%d", &n2);

    if(isPerfect(n1)){
        printf("%d la so hoan hao\n",n1);
    }else{
        printf("%d khong la so hoan hao\n",n1);
    }
    if(isPerfect(n2)){
        printf("%d la so hoan hao\n",n2);
    }else{
        printf("%d khong la so hoan hao\n",n2);
    }

    return 0;
}
