/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psegura- <psegura-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 19:08:22 by psegura-          #+#    #+#             */
/*   Updated: 2023/08/21 00:38:18 by psegura-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include "AForm.hpp"
# include <sys/time.h>

class RobotomyRequestForm : public AForm
{
    public:
        RobotomyRequestForm();
        RobotomyRequestForm(const std::string target);
        RobotomyRequestForm(const RobotomyRequestForm &f);
        ~RobotomyRequestForm();
        RobotomyRequestForm& operator=(const RobotomyRequestForm &f);

        virtual void            execute(Bureaucrat const &executor) const;

    private:
        const std::string _target;

};
