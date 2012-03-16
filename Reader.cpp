#include "headers/Reader.h"
#include <string>

Reader::Reader(std::string exprStr) {

	this->expression = new Expression(exprStr);

}

Reader::~Reader() {

}

std::string Reader::getExpressionString() {

	return this->expression->getExpression();	

}