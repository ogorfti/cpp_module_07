/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogorfti <ogorfti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 11:08:30 by ogorfti           #+#    #+#             */
/*   Updated: 2023/10/27 11:44:37 by ogorfti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

//* condition ? expression_if_true : expression_if_false;

template <typename T> 
void swap(T& a, T& b)
{
	T tmp = b;
	b = a;
	a = tmp;
}

template <typename T> 
T& min(T& a, T& b)
{
	return (a < b) ? a : b;
}

template <typename T>
T& max(T& a, T& b)
{
	return (a > b) ? a : b;
}
