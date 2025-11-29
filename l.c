#include<stdio.h>
#include<conio.h>

int main()
{
    int num[50],i,j,temp,N;

    printf("Element number: ");
    scanf("%d",&N);

    printf("Enter element: ");
    for(i=0; i<=N; i++){
        scanf("%d",&num[i]);
    }

    //before assending

    printf("Before assending value:\n ");

    for(i=0; i<=N; i++){
        printf("[%d] = %d\n",i,num[i]);
    }
    printf("\n\n");

    for(i=0; i<=N; i++){
        for(j=0; j<=N; j++){
            if(num[j]>num[j+1]){
                temp=num[j];
                num[j]=num[j+1];
                num[j+1]=temp;
            }

        }

    }

    //printing assending value
    printf("After assending value:\n ");

    for(i=0; i<=N; i++){
        printf("[%d] = %d\n",i,num[i]);
    }


    getch();
}
