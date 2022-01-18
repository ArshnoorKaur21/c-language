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
	char str[6]={'h','a','r','r','y'};//isme harry 5 k lie aage garbage value print hojegi
	//if str[6] ismefull harry aaega agr \0 na likhu
	printcharacter(str);
}
