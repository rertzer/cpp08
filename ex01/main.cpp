/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rertzer <rertzer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 10:42:33 by rertzer           #+#    #+#             */
/*   Updated: 2023/06/13 12:13:52 by rertzer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"


int	main()
{
	Span sp = Span(5);
	try
	{
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch (const std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		for (int i = 0; i < 7; i++)
		{
			sp.addNumber(i);
		}
	}
	catch (const std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch (const std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

	std::vector<int> vektor (12000, 42);

	try
	{
		sp.addRange(vektor);
	}
	catch(const std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

	Span bigsp(15000);
	try
	{
		bigsp.addRange(vektor);
	}
	catch(const std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		std::cout << bigsp.shortestSpan() << std::endl;
		std::cout << bigsp.longestSpan() << std::endl;
	}
	catch (const std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

	return 0;
}
