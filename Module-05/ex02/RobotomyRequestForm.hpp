#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"

class  RobotomyRequestForm : public Form
{
	private:
		std::string _target;

	public:
		RobotomyRequestForm();
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm(RobotomyRequestForm const &copy);
		~RobotomyRequestForm();

		RobotomyRequestForm &operator=(RobotomyRequestForm const&);
		void	execute(Bureaucrat const & executor) const;
};

#endif
