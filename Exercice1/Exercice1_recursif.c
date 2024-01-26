#include<stdio.h>
int pascal(int i,int j)
{
    if (i==0){
        if(j==0){
            return(1);
        }
        else{
            return(0);
        }
    }
    else{
        return(pascal(i-1,j-1)+pascal(i-1,j));
    }
}
void main(){
    int N=0;
    int i=0;
    int j=0;
    printf("Insérez N\n");
    scanf("%d",&N);
    while(i<N){
        while(j<i+1){
            printf("%i ",pascal(i,j));
            j++;
        }
        printf("\n");
        j=0;
        i++;
    }
}
/*Pour N = 10 : durée de 0.276s
Pour N = 100 : durée trop longue pour la mesurer durant la séance*/