/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmaestro <dmaestro@student.42madrid.con    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/05 15:11:33 by dmaestro          #+#    #+#             */
/*   Updated: 2026/04/02 21:04:43 by dmaestro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : name(), sign(false), singRank(), executeRank()
{
  std::cout << "Form default constructor called"  << std::endl;
    
}

Form::Form(const std::string& name, const int execrank, const int singrank) : name(name), singRank(singrank) , executeRank(execrank)
{
    this->sign = false;
    if(singRank < 1 || executeRank < 1)
        throw GradeTooHightException();
    else if(singRank > 150 || executeRank > 150)
        throw GradeTooLowException();
    std::cout << "Form assignament constructor called"  << std::endl;
    
}
 Form::Form(const Form& other): singRank(other.singRank), executeRank(other.executeRank)
 {
    this->name = other.name;
    this->sign = other.sign;
     std::cout << "Form copy constructor called"  << std::endl;

 }
const std::string& Form::getName() const
{
    return(this->name);
}
void Form::beSigned(const Burocrats& burocrats)
{
    if(burocrats.GetGrade() <= this->singRank)
    {
         std::cout << burocrats << " signed " << *this << std::endl;
         this->sign = true;   
    }
    else
        throw GradeTooLowException();
       
}
Form::~Form()
{
    std::cout << "Form copy destructor called"  << std::endl;
}
Form  Form::operator=(const Form& other)
{
    return(Form(other));
}
const char* Form::GradeTooHightException::what() const throw()
{
    return("Level too hight");
}
const char* Form::GradeTooLowException::what() const throw()
{
    return("Level to Low");
}
std::ostream& operator<<(std::ostream& os, const Form& fixed)
{
    std::cout << fixed.getName();
    return(os);
}
