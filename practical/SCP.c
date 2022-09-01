#include<stdio.h>
#define SIZE 3 // this is the frame size

int full = 0;
int a[21];
int ref[SIZE];
int frame[SIZE];
int repptr = 0;
int count = 0;
int display(){
    int i;
    printf("\n The elements in the frame are :" );
    for(i=0;i<full;i++){
        printf("%d \t", frame[i]);
    }
}
int PageRep(int ele){
    int temp;
    while(ref[repptr]!=0){
        ref[repptr++] = 0;
        if(repptr == SIZE){
            repptr= 0;
        }
    }
    temp = frame[repptr];
    frame[repptr] = ele;
    ref[repptr] =  1; // The latest page reference, hence it is set to 1
    return temp;
}

int Pagefault(int ele){
    if(full!= SIZE){
        ref[full] = 1; // All the ref bits are set to 1 as each frame is begin filled firstly
        frame[full++] = ele;
    }
    else{
        printf("The page replaced is %d", PageRep(ele));
    }
}
int Search(int ele){
    int i, flag =0;
    if(full!=0){
        for(i=0;i<full;i++){
            if(ele == frame[i]){
                flag = 1;
                ref[i] =1 ;
                break;
            }
        }
        
    }
    return flag;
}

int main(){
    
    int n,i;
    printf("The no. of elemetns in the reference string are :");
    scanf("%d", &n);
    printf("\n Enter elements : ");
    for(i=1;i<=n;i++){
        scanf("%d", &a[i]);
    }
    printf("\n The elements present in the string are \n: ");
    for(i=1;i<=n;i++){
        printf("%d \t ", a[i]);
    }
    printf("\n\n");
    for(i=0;i<n;i++){
        if(Search(a[i]) != 1){
            Pagefault(a[i]);
            count++;
            display();
            
        }
       
    }
    printf("\n The no. of page faults are %d \n", count);
    return 0;
}