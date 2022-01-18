//strings
#include<stdio.h>
int main(){
//char s[] = "geeksquiz";
//char arr[10]  = "geek";
//printf("%d\n",arr);
//printf("%d\n",&arr);//int*ptr=arr;
int arr2[4]={1,2,23,33};
printf("%d\n",arr2);//arr=&arr
printf("%d",&arr2);//isme chahe pointer point krao ya na same pointers ki trh chlega
//arr2++;cant increment
char*ptr="geek";//int*ptr=arr;
printf("%d\n",ptr);//this holds address of geek
printf("%d",&ptr);//this is address of ptr
ptr++;//valid
}
