#include "types.h"
#include "user.h"


int main() {
	char arr[100];
	int num;

	gets(arr, 100);
	num	= atoi(arr);

	//printf(1, "n is %d\n", num);

	disable(num);
	exit();
}