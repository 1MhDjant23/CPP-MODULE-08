#include "Span.hpp"

int	main() {
	Span	sp(5);

	std::vector<int> vv;
	vv.push_back(1);
	vv.push_back(2);
	vv.push_back(3);
	vv.push_back(4);
	vv.push_back(5);
	// vv.push_back(7);

	sp.addNumber(3);
	sp.addNumber(4);
	sp.addMoreNumber(vv.begin(), vv.end());

	// sp.addNumber(17);
	// sp.addNumber(9);
	// sp.addNumber(11);
	// sp.addNumber(13);
	// sp.addNumber(8);
	// sp.addNumber(-9);
	// sp.addNumber(4);
	// sp.addNumber(77);
	// sp.addNumber(0);
	// sp.addNumber(55);
	// sp.longestSpan();
	std::cout << "longest span is: " << sp.longestSpan() << std::endl;
	std::cout << "shortest span is: " << sp.shortestSpan() << std::endl;
	// std::cout << "the size of this span is :" <<std::endl;
	return 0;
}