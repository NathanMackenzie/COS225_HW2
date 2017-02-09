#include <stdio.h>

/*
 * @author: Nathan Mackenzie
 * @assignment: Homework 2
 *
 * @brief
 * This program ask the user for a number in base 10, and a new base in which to convert the number to.
 * Then prints the result on the screen. 
 */
int main(){
	while(1){
		int base_10;
		int convert;
		char conv_num[4];
		
		printf("\nPlease eneter a number to be converted (enter -1 to quit): ");
		scanf("%d", &base_10);
		if(base_10 == -1){
			break;
		}
		printf("Eneter a base in which to convert the number to (acceptable values are 2, 3, 4, 8, or 16): ");
		scanf("%d", &convert);
		
		int quotient = base_10;
		int remain;
		for(int i = 3; i >= 0; i--){
			remain = quotient % convert;
			quotient = quotient / convert;
			if(remain >= 10){
				conv_num[i] = 55 + remain;
			}else{
				conv_num[i] = remain + '0';
			}
			
		}
		
		printf("Your converted number is: ");
		printf("%s", conv_num);
	}
	return 1;
}