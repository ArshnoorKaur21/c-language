#include<stdio.h>
char printcharacter(char str[6]){
	int i=0;
	while(str[i]!='\0'){
		printf("%c",str[i]);
		i++;
	}printf("\n");
}
int main(){
	//char str[6]="harry";//if likhu isme indexing prbkm bcz small number hai
	char str[5]={'h','a','r','r','y'};//in this for str[5] garbage value will be printed at last
	//if str[6] //in this full harry will be printed if str[6] 
	printcharacter(str);
}
