/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmaestro <dmaestro@student.42madrid.con    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/05 14:53:50 by dmaestro          #+#    #+#             */
/*   Updated: 2026/04/09 16:23:55 by dmaestro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
#define AFORM_HPP

#include "Burocrats.hpp"
#include "stdbool.h"

class AForm
{
    protected :
    std::string name;
    bool sign;
    const int singRank;
    const int executeRank;
    public :
    AForm();
    AForm(const std::string& name, const int execrank, const int singrank);
    AForm(const AForm& other);
  virtual  ~AForm();
 const std::string &   getName() const ;
  void   beSigned(const Burocrats &burocrat);
 void   execute (Burocrats const & executor) const;
 virtual void   beExecute(Burocrats const & executor) const = 0;
   AForm operator=(const AForm& other);
    class Unsigned : public std::exception
    {
        public:
            const char* what() const throw();
    };
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
std::ostream& operator<<(std::ostream& os, const AForm& fixed);


#endif