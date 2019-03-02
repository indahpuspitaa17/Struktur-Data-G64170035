#include <stdio.h>
   
struct data{
    int nim;
    char nama[20];
};
typedef struct data MHS;
    
void swap (MHS *a,MHS *b){
    MHS tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
}
    
void cetak(MHS x[100],int n){
    for (int i = 0; i < n; ++i)
    {
        printf("%d ", x[i].nim);
    }
    printf("\r\n");
}
   
void selectionSort(MHS x[100], int n) { 
    int i, j, min_idx; 
   
    // One by one move boundary of unsorted subarray 
    for (i = 0; i < n-1; i++) { 
        // Find the minimum element in unsorted array 
        min_idx = i; 
        for (j = i+1; j < n; j++) 
          if (x[j].nim < x[min_idx].nim) 
            min_idx = j; 
   
        // Swap the found minimum element with the first element 
        swap(&x[min_idx], &x[i]);
        cetak(x,n);
    } 
}   
 
int main(){
    MHS x[100];
    int n;
    
    scanf("%d", &n);
    for (int i = 0; i < n; ++i){
        scanf("%d %s",&x[i].nim,x[i].nama);
    }
    
    selectionSort(x,n);
     printf("Hasil akhir :\r\n");
    for (int i = 0; i < n; ++i)
    {
        printf("%d - %s\r\n", x[i].nim, x[i].nama);
            
    }
    
    return 0;
}
