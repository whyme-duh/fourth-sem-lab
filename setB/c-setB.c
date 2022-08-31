// this program is to accept the binary number with either 0110 or 1001
#include<stdio.h>
#include<conio.h>
#define max 100 

int main(){
    char str[max], f= 'a';
    int i;
    printf("Enter the string to be checked: ");
    scanf("%s", str);
    for (i =0;str[i]!= '\0'; i++){
        switch (f)
        {
        case 'a':
            if(str[i]=='a') {
                f ='b';

            }
            else{
                f='a';
            }
            break;
        case 'b':
            if(str[i] == 'b'){
                f='c';
            }
            else{
                f='b';
            }
            break;
        case 'c':
            if(str[i] == 'a'){
                f='d';
            }
            else{
                f='a';
            }
            break;
        case 'd':
            if(str[i] == 'a' || str[i] == 'b'){
                f='d';
            }
            break;
        
        default:
            break;
        }
    }
    if (f=='d'){
        printf("Given string %s is accepted", str);
    }
    else{
        printf("Given string %s is not accepted", str);
    }
    return 0;
}
