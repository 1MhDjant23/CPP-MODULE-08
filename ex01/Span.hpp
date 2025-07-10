#ifndef	__SPAN_HPP__
#define	__SPAN_HPP__

#include <iostream>
#include <exception>
#include <algorithm>
#include <vector>

/*--------# Span Class #--------*/

class	Span {
	private:
		unsigned int		capacity;
		std::vector<int>	span;
	public:
		Span();
		Span( unsigned int N );
		~Span();
		Span( const Span& other );
		Span&	operator=(const Span& other);
		void	addNumber(int n);
		int		shortestSpan() const;
		int		longestSpan() const;
};

// std::ostream&	operator<<(std::ostream& streamOut, const Span& obj);

/*--------# Customized Exception For Span #--------*/

class	spanException : public std::exception {
	public:
		const char* what() const throw();
};


#endif