#include "Span.hpp"

int	main() {
	Span	sp;

	sp.addNumber(8);
	sp.addNumber(-9);
	sp.addNumber(4);
	sp.addNumber(77);
	sp.addNumber(0);
	sp.addNumber(55);
	sp.longestSpan();

	sp.shortestSpan();
	// std::cout << "the size of this span is :" <<std::endl;
	return 0;
}