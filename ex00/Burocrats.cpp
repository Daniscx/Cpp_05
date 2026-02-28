/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Burocrats.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmaestro <dmaestro@student.42madrid.con    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/28 14:34:20 by dmaestro          #+#    #+#             */
/*   Updated: 2026/02/28 15:38:47 by dmaestro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Burocrats.hpp"

Burocrats::Burocrats() : name("")
{
    std::cout << "Burocrats default constructor caled" << std::endl;
    this->grade = 0;
}
Burocrats::Burocrats(const std::string &name, const int& Grade) : name(name)
{
    std::cout << "Burocrats asignation constructor called" << std::endl;
    this->grade = Grade;
}
Burocrats::Burocrats(const Burocrats& other) : name(other.name)
{
    std::cout << "Burocrats copy constructor called" << std::endl;
    this->grade = other.grade;
}
const char* Burocrats::GradeTooHightException::what() const throw()
{
    return("EXCEPTION::Too Hight level to  be Increased");
}
const char* Burocrats::GradeTooLowException::what() const throw()
{
    return("EXCEPTION::Too Low level to  be Decreased");
}
void Burocrats::IncreaseGrade()
{
    if(this->grade > 1)
        this->grade--;
    else
        throw GradeTooHightException();
    
}
Burocrats Burocrats::operator=(const Burocrats& other)
{
   
    return( Burocrats(other));
}
void Burocrats::DecreaseGrade()
{
    if(this->grade < 150)
        this->grade++;
    else
        throw GradeTooLowException();
}
Burocrats::~Burocrats()
{
    std::cout << "Burocrats destructor called" << std::endl;
}
const std::string& Burocrats::getName() const
{
    return(this->name);
}
const int& Burocrats::GetGrade() const
{
    return(this->grade);
}
std::ostream& operator<<(std::ostream& os, const Burocrats& Burocrats)
{
    std::cout << Burocrats.getName() << " bureaucrat grade " << Burocrats.GetGrade() ;
    return(os);
}
