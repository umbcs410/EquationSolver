#ifndef READER_H
#define READER_H

#include "Expression.h"
#include <string>

class Expression;
class Reader {

	public:
		Reader(std::string exprStr);
		~Reader();
		std::string getExpressionString();
	protected:
	private:
		Expression* expression;

};

#endif