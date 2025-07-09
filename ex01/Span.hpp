#ifndef	__SPAN_HPP__
#define	__SPAN_HPP__

#include <iostream>
#include <vector>

class	Span {
	private:
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

#endif