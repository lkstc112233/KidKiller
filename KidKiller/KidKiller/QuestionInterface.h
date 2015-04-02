#pragma once
#include <string>
class QuestionInterface
{
public:
	QuestionInterface();
	virtual ~QuestionInterface();
//提供输出接口。
public:
	virtual std::string getQuestion()=0;
	virtual std::string getAnswer()=0;
};

