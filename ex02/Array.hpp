/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogorfti <ogorfti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 12:32:41 by ogorfti           #+#    #+#             */
/*   Updated: 2023/10/27 15:16:34 by ogorfti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

template <typename T>
class Array
{
	private:
		T* arr;
		int len;
	public:
		Array() : arr(NULL), len(0){}
		Array(unsigned int n)
		{
			len = n;
			this->arr = new T[len];
		}
		Array(Array &other)
		{
			this->len = other.len;
			this->arr = new T[other.len];
			for (int i = 0; i < other.len; i++)
				this->arr[i] = other.arr[i];
		}
		T& operator=(Array& other)
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
		T& operator[](int index)
		{
			if (index < this->len)
				return (this->arr[index]);
			else
				throw std::out_of_range("Index out of range");
		}
		~Array()
		{
			delete[] this->arr;
		}
		int size() const {return this->len;}
};
