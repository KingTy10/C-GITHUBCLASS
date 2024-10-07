#include <iostream>
#include <vector>

int vector() 
{
	std::vector<int> myVec{};
	//std is the namespace so thing dont get messed up

	myVec.push_back(1);
	myVec.push_back(2);

	for (std::vector<int>::iterator it = myVec.begin(); it != myVec.end(); it++)
	{
		std::cout << *it << std::endl;

	}
	for (auto it = myVec.begin(); it != myVec.end(); it++)
	{


	}
	for (int i : myVec)
	{



	}
	for (auto i : myVec)
	{



	}
}

