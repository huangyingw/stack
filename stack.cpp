// 栈.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "stack.h"

int _tmain(int argc, _TCHAR* argv[])
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

