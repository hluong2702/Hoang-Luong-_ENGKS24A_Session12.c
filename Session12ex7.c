#include<stdio.h>
void matrix(int arr[100][100],int row, int column){
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            printf("arr[%d][%d] = ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    printf("Mang da nhap : \n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
}
int main(){
    int row, column;
    int array[100][100];
    printf("Nhap so hang : ");
    scanf("%d",&row);
    printf("Nhap so cot : ");
    scanf("%d",&column);
    matrix(array,row,column);
}