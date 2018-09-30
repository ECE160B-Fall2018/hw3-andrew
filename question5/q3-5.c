#include <stdio.h>
#include <string.h>


void reverse(char a[]) {
	int  b, c, d;

	for (b=0, d = strlen(a) -1; b < d; b++, d--) {
		c = a[b];
		a[b] = a[d];
		a[d] = c;
	}
	return;
}

void itoa (int integer, char a[], int width) {
	int j, pos, sign, pad;
	sign = integer;
	pos = 0;

	if (sign < 0) {
		integer = - integer;
	}
		
	integer = integer*10;
	while (integer /= 10) {
		a[pos] = integer%10 + '0';
		pos++;
	}
	if (sign < 0){
		pad = width - pos;
	}
	else {
		pad = width - pos + 1;
	}

	for (j=0; j < pad; j++) {
		a[pos++] = '0';
	}
	if (sign < 0) {
		a[pos++] = '-';
	}	

	a[pos] = '\0';
		
	reverse(a);
	
	return;
}




int main (){
	
	int test1Int = -12499919;
	char newString[14];
	itoa (test1Int, newString, 21);
	printf("\n%s", newString);
	
	int test2Int = 12003;
	char newString2[5];
	itoa (test2Int, newString2, 3);
	printf("\n%s", newString2);
	
	int test3Int = -13579;
	char newString3[6];
	itoa (test3Int, newString3, 8);
	printf("\n%s", newString3);
}
