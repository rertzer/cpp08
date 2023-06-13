/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rertzer <rertzer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 13:38:59 by rertzer           #+#    #+#             */
/*   Updated: 2023/06/13 15:17:06 by rertzer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int	main()
{
	MutantStack<int> myStack = MutantStack<int>();
	
	for (int i = 0; i < 43; i++)
		myStack.push(i);

	std::cout << "iterating on the MutantStack:\n";
	for (MutantStack<int>::iterator mit = myStack.begin(); mit != myStack.end(); mit++)
		std::cout << *mit << std::endl;

	std::cout << "const iterating on the MutantStack:\n";
	for (MutantStack<int>::const_iterator mit = myStack.begin(); mit != myStack.end(); mit++)
		std::cout << *mit << std::endl;

	std::cout << "reverse iterating on the MutantStack:\n";
	for (MutantStack<int>::reverse_iterator mit = myStack.rbegin(); mit != myStack.rend(); mit++)
		std::cout << *mit << std::endl;

	std::cout << "const reverse iterating on the MutantStack:\n";
	for (MutantStack<int>::const_reverse_iterator mit = myStack.rbegin(); mit != myStack.rend(); mit++)
		std::cout << *mit << std::endl;


	std::cout << "\npoping out\n";
	for (int i = 0; i < 43; i++)
	{
		std::cout << myStack.top() << std::endl;
		myStack.pop();
	}

	return 0;
}
