#include<stdio.h>

int main(){

	int a = 10, b = 20, c = a+b;
	//printf("Sum of %d and %d is %d\n", a, b, c);
	char data[100];
	sprintf(data, "Sum of %d and %d is %d\n", a, b, c);
	printf("%s\n", data);

	char quote[] = "1 Search the Candle rather than cursing the Darkness";
	//printf("%s\n", quote);

	int i = 0;
	char word1[20], word2[20], word3[20];

	sscanf(quote, "%d %s %*s %*s %*s %s %s", &i, word1, word2, word3);
	printf("%d\n", i);
	printf("%s\n", word1);
	printf("%s\n", word2);
	printf("%s\n", word3);

	return 0;
}