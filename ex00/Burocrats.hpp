/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Burocrats.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmaestro <dmaestro@student.42madrid.con    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/28 12:42:04 by dmaestro          #+#    #+#             */
/*   Updated: 2026/02/28 15:32:42 by dmaestro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUROCRATS_HPP
# define BUROCRATS_HPP

#include "stdlib.h"
#include "exception"
#include "iostream"

class Burocrats {
    
    private:
    const std::string name;
    int grade;
    public:
    Burocrats();
    Burocrats(const std::string &name, const int& Grade);
    Burocrats(const Burocrats& other);
    Burocrats operator=(const Burocrats& other);
    ~Burocrats();
    void IncreaseGrade();
    void DecreaseGrade();
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
   const  std::string& getName() const;
   const     int&    GetGrade() const;

};
std::ostream& operator<<(std::ostream& os, const Burocrats& fixed);

#endif