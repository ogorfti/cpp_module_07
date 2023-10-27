/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogorfti <ogorfti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 11:48:02 by ogorfti           #+#    #+#             */
/*   Updated: 2023/10/27 12:28:16 by ogorfti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

void fun(void *data)
{
	(void)data;
	std::cout << "funcPtr called!" << '\n';
}

template <typename addr, typename length, typename func>
void iter(addr add, length len, func (*fun)(void *))
{
	for (int i = 0; i < len; i++)
		fun(&add[i]);
}
