/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogorfti <ogorfti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 11:48:02 by ogorfti           #+#    #+#             */
/*   Updated: 2023/10/27 15:21:46 by ogorfti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

template <typename T>
void fun(T* data)
{
	std::cout << *data << '\n';
}

template <typename T>
void iter(T& add, int len, void (*fun)(T))
{
	for (int i = 0; i < len; i++)
		fun(&add[i]);
}
