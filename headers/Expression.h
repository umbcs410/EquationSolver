#ifndef EXPRESSION_H
#define EXPRESSION_H

#include <string>

class Expression {

	public:
		Expression(std::string);
		std::string getExpression();
	protected:
	private:
		std::string expression;

};

#endif