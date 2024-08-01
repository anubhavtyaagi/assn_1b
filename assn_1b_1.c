#include<stdio.h>

int main(){
    printf("Will print the transpose of a 3*3 matrix \n");

    int a[3][3];
    int b[3][3];

    printf("Enter matrix \n");

    for(int i = 0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("Enter ele at %d%d ", i,j);
            scanf("%d",&a[i][j]);
        }
    }

    printf("The eneterd matrix is: \n");

    for(int i=0;i<3;i++){
        printf("\n");
        for(int j=0;j<3;j++){
            printf("%d \t",a[i][j]);
        }
    }

    printf("its transpose would be: \n");
    for (int i = 0; i < 3; i++) {
        for (int j = i + 1; j < 3; j++) {
            b[i][j] = a[j][i];
        }
    }

    for(int i=0;i<3;i++){
        printf("\n");
        for(int j=0;j<3;j++){
            printf("%d \t",b[i][j]);
        }
    }

    return 0;
    
}