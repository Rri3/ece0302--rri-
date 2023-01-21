#ifndef _ABSTRACT_BAG_HPP_
#define _ABSTRACT_BAG_HPP_

#include <cstdlib>

template<typename T>class AbstractBag
{
virtual size_t getCurrentSize() const = 0;
virtual bool isEmpty() const = 0;
virtual bool add(const T& entry) = 0;
virtual bool remove(const T& entry) = 0;
virtual void clear() = 0;
virtual size_t getFrequencyOf(const T& entry) const = 0;
virtual bool contains(const T& entry) const = 0;
};


#endif