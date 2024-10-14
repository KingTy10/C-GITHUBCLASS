#include <iostream>
#include <vector>
#include <set>
#include <unordered_set>
#include <map>

int Sets()
{

	std::set<int> Myset{};
		
	Myset.insert(100);
	Myset.insert(10);
	Myset.insert(3);
	Myset.insert(35);

	for (int i : Myset)
	{
		std::cout << i << std::endl;
	}

	
//std::map<int,
	return 0;
}
