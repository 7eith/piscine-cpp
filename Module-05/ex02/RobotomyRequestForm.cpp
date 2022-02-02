#include "RobotomyRequestForm.hpp"
#include <stdlib.h>
#include <time.h>

RobotomyRequestForm::RobotomyRequestForm() : Form(), _target("Default")
{
	return ;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("RobotomyRequestForm", 72, 45), _target(target)
{
	return ;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &copy)
{
	*this = copy;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	return ;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &ass)
{
	if (&ass != this)
		this->_target = ass._target;
	return (*this);
}

void	RobotomyRequestForm::execute(Bureaucrat const & executor) const
{

	Form::execute(executor);
	if (this->getGexec() >= executor.getGrade() && this->getSign() == 1)
	{
		srand(time(NULL));
    	int x = rand() % 2 + 1;
		if (x == 1)
			std::cout << this->_target << " a bien été robotomizée !" << std::endl;
		else
			std::cout << this->_target << " n'a pas été robotomizée " << std::endl;
	}
}
