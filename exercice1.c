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
        return(pascal(i-1,j)+pascal(i-1,j-1));
    }
}