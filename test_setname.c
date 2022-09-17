#include "types.h"
#include "user.h"


int main() {

	char user_input[100];

	gets(user_input, 16);
	printf(1, "User input is: %s\n", user_input);
	
	int length = setname(user_input);

	//length--;		// to account for the '\0' in gets()
	

	if(length < 1 || length > 15)
		printf(1, "Failed! Returned -1\n");
	else
	{
		printf(1, "Length of user_input is: %d\n", length);
		printf(1, "Characters are: %s\n", user_input);
	}


	exit();
}