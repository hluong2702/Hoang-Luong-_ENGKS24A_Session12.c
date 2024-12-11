#include<stdio.h>
int UCLN(int a, int b){
    while (a != b)
    {
        if (a > b)
        {
            a -= b; 
        }
        else if (a < b)
        {
            b -= a;
        }
    }
    return a;
}
int main(){
    int num1,num2;
    printf("Nhap so thu nhat : ");
    scanf("%d",&num1);
    printf("Nhap so thu hai : ");
    scanf("%d",&num2);
    printf("Uoc chung lon nhat cua 2 so la : %d", UCLN(num1,num2));
}