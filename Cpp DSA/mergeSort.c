#include<stdio.h>
#include<stdlib.h>

void printArray(int a[], int size){
    for (int k = 0; k < size; k++)
{
    printf("%d ", a[k]);
}
}

void merge(int a[], int low, int mid, int high) {
    int i = low;
    int j = mid+1;
    int k = low;
    int b[high-low+1];

    while(i<=mid && j<=high) {
        if(a[i] <= a[j]) {
            b[k] = a[i];
            i++;
        } else {
            b[k] = a[j];
            j++;
        }
        k++;
    }

   if(i>mid){
        while (j<=high)
        {
            b[k] = a[j];
            j++;
            k++;
        }
   } 
   if(j>high) {
        while (i<=mid)
        {
            b[k] = a[i];
            i++;
            k++;
    }
   }

    for(k = low; k<=high; k++) {
        a[k] = b[k];
    }
}

void mergeSort(int a[], int low, int high) {
    if(low<high){
    int mid = (low + high)/2;
    mergeSort(a,low,mid);
    mergeSort(a,mid+1,high);

    merge(a,low,mid,high);
    }
}

int main() {
int size;
int a[20];
printf("Enter size : ");
scanf("%d", &size);

printf("Enter elements : ");
for (int i = 0; i < size; i++)
{
    scanf("%d", &a[i]);
}
mergeSort(a,0,size-1);

printf("Sorted array : " );
printArray(a, size);
}