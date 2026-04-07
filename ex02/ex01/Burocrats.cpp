/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Burocrats.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmaestro <dmaestro@student.42madrid.con    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/28 14:34:20 by dmaestro          #+#    #+#             */
/*   Updated: 2026/04/07 19:08:13 by dmaestro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Burocrats.hpp"
#include "AForm.hpp"

Burocrats::Burocrats() : name("default_Burocrat")
{
    std::cout << "Burocrats default constructor caled" << std::endl;
    this->grade = 75;
}
Burocrats::Burocrats(const std::string &name, const int& Grade) : name(name)
{
    std::cout << "Burocrats asignation constructor called" << std::endl;
    if(Grade < 1)
        throw GradeTooHightException();
    else if(Grade > 150)
        throw GradeTooLowException();
    this->grade = Grade;
}
Burocrats::Burocrats(const Burocrats& other) : name(other.name)
{
    std::cout << "Burocrats copy constructor called" << std::endl;
    this->grade = other.grade;
}
const char* Burocrats::GradeTooHightException::what() const throw()
{
    return("EXCEPTION::Too Hight level");
}
const char* Burocrats::GradeTooLowException::what() const throw()
{
    return("EXCEPTION::Too Low level");
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
void Burocrats::singForm(AForm &form)
{
   try{
    form.beSigned(*this); 
   } 
   catch(std::exception &e)
   {
    std::cerr << *this << "couldn't sing" << form << " because " << e.what() << std::endl;
   }
}
Burocrats::~Burocrats()
{
    std::cout << "Burocrats destructor called" << std::endl;
}
const std::string& Burocrats::getName() const
{
    return(this->name);
}
 void Burocrats::executeForm(AForm const & form) const 
{
    try
    {
        form.execute(*this);
        std::cout << *this << "execute" << form << std::endl;
        form.beExecute(*this);
    }
    catch(const std::exception& e)
    {
        std::cerr << *this  << "couldn't execute " << form << "because " << e.what() << std::endl;
    }
    
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
