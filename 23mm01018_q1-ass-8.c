#include <stdio.h>
void cyclic(int *a,int *b,int *c){
    int temp;
    temp=*c;
    *c=*b;
    *b=*a;
    *a=temp;
    
    
}
int main(){
    int x,y,z;
    printf("enter x : ");
    scanf("%d",&x);
    printf("\nenter y : ");
    scanf("%d",&y);
    printf("\nenter z : ");
    scanf("%d",&z);
    cyclic(&x,&y,&z);
    printf("\nafter circular shift -->");
    printf("\nx = %d",x);
    printf("\ny = %d",y);
    printf("\nz = %d",z);
}