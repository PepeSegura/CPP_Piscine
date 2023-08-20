/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psegura- <psegura-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 19:08:22 by psegura-          #+#    #+#             */
/*   Updated: 2023/08/21 01:03:17 by psegura-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <fstream>

#pragma once

# include "AForm.hpp"
# include <sys/time.h>

class ShrubberyCreationForm : public AForm
{
    public:
        ShrubberyCreationForm();
        ShrubberyCreationForm(const std::string target);
        ShrubberyCreationForm(const ShrubberyCreationForm &f);
        ~ShrubberyCreationForm();
        ShrubberyCreationForm& operator=(const ShrubberyCreationForm &f);

        virtual void            execute(Bureaucrat const &executor) const;

    private:
        const std::string _target;

};
