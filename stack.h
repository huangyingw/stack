#include<iostream>
using namespace std;

#define StackSize 100 //suppose that the initial size of stack is 10
//typedef char DataType;//�ٶ�ջԪ�ص���������Ϊ�ַ�
template <class Type> class SeqStack
{
private:
	Type data[StackSize];//ע�⣬�˴��޶�������ĳ���
public:
	int top;
	void InitStack();
	Type Pop();
	Type StackEmpty();
	Type StackFull();
	void Push(int x);
	Type StackTop();
	int GetSize();//��ȡջ�ĳ���
	void ShowStack();
};

void Error(char* message)
{
	cout<<message<<endl;
}

//��ȡջ�ĳ���
template<class Type> int SeqStack<Type>::GetSize()
{
	return top+1;
}
 

//��ʾջ������
template<class Type> void SeqStack<Type>::ShowStack()
{
	for(int i=0;i<=top;i++)
	{
		cout<<data[i];
	}	
	cout<<endl;
}

//��ջ��
template<class Type> void SeqStack<Type>::InitStack()
{	//��˳��ջ�ÿ�
	top=-1;
} 

//��ջ��
template <class Type> Type SeqStack<Type>::StackEmpty()
{
	return top==-1;
} 

//��ջ��
template <class Type> Type SeqStack<Type>::StackFull()
{
	return top==StackSize-1;
} 

//��ջ
template <class Type> void SeqStack<Type>::Push(int x)
{
	if(StackFull())
	{
		Error("Stack overflow"); //���磬�˳�����
		cout<<Pop()<<endl;
	}
	data[++top]=x;//ջ��ָ���1��x��ջ
}

//��ջ
template <class Type> Type SeqStack<Type>::Pop()
{
	if(StackEmpty())
	{
		Error("Stack underflow"); //���磬�˳�����
		return -2;
	}
	return data[top--];//ջ��Ԫ�ط��غ�ջ��ָ���1
}

//ȡջ��Ԫ��
template <class Type> Type SeqStack<Type>::StackTop()
{
	if(StackEmpty())
		Error("Stack is empty");
	return data[top];
}
