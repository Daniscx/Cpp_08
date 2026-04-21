/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmaestro <dmaestro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 18:33:58 by dmaestro          #+#    #+#             */
/*   Updated: 2026/04/21 18:55:27 by dmaestro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
template <typename T> MutantStack::MutantStack() 
{
    this->c.begin();
    
   // std::cout << "MutantStack default constructor" << std::endl;
}
MutantStack::