/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmaestro <dmaestro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/16 11:43:39 by dmaestro          #+#    #+#             */
/*   Updated: 2026/04/16 11:53:33 by dmaestro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <list>
#include "easyfind.hpp"

int main()
{
    std::cout << "=== TEST VECTOR ===" << std::endl;

    std::vector<int> v;
    for (int i = 0; i < 10; i++)
        v.push_back(i * 10);

    try
    {
        std::vector<int>::iterator it = easyfind(v, 30);
        std::cout << "Encontrado en vector: " << *it << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cout << "No encontrado en vector: " << e.what() << std::endl;
    }

    try
    {
        std::vector<int>::iterator it = easyfind(v, 999);
        std::cout << "Encontrado: " << *it << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cout << "No encontrado (vector): " << e.what() << std::endl;
    }

    std::cout << "\n=== TEST LIST ===" << std::endl;

    std::list<int> l;
    for (int i = 0; i < 5; i++)
        l.push_back(i * 3);

    try
    {
        std::list<int>::iterator it = easyfind(l, 6);
        std::cout << "Encontrado en list: " << *it << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cout << "No encontrado en list: " << e.what() << std::endl;
    }

    return 0;
}