/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmaestro <dmaestro@student.42madrid.con    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/05 15:11:33 by dmaestro          #+#    #+#             */
/*   Updated: 2026/04/07 18:57:19 by dmaestro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm() : name(), sign(false), singRank(), executeRank()
{
  std::cout << "Form default constructor called"  << std::endl;
    
}

AForm::AForm(const std::string& name, const int execrank, const int singrank) : name(name), singRank(singrank) , executeRank(execrank)
{
    this->sign = false;
    if(singRank < 1 || executeRank < 1)
        throw GradeTooHightException();
    else if(singRank > 150 || executeRank > 150)
        throw GradeTooLowException();
    std::cout << "Form assignament constructor called"  << std::endl;
    
}
 AForm::AForm(const AForm& other): singRank(other.singRank), executeRank(other.executeRank)
 {
    this->name = other.name;
    this->sign = other.sign;
     std::cout << "Form copy constructor called"  << std::endl;

 }
const std::string& AForm::getName() const
{
    return(this->name);
}
AForm::~AForm()
{
   std::cout << "Aform destructor called" << std::endl; 
}

AForm::~AForm()
{
    std::cout << "Form copy destructor called"  << std::endl;
}
void AForm::beSigned(const Burocrats& burocrats)
{
    if(burocrats.GetGrade() <= this->singRank)
    {
         std::cout << burocrats << " signed " << *this << std::endl;
         this->sign = true;   
    }
    else
        throw GradeTooLowException();
    
}
const char* AForm::Unsigned::what() const throw()
{
    return("Is unsigned");
}

void AForm::execute(const Burocrats& executor)const
{
    if(this->sign != true)
        throw(Unsigned());
    if(executor.GetGrade() > this->singRank)
        throw(GradeTooHightException());
    
}
//AForm  AForm::operator=(const AForm& other)
//{
  //  return(AForm(other));
//}
const char* AForm::GradeTooHightException::what() const throw()
{
    return("Level too hight");
}
const char* AForm::GradeTooLowException::what() const throw()
{
    return("Level to Low");
}
std::ostream& operator<<(std::ostream& os, const AForm& fixed)
{
    std::cout << fixed.getName();
    return(os);
}
