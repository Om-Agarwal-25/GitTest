#include<stdio.h>
void main(){
    int a,c,d,e,f;
    float b;
    a=sizeof(int);
    b=sizeof(float);
    c=sizeof(long);
    d=sizeof(double);
    e=sizeof(char);
    f=sizeof(short);
    printf(" size of int datatype is %d\n",a);
    printf("size of float datatype is %f\n",b);
    printf("size of long datatype %d\n",c);
    printf("size of double datatype %d\n",d);
    printf("size of char datatype %d\n",e);
    printf("size of short datatype %d\n",f);
}