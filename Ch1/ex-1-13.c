/*Write a program to print a histogram of the lengths of words in its input. It is easy to draw the histogram with the bars
horizontal; a vertical orientation is more challenging.*/

#include <stdio.h>

int main()
{
	int c; /*Input character*/
	int count;   /*count how many characters are in one word*/
	
	int distribution[11]; /*Distribution array*/
	
	/*Initialization of the array*/
	for (int i = 0; i< 11; i++){
		distribution[i] = 0;
	}
	
	/*Core algorithm*/
	c = getchar();
	while (c != EOF){
		if (c!=' ' && c!='\t' && c!='\n'){
			++count;
		} else if (count >0){
			if (count <= 10) {
				++distribution[count-1];
			} else {
				++distribution[10];
			}
			count = 0;
		}
		
		c = getchar();
	}
	printf("%d\n", distribution[10]);
	
	for (int i = 0; i<=10;i++) {
		printf("[%d]:",i+1);
		while (distribution[i] > 0){
			printf("x ");
			distribution[i]--;
		}
		printf("\n");
	}
	
	return 0;
}
