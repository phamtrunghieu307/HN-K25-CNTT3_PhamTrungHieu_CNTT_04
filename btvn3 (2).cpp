#include<stdio.h>
int main(){
    int i,N;
    printf("nhap so cuoi ");
    scanf("%d",&N);
    int Tong = 0;
    for(i=1;i<=N;i++){
        Tong = Tong + i;
        printf("Tong= %d\n",Tong);
    }
    
    return 0;
}

