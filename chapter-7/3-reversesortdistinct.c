#include <stdio.h>
#include <stdlib.h>

void insertion_sort(int A[], int n);
void int_swap(int *p1, int *p2);
void print_array(int A[], int n);
int remove_duplicates_sorted(int arr[], int n);

int main(int argc, char *argv[]){
    int new_list_len = 0;
    int list[10] = {1,4,5,2,7,7,6,9,10,3};
    printf("Before : ");
    print_array(list, 10);
    insertion_sort(list, 10);
    printf("After : ");
    print_array(list, 10);
    new_list_len = remove_duplicates_sorted(list, 10);
    printf("Removed duplicates : ");
    print_array(list, new_list_len);
    return 0;
}

void insertion_sort(int A[], int n){
    for (int i=1; i<n; i++) {
        /* swap A[i] left into correct position*/
        for (int j=i-1; j>=0 && A [j+1]>A[j]; j--) {
            if (A[j+1] == A[j]){
                continue;
            }
            
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

int remove_duplicates_sorted(int arr[], int n) {
    int j = 0; // Pointer for unique elements
    for (int i = 1; i < n; i++) {
        if (arr[i] != arr[j]) {
            j++;
            arr[j] = arr[i]; // Store the unique element
        }
    }
    return j + 1; // Return the new size of the array
}