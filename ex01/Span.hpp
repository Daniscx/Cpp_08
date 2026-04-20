/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmaestro <dmaestro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/16 12:06:14 by dmaestro          #+#    #+#             */
/*   Updated: 2026/04/20 16:23:42 by dmaestro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include "iostream"
#include"algorithm"
#include "vector"

class Span
{
private:
    unsigned int N;
    std::vector<int> ct;
    unsigned int diff_Span(bool(comp)(int ,int));

public:
    Span();
    Span(unsigned int n);
    Span(const Span& other);
    Span operator=(const Span &other);
    unsigned int shortestSpan();
    unsigned int longestSpan();
    void addNumber(int n);
    class SpanFilled : public std::exception 
    {
        const char *what() throw();
    };
    void  addMulipleNumbers(std::vector<int>::iterator begin, std::vector<int>::iterator last); 
    ~Span();
    
};


#endif
