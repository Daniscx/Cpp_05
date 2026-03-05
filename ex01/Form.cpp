/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmaestro <dmaestro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/05 15:11:33 by dmaestro          #+#    #+#             */
/*   Updated: 2026/03/05 15:55:38 by dmaestro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : name(), singRank(), executeRank(), sign(false)
{
  std::cout << "Form default constructor called"  << std::endl;
    
}

Form::Form(std::string& name, const int execrank, const int singrank) : name(name), executeRank(execrank), singRank(singrank)
{
    this->sign = false;
    std::cout << "Form assignament constructor called"  << std::endl;
    
}
 Form::Form(const Form& other): singRank(other.singRank), executeRank(other.executeRank)
 {
    this->name = other.name;
    this->sign = other.sign;
     std::cout << "Form copy constructor called"  << std::endl;

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
    return("Level too hight to:");
}
const char* Form::GradeTooLowException::what() const throw()
{
    return("Level to Low to");
}