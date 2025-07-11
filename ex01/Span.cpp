#include "Span.hpp"

Span::Span() {
	this->capacity = 0;
	if (this->span.empty())
		std::cout << "vector is empty" << std::endl;
}

Span::Span( unsigned int N ) {
	this->capacity = N;
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
	for (size_t i = 0; i < this->span.size(); i++)
	{
		std::cout << "------ " << span[i] << std::endl;
	}
	std::cout << span.size() << " is the size" << std::endl;
	std::cout << capacity << " is the capacity" << std::endl;
	std::cout << capacity - span.size()<< " is the ca" << std::endl;
	return shortSpan;
}

int	Span::longestSpan() const {
	if (this->span.empty() || this->span.size() < 2)
		throw spanException();
	std::vector<int>	sortVect = this->span;
	std::sort(sortVect.begin(), sortVect.end());
	int	longSpan = sortVect[this->span.size() - 1] - sortVect[0];
	return longSpan;
}

void	Span::addMoreNumber(const std::vector<int>::iterator& start, const std::vector<int>::iterator& final) {
	if (start == final) {
		std::cerr << "Passed empty vector!" << std::endl;
		return ;
	}
	std::vector<int>::iterator	it = start;
	for (size_t i = 0; i < this->capacity - this->span.size() + 1; i++) {
		if (it == final)
			break;
		this->span.push_back(*it);
		it++;
	}
	
		std::cout << "#################" << std::endl;
	// std::cout << "start is: " << *start << std::endl;
	// std::cout << "hiiii" << std::endl;
	
	// std::cout << "final is: " << *final << std::endl;
}

/*--------------------------------*/
// std::ostream&	operator<<(std::ostream& streamOut, const Span& __unused obj) {
	
// 	return streamOut;
// }

/*--------------# spanException implementation #--------------*/

const char*	spanException::what() const throw() {
	return "SpanExceptionDetected";
}