#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#define MAX 2002
int main(){
	char str[MAX];

	printf("Nhap vao chuoi bat ki: ");
	fgets(str,MAX,stdin);
	str[strcspn(str,"\n")] = '\0';

	int position = 0;
	int maxLength = 0;

	int n = strlen(str);
	int i = 0;
	while(i<n){
		int j = i;
		int countWord = 0;
		while(str[j]!=' ' && j<n){ 
			j++;
			countWord++;
		}
		if(maxLength<countWord){
			position = i;
			maxLength = countWord;
		}
		i = j+1; 
	}

	printf("\nCac tu co do dai lon nhat la: %d \n",maxLength);
	i = 0;
	while(i<n){
		int j = i;
		int countWord = 0;
		while(str[j]!=' ' && j<n){ 
			j++;
			countWord++;
		}
		if(maxLength==countWord){
			for(int j=i;j<maxLength+i;j++){
				printf("%c",str[j]);
			}
			printf("\n");
		}
		i = j+1; 
	}
}

