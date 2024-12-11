#include<stdio.h>
void displayMenu(int arr[100],int current_lenght){
    printf("Mang hien tai : \n");
    for (int i = 0; i < current_lenght; i++)
    {
        printf("Phan tu thu %d = %d\n",i+1, arr[i]);
    }
}

void addArray(int arr[100],int current_lenght){
    for (int i = 0; i < current_lenght; i++)
    {
        printf("Nhap phan tu thu %d : ",i+1);
        scanf("%d",&arr[i]);
    }
}
void addItem(int arr[100],int current_lenght,int index,int value){
    for (int i = current_lenght; i > index; i--)
    {
        arr[i] = arr[i-1];
    }
    arr[index] = value;
    current_lenght++;
}
void changeItem(int arr[100],int current_lenght,int index,int value){
    arr[index] = value;
}
void deleteItem(int arr[100],int current_lenght,int index){
    for (int i = index; i < current_lenght; i++)
    {
        arr[i] = arr[i+1];
    }
    current_lenght--;
}
void descending(int arr[100],int current_lenght){
    for (int i = 0; i < current_lenght; i++)
    {
        for (int j = 0; j < current_lenght-1-i; j++)
        {
            if (arr[j+1]>arr[j])
            {
                int temp = arr[j];
                arr[j]= arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}
void ascending(int arr[100],int current_lenght){
    for (int i = 0; i < current_lenght; i++)
    {
        for (int j = 0; j < current_lenght-1-i; j++)
        {
            if (arr[j+1]<arr[j])
            {
                int temp = arr[j];
                arr[j]= arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}
void linearSearch(int arr[100],int current_lenght,int value){
    for (int i = 0; i < current_lenght; i++)
    {
        if (arr[i] == value)
        {
            printf("Phan tu %d o vi tri thu %d\n",value,i+1);
        }
    }
}
void binarySearch(int arr[100],int current_lenght,int value){
    int mid, start = 0, end = current_lenght - 1;
    while (start <= end)
    {
        mid = (start + end)/2;
        if (arr[mid]>value)
        {
            end = mid - 1;
        }
        else if(arr[mid]<value)
        {
            start = mid + 1;
        }
        else{
            printf("Phan tu %d tai vi tri thu %d\n",value,mid+1);
            break;
        }
    }
}
int main(){
    int current_lenght,choice,index,value,x,n;
    int arr[100];
    do
    {
        printf("________________________________________\n");
        printf("                      Menu                \n");
        printf("\n1. Nhap gia tri cac phan tu cua mang\n");
        printf("2. In ra gia tri cac phan tu cua mang dang quan ly\n");
        printf("3. Them 1 phan tu vao vi tri chi dinh\n");
        printf("4. Sua 1 phan tu o vi tri chi dinh\n");
        printf("5. Xoa 1 phan tu o vi tri chi dinh\n");
        printf("6. Sap xep cac phan tu\n");
        printf("7. Tim kiem phan tu nhap vao\n");
        printf("8. Thoat\n");
        printf("________________________________________\n");
        printf("Nhap lua chon cua ban : ");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
            printf("Nhap so phan tu ban muon nhap : ");
            scanf("%d",&current_lenght);
            addArray(arr,current_lenght);
            break;
        case 2:
            displayMenu(arr,current_lenght);
            break;
        case 3:
            printf("Nhap vi tri index ban muon them : ");
            scanf("%d",&index);
            printf("Nhap gia tri ban muon them : ");
            scanf("%d",&value);
            addItem(arr,current_lenght,index,value);
            displayMenu(arr,current_lenght);
            displayMenu(arr,current_lenght);
            break;
        case 4:
            printf("Nhap vi tri index ban muon sua : ");
            scanf("%d",&index);
            printf("Nhap gia tri ban muon sua : ");
            scanf("%d",&value);
            changeItem(arr,current_lenght,index,value);
            displayMenu(arr,current_lenght);
            break;
        case 5:
            printf("Nhap vi tri index ban muon xoa : ");
            scanf("%d",&index);
            deleteItem(arr,current_lenght,index);
            displayMenu(arr,current_lenght);
            break;
        case 6:
            printf("1. Giam dan\n");
            printf("2. Tang dan\n");
            scanf("%d",&x);
            switch (x)
            {
            case 1:
                descending(arr,current_lenght);
                displayMenu(arr,current_lenght);
                break;
            case 2:
                ascending(arr,current_lenght);
                displayMenu(arr,current_lenght);
            break;
            default:
                printf("Khong hop le, Nhap lai!!");
                break;
            }
            break;
        case 7:
            printf("Nhap phan tu ban muon tim : ");
            scanf("%d",&value);
            printf("1. Tim kiem tuyen tinh\n");
            printf("2. Tim kiem nhi phan\n");
            scanf("%d",&n);
            switch (n)
            {
            case 1:
                linearSearch(arr,current_lenght,value);
                break;
            case 2:
                binarySearch(arr,current_lenght,value);
                break;
            default:
                printf("Khong hop le, Nhap lai!!");
                break;
            }
            break;
        case 8:
            printf("Tam biet!");
            break;
        default:
            printf("Khong hop le, Nhap lai!!");
            break;
        }
        
    } while (choice != 8);
}