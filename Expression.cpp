#include "headers/Expression.h"
#include <string>

Expression::Expression(std::string expr) {

	this->expression = expr;

}

std::string Expression::getExpression() {

	return this->expression;

}