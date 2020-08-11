#include<iostream>
namespace Jill {
	double fetch;
}
namespace myth {
	using Jill::fetch;
}
int main()
{
	//using Jill::fetch;
	//using namespace Jill;
	//double fetch=0;
	using myth::fetch;
	//std::cin >> fetch;
	fetch = 11;
	std::cout << fetch << std::endl;
}