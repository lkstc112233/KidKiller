#pragma once

#include <vector>
#include <iostream>
class QuestionInterface;

class QuestionList
{
public:
	QuestionList();
	~QuestionList();
// 针对问题的操作
public:
	void addQuestion(QuestionInterface* questionIn);
// 针对输出的操作
public:
	std::ostream& outputQuestion(std::ostream& outputStream);
	std::ostream& outputAnswer(std::ostream& outputStream);
private:
	std::vector<QuestionInterface*> questionVector;
};

