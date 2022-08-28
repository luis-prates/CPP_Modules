#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <string>
# include <cstdio>
# include <cstdlib>
# include <exception>
# include <vector>
# include <algorithm>
# include <numeric>

class Span
{
    public:
        Span(uint N = 0);
        Span(Span const &src);
        Span &operator=(Span const &src);
        ~Span();
		unsigned int	size() const;
		void			addNumber(int number);
		unsigned int	shortestSpan();
		unsigned int	longestSpan();
		void			fill_span(std::vector<int>::iterator begin, std::vector<int>::iterator end);
		void			print();

    private:
		uint				_maxSize;
		std::vector<int>	*_span;
};

#endif
