#include <stdio.h>
#include <stdlib.h>

void insertion_sort(int A[], int n);
void int_swap(int *p1, int *p2);
void print_array(int A[], int n);

int main(int argc, char *argv[]){
    int list[10] = {1,4,5,2,7,8,6,9,10,3};
    printf("Before : ");
    print_array(list, 10);
    insertion_sort(list, 10);
    printf("After : ");
    print_array(list, 10);
    return 0;
}

void insertion_sort(int A[], int n){
    for (int i=1; i<n; i++) {
        /* swap A[i] left into correct position*/
        for (int j=i-1; j>=0 && A [j+1]>A[j]; j--) {
        /* not there yet */
            int_swap(&A[j], &A[j+1]);
        }
    }
}

void int_swap(int *p1, int *p2){
    int tmp;
    tmp = *p1;
    *p1 = *p2;
    *p2 = tmp;
}

void print_array(int A[], int n){
    for (int i=0; i < n; i++){
        printf("%d ", A[i]);
    }
    printf("\n");
}