#include<stdio.h>

int reverse(int ar[],int n){
    int temp;
    for(int i = 0 ; i < n/2 ; i++){
        temp = ar[i];
        ar[i] = ar[n-i-1];
        ar[n-i-1] = temp;
    }
}

void print(int a[],int b){
    for(int i = 0 ; i < b ; i++){
        printf("%d",a[i]);
    }
    printf("\n");
}

int main() {
    int arr[6] = {1,2,3,4,5,6};
    print(arr,6);
    reverse(arr,6);
    print(arr,6);

    return 0 ;
}


// if u didnt get it break the program into small blocks,
// then try to understand,
// one by one each block.




// Easiest way acc to me (without any function)

// #include<stdio.h>

// int main() {
//     int arr[5] = {1,2,3,4,5};
//     int rarr[5];
//     for (int i = 0 ; i < 5 ; i++ ){
//         rarr[i] = arr[4-i];
//         }
    
//     for (int i = 0 ; i < 5 ; i++ ){
//         printf("%d ",rarr[i]);
        
//     }
//     return 0 ;
// }