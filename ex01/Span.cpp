#include "Span.hpp"

Span::Span() {
	if (this->span.empty())
		std::cout << "vector is empty" << std::endl;
}

Span::Span( unsigned int N ) : span(N) {
	std::cout << "the size of vector is : " << span.size() << std::endl;
}

Span::~Span() {}

Span::Span( const Span& other ) {
	// span.assign()
	this->span = other.span;
}

Span&	Span::operator=( const Span& other ) {
	if (this != &other) {

	}
	
	return *this;
}

void	Span::addNumber(int n) {
	this->span.push_back(n);
}

int	Span::shortestSpan()  {
	// if (this->span.empty() || this->span.size() < 2)
	// 	throw spanException();
	std::cout << "####### - Before Sorting - #######" << std::endl;
	for (size_t i = 0; i < span.size(); i++) {
		std::cout << "--> " << span[i] << std::endl;
	}
	std::cout << "####### - After Sorting - #######" << std::endl;
	std::vector<int>::iterator	it = this->span.begin();
	while (it != span.end())
	{
		std::cout << "in iterator" << std::endl;
		std::cout << *it << std::endl;
		it++;
	}
	
	sort(span.begin(), span.end());

	for (size_t i = 0; i < span.size(); i++) {
		std::cout << "--> " << span[i] << std::endl;
	}
	
	return 0;
}

int	Span::longestSpan() const {
	std::cout << "the size inside the longest is :" << this->span.size() <<std::endl;
	return 0;
}

/*--------------------------------*/
// std::ostream&	operator<<(std::ostream& streamOut, const Span& __unused obj) {
	
// 	return streamOut;
// }

/*--------------# spanException implementation #--------------*/

const char*	spanException::what() const throw() {
	return "SpanExceptionDetected";
}