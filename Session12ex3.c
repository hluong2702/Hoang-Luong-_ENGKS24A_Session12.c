#include <stdio.h>


int factorial(int x){
    if (x < 0) {
        return -1;
    }
    int result = 1;
    for (int i = 1; i <= x; i++) {
        result *= i;
    }
    return result;
}

int main() {
    int n;

    printf("Moi ban hap vao mot so nguyen ");
    scanf("%d", &n);

    int result = factorial(n);
    if(result == -1){
        printf("Khong hop le vui long nhap lai \n");
    }else{
        printf("Giai thua cua %d la %d\n", n, result);
    }

    return 0;
}
