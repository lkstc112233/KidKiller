#pragma once
#include <string>
class QuestionInterface
{
public:
	QuestionInterface();
	virtual ~QuestionInterface();
//�ṩ����ӿڡ�
public:
	virtual std::string getQuestion()=0;
	virtual std::string getAnswer()=0;
};

