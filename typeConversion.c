#include<stdio.h>
#include<string.h>


int main(){

char  num1[5]="1234";
char  num2[5]="3214";
int num=0;
int x=0;
int y=0;

for(int i=0;i<strlen(num1);i++){
    x=x*10+num1[i]-'0';

}
for(int j=0;j<strlen(num2);j++){
    y=y*10+num2[j]-'0';

}



printf("%d",x+y);

    return 0;
}