#include "stdafx.h"
#include "QuestionList.h"
#include "QuestionInterface.h"

using std::ostream;
using std::endl;

QuestionList::QuestionList()
{
}


QuestionList::~QuestionList()
{
	for (auto question : questionVector)
		delete question;
}


void QuestionList::addQuestion(QuestionInterface* questionIn)
{
	questionVector.push_back(questionIn);
}

ostream&  QuestionList::outputQuestion(ostream& outputStream)
{
	for (int i = 0; i < questionVector.size(); ++i)
		outputStream << i << " )" << questionVector.at(i)->getQuestion() << endl;
}
ostream&  QuestionList::outputAnswer(ostream& outputStream)
{
	for (int i = 0; i < questionVector.size(); ++i)
		outputStream << i << " )" << questionVector.at(i)->getAnswer() << endl;
}


