#include "types.h"
#include "user.h"


int main() {
	char buffer[100];
	char user_input;

	int length = setname(buffer);
	gets(user_input, 16);


	if(length < 0 || length > 15)
		printf(1, "Failed! Returned -1");
	else
		printf(1, "Characters are: %s\n", user_input);


	exit();
}