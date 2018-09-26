#include <stdio.h>

int binSearch (int x, int v[], int n) {

	int low, high, mid, direction;

	low = 0;
	high = n - 1;
	

	while (low <= high && x != v[mid]) {
		mid = (low + high)/2;
		if (x<v[mid]) {
			high = mid - 1;
		}
		else {
			low = mid + 1;
		}
	}

	if (x == v[mid]) {
		return mid;
		}
	else {
		return -1;
	}
}

int main () {
	int arr1 [] = {0,1,2,3,4,5,6,7,8,9};
	int arr2 [] = {1,2,3,5,8,13,21};
	int arr3 [] = {2, 3, 5, 7, 11, 13, 17, 19};


	int search1 = binSearch(0, arr1, 10);
	int search2 = binSearch(5, arr2, 7);
	int search3 = binSearch(1, arr3, 8);


	printf("0 is located in v[%d]\n" , search1);
	printf("5 is located in v[%d]\n" , search2);
	printf("1 is located in v[%d]\n" , search3);

}
