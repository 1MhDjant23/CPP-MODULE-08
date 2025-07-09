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