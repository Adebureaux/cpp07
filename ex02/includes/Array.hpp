#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>
#include <string>

template <typename T>
class Array
{
	public:
	Array(void) : _array(new T[0]), _size(0) {};
	Array(unsigned int n) : _array(new T[n]), _size(n) {};
	Array(const Array &other);
	Array &operator=(const Array &other);
	~Array(void)
	{
		if (_array)
			delete [] _array;
	};

	private:
	T *				_array;
	unsigned int	_size;
};

#endif
