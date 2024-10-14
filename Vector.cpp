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
	std::vector<int> myInts = std::vector<int>();
	for (int i = 0; i < 1000; i++)
	{
		myInts.push_back(i);

	}
	for (int i = 0; i < myInts.size(); i++)
	{
		std::cout << myInts.at(i) << std::endl;
		std::cout << myInts[i] << std::endl;
	}
	for (std::vector<int>::iterator it = myInts.begin(); it != myInts.end(); it++)
	{
		std::cout << *it << std::endl;
	}
	for (int i : myInts)
	{
		std::cout << i << std::endl;
	}
	for (auto i : myInts)
	{
		std::cout << i << std::endl;
	}
	std::vector<int> intss = std::vector<int>();
	int x = intss.front(); 
	int y = intss.back(); 
	std::vector<int > myint = {};
	myint.push_back(10);
	auto pos =myint.begin();
	myint.insert(pos, 100);
	return 0;
}


