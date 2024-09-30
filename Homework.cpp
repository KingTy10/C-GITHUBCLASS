#include <iostream>
#include <cstdio>
int main()
//if i is divisible by 3 and 5 write fizzbuzz}
{
	int num;
	for (int i = 1; i <= 100; i++)
	{


		if ((i % 5 == 0) && (i % 3 == 0))
		{
			std::cout << "test" << std::endl;

			printf("%s\n", "fizzbuzz");
		}
		else if (i % 5 == 0)
		{
			printf("%s\n", "fizz");
		}
		else if (i % 3 == 0)
		{
			printf("%s\n", "buzz");



		}
	}
	return 0;
	/*if ((num % 5 == 0) && (num % 3 == 0))
	{

		printf("%d\n", num);
	}
	else
	{
		printf("number is not divisible by 5 and 3");
	}*/
	/*return 0;*/
	//sentax for the condionial branching was from a website called CodeforWin i wasnt sure if C++ sentax works similiar to C

}
