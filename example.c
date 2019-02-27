#include <stdio.h>
#include "pafs.h"

int main(void)
{
	/* const char *name = "Joe"; */
	/* printf(AF_FMT("hello\n")); */

	/* printf(AF_FMT("hello my name is ", name, " I am ", */
	/* 	      22, " days old\n")); */


	AF_PRINT(1);
	AF_PRINT("\n");
	AF_PRINT(1, 2);
	AF_PRINT("\n");
	AF_PRINT(1, 2 ,3);
	AF_PRINT("\n");
	AF_PRINT(1, 2, 3, 4);
	AF_PRINT("\n");
	AF_PRINT(1, 2, 3, 4, 5);
	AF_PRINT("\n");
	AF_PRINT(1, 2 ,3 ,4, 5, 6);
	AF_PRINT("\n");
	AF_PRINT(1, 2, 3, 4, 5, 6, 7);
	AF_PRINT("\n");
	AF_PRINT(1, 2, 3, 4, 5, 6, 7, 8);
	AF_PRINT("\n");
	AF_PRINT(1, 2, 3, 4, 5, 6, 7, 8, 9);
	AF_PRINT("\n");
	AF_PRINT(1, 2, 3, 4, 5, 6, 7, 8, 9, 10);
	AF_PRINT("\n");
	AF_PRINT(1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11);
	AF_PRINT("\n");
}
