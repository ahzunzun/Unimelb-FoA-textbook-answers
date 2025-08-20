#include <stdio.h>
#include <stdlib.h>
int all_zero(int A[], int n);

int main(int argc, char *argv[]){
    int zero_list[5] = {0,0,0,0,0};
    int non_zero_list[5] = {0,0,0,1,0};
    if (all_zero(non_zero_list, 5)){
        printf("List is all zero\n");
    }else{
        printf("There is a non-zero in the list\n");
    }
    return 0;
}

int all_zero(int A[], int n){
    for(int i = 0; i < n; i++){
        if(A[i] != 0){
            return 0;
        }
    }
    return 1;
}
