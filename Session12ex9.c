#include<stdio.h>
#include<math.h>
void displayMenu(int arr[100][100],int row, int column){
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

void addArray(int arr[100][100],int row, int column){
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            printf("arr[%d][%d] = ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
}
void cornerItem(int arr[100][100],int row, int column){
    printf("%d\t",arr[0][0]);
    printf("%d\n",arr[0][row-1]);
    printf("%d\t",arr[row-1][0]);
    printf("%d\n",arr[row-1][column-1]);
}
void borderItem(int arr[100][100],int row, int column){
    printf("\nBien tren :\n");
    for (int i = 0; i < column; i++)
    {
        printf("%d\t",arr[0][i]);
    }
    printf("\nBien duoi :\n");
    for (int i = 0; i < column; i++)
    {
        printf("%d\t",arr[row-1][i]);
        
    }
    printf("\nBien trai :\n");
    for (int i = 0; i < row; i++)
    {
        printf("%d\t",arr[i][0]);
    }
    printf("\nBien phai :\n");
    for (int i = 0; i < row; i++)
    {
        printf("%d\t",arr[i][column-1]);
    }
}
void mainDiagonal(int arr[100][100],int row, int column){
    printf("Duong cheo chinh : \n");
    for (int i = 0; i < column; i++)
    {
        printf("%d\t",arr[i][i]);
    }   
}
void secondaryDiagonal(int arr[100][100],int row, int column){
    int k = row-1;
    printf("\nDuong cheo phu : \n");
    for (int i = 0; i < column; i++)
    {
        printf("%d\t",arr[i][k]);
        k--;
    }   
}
void isPrime(int arr[100][100],int row, int column){
    int prime;
    printf("Cac so nguyen to trong mang : ");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            prime = 1;
            if (arr[i][j] < 2)
            {
                prime = 0;
            }
            else{
                for (int k = 2; k <= sqrt(arr[i][j]); k++)
                {
                    if (arr[i][j] % k == 0)
                    {
                        prime = 0;
                        break;
                    }
                }
            }
            if (prime == 1)
            {
                printf("%d   ",arr[i][j]);
            }
        }
    }
}
int main(){
    int row,column,choice;
    int arr[100][100];
    do
    {
        printf("\n________________________________________\n");
        printf("                      Menu                \n");
        printf("\n1. Nhap gia tri cac phan tu cua mang\n");
        printf("2. In ra cac gia tri cua mang theo ma tran\n");
        printf("3. In ra cac phan tu o goc theo ma tran\n");
        printf("4. In ra cac phan tu nam tren duong bien cua ma tran\n");
        printf("5. In ra cac phan tu nam tren duong cheo chinh va duong cheo phu theo ma tran\n");
        printf("6. In ra cac phan tu la so nguyen to theo ma tran\n");
        printf("7. Thoat\n");
        printf("________________________________________\n");
        printf("Nhap lua chon cua ban : ");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
            printf("Nhap so hang : ");
            scanf("%d",&row);
            printf("Nhap so cot : ");
            scanf("%d",&column);
            addArray(arr,row,column);
            break;
        case 2:
            displayMenu(arr,row,column);
            break;
        case 3:
            cornerItem(arr,row,column);
            break;
        case 4:
            borderItem(arr,row,column);
            break;
        case 5:
            mainDiagonal(arr,row,column);
            secondaryDiagonal(arr,row,column);
            break;
        case 6:
            isPrime(arr,row,column);
            break;
        case 7:
            printf("Tam biet!\n");
            break;
        default:
            break;
        }
    } while (choice != 7);
    
}