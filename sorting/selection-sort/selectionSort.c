#include <stdio.h>

//Time Complexity: O(n)
//Space Complexity: O(1)

void selectionSort(int array[], int size){
    int i, j, minimunIndex;
    for(i=0; i<size; i++){
        minimunIndex = i;

        for(j=i; j<size; j++){
            if(array[j] < array[minimunIndex]){
                minimunIndex = j;
            }
        }
        swap(&array[i], &array[minimunIndex]);
    }
}

void swap(int *left, int *right){
    int temp = *left;
    *left = *right;
    *right = temp;
}

int main(int argc, char const *argv[])
{
    int i;

    int array[] = {86,43,21,67,43,12,3,1,46,1,6,};
    int size = sizeof(array)/sizeof(array[0]);
    selectionSort(array, size);

    for(i=0; i<size; i++){
        printf("%d", array[i]);
    }//[1, 1, 3, 6, 12, 21, 43, 43, 46, 67, 86]
}
