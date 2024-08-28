#include <stdio.h>
#include <string.h>

int main(){
    int a = 0, b = 1, s = 0;
    char o[1] = "";
    printf("select a :  \n");
    scanf("%d",&a);
    printf("select an operator: \n");
    scanf("%s",o);
    printf("%s",o);
    printf("select b : \n");
    scanf("%d",&b);
    if ( o[1] == "+"){
        s = a + b ;
        printf("%d + %d = %d",a,b,s);
    }else{
    printf("error");}
    return 0;

}
