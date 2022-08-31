// this program is to accept the binary number ending with 11
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
            if(str[i]=='1') {
                f ='b';

            } 
            else {
            	f='a';
			}
            break;
        case 'b':
            if(str[i] == '1'){
                f='c';
            }
            else{
                f='a';
            }
            break;
        case 'c':
            if(str[i] == '1'){
                f='c';
            }
            else{
                f='a';
            }
            break;
        
        default:
            break;
        }
    }
    if (f=='c'){
        printf("Given string %s is accepted", str);
    }
    else{
        printf("Given string %s is not accepted", str);
    }
    return 0;
}
