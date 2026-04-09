/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmaestro <dmaestro@student.42madrid.con    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/09 16:31:49 by dmaestro          #+#    #+#             */
/*   Updated: 2026/04/09 18:34:04 by dmaestro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP
 #include "RobotomyRequestForm.hpp"
 #include "PresidentialPardonForm.hpp"
 #include "ShrubberyCreationForm.hpp"
 class Intern
 {
    
    public:
    Intern();
    ~Intern(); 
    AForm *makeForm(const std::string& name, const std::string& target);
    class FormNotFound : public std::exception
    {
        public:
            const char* what() const throw();
    };
     
 };

 #endif