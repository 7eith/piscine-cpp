#include "Span.hpp"

Span::Span()
{
    this->_N = 0;
    return ;
}

Span::Span(unsigned int N)
{
    this->_N = N;
    return ;
}

void Span::addNumber(int nb)
{
    try
    {
        if (this->lst.size() >= this->_N)
            throw Numberfault();
        this->lst.push_back(nb);
    }
    catch(const std::exception & e)
    {
        std::cerr << e.what() << '\n';
    }
}

int Span::shortestSpan()
{
    try
    {
        std::list<int>::const_iterator  it = this->lst.begin();
        std::list<int>::const_iterator  ite = it++;

        if (this->lst.size() <= 1)
            throw SpanEmpty();
        this->lst.sort();
        int i = this->lst.front();
        int j = *ite - i;
        return (j);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return (-1);
}

int Span::longestSpan()
{
    try
    {
        if (this->lst.size() <= 1)
            throw SpanEmpty();
        int i = this->lst.front();
        int j = this->lst.back() - i;
        return (j);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return (-1);
}


void Span::display()
{
    std::list<int>::const_iterator  it;
    std::list<int>::const_iterator  ite = this->lst.end();

    for (it = this->lst.begin(); it != ite; ++it)
    {
        std::cout << "list = [" << *it << "]" << std::endl;
    }
}

Span::~Span()
{
    return ;
}
