#include "Span.hpp"

Span::Span() {
	this->capacity = 0;
	if (this->span.empty())
		std::cout << "vector is empty" << std::endl;
}

Span::Span( unsigned int N ) {
	this->capacity = N;
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
	if (this->span.size() < this->capacity)
		this->span.push_back(n);
	else
		throw spanException();
}

int	Span::shortestSpan() const {
	if (this->span.empty() || this->span.size() < 2)
		throw spanException();
	std::vector<int>	sortedVect = this->span;
	std::sort(sortedVect.begin(), sortedVect.end());
	int	shortSpan = INT_MAX;
	for (size_t i = 0; i < sortedVect.size() - 1; i++) {
		if (sortedVect[i + 1] - sortedVect[i] < shortSpan)
			shortSpan = sortedVect[i + 1] - sortedVect[i];
	}
	return shortSpan;
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