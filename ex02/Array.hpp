/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogorfti <ogorfti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 12:32:41 by ogorfti           #+#    #+#             */
/*   Updated: 2023/10/28 11:19:10 by ogorfti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

//* returnType ClassName<T>::functionName()

/* When you use a template with a specific type, the compiler
generates the code for that type at compile time. This means
that the template's code must be available at the point of
instantiation. If the template's definition is in
a separate source file, the compiler won't have access
to it when you instantiate the template in a different
source file.*/
#include <iostream>

template <typename T>
class Array
{
	private:
		T* arr;
		int len;
	public:
		Array();
		Array(unsigned int n);
		Array(Array &other);
		T& operator=(Array& other);
		T& operator[](int index);
		~Array();
		int size() const;
};

template <typename T>
Array<T>::Array() : arr(NULL), len(0){}

template <typename T>
Array<T>::Array(unsigned int n)
{
	len = n;
	this->arr = new T[len];
}

template <typename T>
Array<T>::Array(Array &other)
{
	this->len = other.len;
	this->arr = new T[other.len];
	for (int i = 0; i < other.len; i++)
		this->arr[i] = other.arr[i];
}

template <typename T>
T& Array<T>::operator=(Array& other)
{
	if (this != &other)
	{
		this->len = other.len;
		delete[] this->arr;
		this->arr = new T[other.len];
		for (int i = 0; i < other.len; i++)
			this->arr[i] = other.arr[i];		
	}
	return (*this);
}

template <typename T>
Array<T>::~Array()
{
	delete[] this->arr;
}

template <typename T>
T& Array<T>::operator[](int index)
{
	if (index < this->len)
		return (this->arr[index]);
	else
		throw std::out_of_range("Index out of range");
}

template <typename T>
int Array<T>::size() const
{
	return this->len;
}
