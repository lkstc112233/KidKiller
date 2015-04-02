#pragma once

#include <vector>
#include <iostream>
class QuestionInterface;

class QuestionList
{
public:
	QuestionList();
	~QuestionList();
// �������Ĳ���
public:
	void addQuestion(QuestionInterface* questionIn);
// �������Ĳ���
public:
	std::ostream& outputQuestion(std::ostream& outputStream);
	std::ostream& outputAnswer(std::ostream& outputStream);
private:
	std::vector<QuestionInterface*> questionVector;
};

