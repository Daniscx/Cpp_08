/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmaestro <dmaestro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/16 11:36:48 by dmaestro          #+#    #+#             */
/*   Updated: 2026/04/16 12:02:25 by dmaestro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "iostream"

template<typename T>

typename T::iterator  easyfind(T c,const int i)
{
    for(typename T::iterator it = c.begin() ; it != c.end(); it++)
        if(i == *it)
            return(it);
     throw std::out_of_range("No  value found");
            
}