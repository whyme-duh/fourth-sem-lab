#include<stdio.h>
#include<string.h>
char input[20];
int l;
int flag;

void q3(int i){
    if(input[i] == '\0'){
        flag =1;
    }
}
void q2(int i){
    if(i<l){
        if(input[i] == '1'){
            ++i;
            q3(i);
        }
    }
}

void q1(int i){
    if(i<l){
        if(input[i] == '0'){
            ++i;
            q2(i);
        }
    }
}

void q0(int i){
    if(i<l){
        int k=i;
        if(input[i] == '1'){
            k++;
            q0(k);
            q1(k);
        }
        else{
            if(input[i] == '0'){
                i++;
                q0(i);
            }
        }
    }
}

int main(){
    printf("\n Enter a string \t:");
    gets(input);
    l = strlen(input);
    int i=0;
    flag = 0;
    q0(i);
    if(flag == 1){
        printf("\n The string is accepted.");
    }
    else{
        printf("\n The string is not accepted.");
        return 0;
    }
}