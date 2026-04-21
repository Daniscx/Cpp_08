/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmaestro <dmaestro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 18:11:52 by dmaestro          #+#    #+#             */
/*   Updated: 2026/04/21 19:40:50 by dmaestro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iostream"
#include "vector"
#include "algorithm"
#include "stack"
#include "stdint.h"

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

template <typename T>

/*Hay que emular el comportamiento de un stack no utilizarlo  
    es cosa de herencia y esas cosas por lo demas es chill*/
class MutantStack : public std::stack<T>
{
private:
    
public:
    MutantStack();
    ~MutantStack();
   
    using iterator = typename <T> std::stack<T>::container_type::iterator
    iterator begin();
    iterator end();

};

#endif