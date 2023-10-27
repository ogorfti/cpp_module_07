/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogorfti <ogorfti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 12:32:43 by ogorfti           #+#    #+#             */
/*   Updated: 2023/10/27 15:16:27 by ogorfti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main()
{
	try
	{
		Array<int> test0(5);
		for (int i = 0; i < test0.size(); ++i)
			test0[i] = i;

		Array<int> test1(test0);

		for (int i = 0; i < test1.size(); ++i)
			std::cout << test1[i] << " ";
		std::cout << '\n';

		test1[4] = 1337;
	}
	catch(std::exception& e)
	{
		std::cout << e.what() << '\n';
	}
}
