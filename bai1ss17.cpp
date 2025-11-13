#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#define MAX 200
void inputString(char str[]);
int isPalindrome(char str[]);

int main(){
	char myString[MAX];

	inputString(myString);

	if(isPalindrome(myString)){
		printf("%s la palindrome",myString);
	}else{
		printf("%s khong phai la palindrome",myString);
	}
}

void inputString(char str[]){
	printf("Nhap vao 1 chuoi bat ki: ");
	fgets(str,MAX,stdin);
	str[strcspn(str,"\n")] = '\0';
}

int isPalindrome(char str[]){
	if(strlen(str)<1){
		return 0;
	}

	int n = strlen(str);
	for(int i=0;i<n/2;i++){
		if(str[i]!=str[n-1-i]){
			return 0;
		}
	}
	return 1;
}

