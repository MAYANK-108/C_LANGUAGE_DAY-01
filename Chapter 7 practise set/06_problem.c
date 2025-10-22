#include<stdio.h>
int countpositive(int arr[],int n ){
    int no_of_pintegers=0;
    for(int i = 0 ; i < n ; i++){
        if(arr[i]>0){
            no_of_pintegers++;
        }
    }
    printf("%d positive integers are in the array\n",no_of_pintegers);
}
int main() {
    int arr[12] = {1,-1,2,-2,3,-3,4,-4,5,-5,6,-6};
    countpositive(arr,12);

    return 0 ;
}