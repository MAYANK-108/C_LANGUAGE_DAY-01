// in c language any non zero number means true
// watch this example written below:

#include<stdio.h>

int main(){

    if(108){
        printf("we wrote 108 still it is printed\n");
    }
    if ("True"){
        printf("we wrote true here and again it is printed \n");
    }
    if (23.4){
        printf("don't you think decimal is not equal to zero");
    }
    if (0){
        printf("hey i am zero i knows alr i will not be printed still im talking to you");
    }

    return 0 ;
}