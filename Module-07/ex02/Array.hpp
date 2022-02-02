#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <stdlib.h>
#include <iostream>
template <typename T>
class Array
{
	private:
		T				*_tab;
		unsigned int 	_n;

	public:

		Array<T>() : _tab(NULL), _n(0)
		{
			return ;
		}

		Array<T>(unsigned int n) : _n(n)
		{
			this->_tab = new T[n];
		}

		Array<T>(Array<T> const &copy)
		{
			this->_tab = new T[copy.size()];

			for (int index = 0; index < copy.size(); index++)
				this->_tab[index] = copy._tab[index];
			
			this->_n = copy._n;
		}

		~Array()
		{
			if (this->_n > 0)
				delete this->_tab;
		}

		Array<T>	&operator=(Array<T> const &copy)
		{
			this->_n = copy._n;
			if (copy._n > 0)
			{
				this->_tab = new T[_n];

				for (int index = 0; index < copy.size(); index++)
					this->_tab = copy._tab[index];
				return (*this);
			}
			this->_tab = NULL;
			return (*this);
		}

		T			&operator[](int index)
		{
			if (index >= (int)_n)
				throw Array<T>::OutOfRange();
			return this->_tab[index];
		}

		int			size() const
		{
			return this->_n;
		}

		class OutOfRange: public std::exception
		{
			virtual const char *what() const throw()
			{
				return "Out of limits";
			}
		};
};

#endif