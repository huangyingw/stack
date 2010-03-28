#include<iostream>
using namespace std;

#define StackSize 100 //suppose that the initial size of stack is 10
//typedef char DataType;//假定栈元素的数据类型为字符
template <class Type> class SeqStack
{
private:
	Type data[StackSize];//注意，此处限定了数组的长度
public:
	int top;
	void InitStack();
	Type Pop();
	Type StackEmpty();
	Type StackFull();
	void Push(int x);
	Type StackTop();
	int GetSize();//获取栈的长度
	void ShowStack();
};

void Error(char* message)
{
	cout<<message<<endl;
}

//获取栈的长度
template<class Type> int SeqStack<Type>::GetSize()
{
	return top+1;
}
 

//显示栈的内容
template<class Type> void SeqStack<Type>::ShowStack()
{
	for(int i=0;i<=top;i++)
	{
		cout<<data[i];
	}	
	cout<<endl;
}

//置栈空
template<class Type> void SeqStack<Type>::InitStack()
{	//将顺序栈置空
	top=-1;
} 

//判栈空
template <class Type> Type SeqStack<Type>::StackEmpty()
{
	return top==-1;
} 

//判栈满
template <class Type> Type SeqStack<Type>::StackFull()
{
	return top==StackSize-1;
} 

//进栈
template <class Type> void SeqStack<Type>::Push(int x)
{
	if(StackFull())
	{
		Error("Stack overflow"); //上溢，退出运行
		cout<<Pop()<<endl;
	}
	data[++top]=x;//栈顶指针加1后将x入栈
}

//退栈
template <class Type> Type SeqStack<Type>::Pop()
{
	if(StackEmpty())
	{
		Error("Stack underflow"); //下溢，退出运行
		return -2;
	}
	return data[top--];//栈顶元素返回后将栈顶指针减1
}

//取栈顶元素
template <class Type> Type SeqStack<Type>::StackTop()
{
	if(StackEmpty())
		Error("Stack is empty");
	return data[top];
}
