/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmaestro <dmaestro@student.42madrid.con    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/05 14:53:50 by dmaestro          #+#    #+#             */
/*   Updated: 2026/04/02 20:48:54 by dmaestro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include "Burocrats.hpp"
#include "stdbool.h"

class Form
{
    private :
    std::string name;
    bool sign;
    const int singRank;
    const int executeRank;
    public :
    Form();
    Form(const std::string& name, const int execrank, const int singrank);
    Form(const Form& other);
 const std::string &   getName() const ;
    ~Form();
  void   beSigned(const Burocrats &burocrat);
   Form operator=(const Form& other);

    class GradeTooHightException : public std::exception
    {
        public:
            const char* what() const throw();
    };
    class GradeTooLowException : public std::exception
    {
        public:
            const char* what() const throw();
    };
};
std::ostream& operator<<(std::ostream& os, const Form& fixed);


#endif