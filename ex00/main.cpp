/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rertzer <rertzer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 17:24:09 by rertzer           #+#    #+#             */
/*   Updated: 2023/06/12 17:49:09 by rertzer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <vector>
#include <deque>
#include <list>
#include "easyfind.hpp"

int	main()
{
	std::vector<int>	myvector;
	myvector.assign(42, 42);
	myvector[24] = 24;

	std::vector<int>::iterator it = easyfind(myvector, 24);
	if (it != myvector.end())
		std::cout	<< "found value " << *it << std::endl;
	return 0;
}
