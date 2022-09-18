#include "types.h"
#include "user.h"


int main() {

	char user_input[100];

	gets(user_input, 16);
	printf(1, "User input is: %s\n", user_input);
	
	int lengthWith0 = strlen(user_input);

	//int length = setname(user_input);
	

	//printf(1, "No. of characters are: %d\n", lengthWith0-1);


	if(lengthWith0-1 < 1 || lengthWith0-1 > 15)
		printf(1, "Failed! Returned -1\n");
	else
	{
		int length = setname(user_input);
		printf(1, "Length of user_input is: %d\n", length-1);
		printf(1, "New characters are: %s\n", user_input);
	}


	exit();
}