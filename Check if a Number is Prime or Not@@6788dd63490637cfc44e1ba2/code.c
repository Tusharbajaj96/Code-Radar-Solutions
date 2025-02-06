#include <stdio.h>
int main(){
    int a,i,prime=1;
    scanf("%d",&a);
    if(a>1){
        for(i=2;i*i<=a;i++){
            if(a%i==0){
                prime=0;
                break;}}


            }
            if(prime){
                printf("Prime");


            }
            else{
                printf("Not Prime");
            }
            return 0;
        }
    