#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>
#include <string.h>


//int 


int htoi (char hex[]);
int htoiGet () {
	int input, i, c, b, checkA, hexAnswer, a , inputC, arrL2, arrL;
	i =0;
	a = 0;
	b = 0;
	char hex [16];
	hexAnswer = 0; 
	memset (hex, 0, 16); //sets all 16 in the array to int 0

	
	while (i<15) {
		input = getchar();
			if (input >= '0' && input <= '9') {
				inputC = input - '0';
				a++;
				}
			else if (input >= 'A' && input <= 'F' || input == 'X') {
				inputC = input - 'A' + 10; 
				a++;
				}
			else if (input >= 'a' && input <= 'f' || input == 'x') {
				inputC = input - 'a' + 10;
				a++;
			}
			else if (input == 0 || input == '\n') {
			break;	
			}
			else {
				printf("Please print a number between 0-9 and/or a-f\n");
				break;

			}

	
		hex[i] = inputC;
		i ++ ;
	}	
		if (hex[1] == 33) {
					hex[1] = 0;
		}
		
		arrL = (sizeof(hex))/(sizeof(hex[0])) - (16-a);	
			while (arrL > 0) {    //algorithm for conversion
				hexAnswer += hex[arrL-1] * pow(16, b);
				arrL--;
				b++;
			}
	 
		printf("%d\n", hexAnswer);
}

int htoi (char hexa[]){
	int x, nDigit, digit;
	x = 0;
	int hexadecimal = 0;

	for (x=0; hexa[x] != '\0'; x++){
		digit = hexa[x];
		
		if (digit >= 'a' && digit <= 'f'){
			nDigit = digit - 'a' + 10;	
	}
		else if (digit >= 'A' && digit <= 'F') {
			nDigit = digit - 'A' + 10;
		}
		else if (digit >= '0' && digit <= '9') {
			nDigit = digit - '0';
		}
		hexadecimal = (hexadecimal * 16) + nDigit;  
	}
	return hexadecimal;
}

int main () {
int convert1 = htoi("0x25");
int convert2 = htoi("abcdef");
int convert3 = htoi("AbC123");


printf("If your hex is 0x25, then your decimal is:%d\n", convert1);
printf("If your hex is abcdef, then your decimal is:%d\n", convert2);
printf("If your hex is AbC123, then your decimal is:%d\n", convert3);
printf("Your turn!\n");

int convert = htoiGet();
printf("^ is your answer");
}
