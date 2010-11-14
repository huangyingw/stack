#include "stack.h"

int main()
{
	SeqStack<int> *S=new SeqStack<int>();
	S->InitStack();
	for(int i=1;i<20;i++)
	{
		S->Push(i);
	}
	cout<<"Now begin to show stack"<<endl;
	S->ShowStack();
	return 0;
}

