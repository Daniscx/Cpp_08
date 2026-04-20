/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmaestro <dmaestro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/16 16:49:34 by dmaestro          #+#    #+#             */
/*   Updated: 2026/04/20 16:29:56 by dmaestro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
Span::Span() : N(0)
{
    std::cout << " Span deafault constructor called" << std::endl;   
}
Span::Span(unsigned int n) : N(n)
{
    std::cout << "Span assignament constructor called" << std::endl;
    this->ct.resize(N);
}
Span::~Span()
{
    std::cout << "Span destructor called" <<  std::endl;
}
void Span::addMulipleNumbers(std::vector<int>::iterator begin, std::vector<int>::iterator last)
{
    for(;begin != last; begin++)
    {
        try{
             addNumber(*begin);
        }
        catch(std::exception &e)
        {
            std::cout<< "ERROR: " << e.what() << std::endl;
            return ;
        }
    }
}
void Span::addNumber(int n)
{
    static unsigned int actual_span = 0;
    if(actual_span == this->N)
        throw std::out_of_range("This Span is full");
    else
    {
        this->ct[actual_span] = n;
        actual_span++;
    }
}
bool less_than(int a, int  b)
{
    return(a < b);
}
bool more_than(int a, int b)
{
    return(a > b);
}

const char * Span::SpanFilled::what() throw()
{
    return("Span is full");
}
unsigned int Span::diff_Span(bool(comp)(int ,int))
{
    unsigned int diff;
       if(this->ct.size() == 1 || this->ct.empty())
            throw(SpanFilled());    
       std::vector<int>::iterator first_value = this->ct.begin();
       std::vector<int>::iterator seconnd_value = first_value + 1;;
       std::vector<int>::iterator end = this->ct.end();
       int neg = 0;
       neg = *seconnd_value - *first_value;
       if(neg < 0)
        neg = neg *(-1);
        diff = neg;
        first_value++;
        seconnd_value++;
        for(;first_value != end; first_value++ , seconnd_value++)
        {
               neg = *seconnd_value - *first_value;
            if(neg < 0)
            neg = neg *(-1);
            if(comp(neg, diff))
                diff = neg;
        }
        return(diff);
}

unsigned int Span::shortestSpan()
{
       
        return(diff_Span(less_than));
       
}
unsigned int Span::longestSpan()
{
    return(diff_Span(more_than));
}


