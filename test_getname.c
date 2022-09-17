#include "types.h"
#include "user.h"


int main() {
	char buffer[100];
	int length = getname(buffer);

	printf(1, "Process name is: %s\n", buffer);
	printf(1, "Name is %d characters long\n", length);
	
	exit();
}