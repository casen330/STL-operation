//#ifndef STACK_H
//#define STACH_H
//
////ʹ��ģ������ƶ�ջ
//#include<exception>
//#include<deque>
//
//template<class T>
//class Stack{
//protected:
//	std::deque<T> c;
//public:
//	class ReadEmptyStack :public std::exception   //�̳б�׼�쳣������麯�� what����
//	{
//	public:
//		virtual const char *what() const throw()
//		{
//			return "Read empty stack!";
//		}
//	};
//
//	bool empty() const
//	{
//		return c.empty();
//	}
//	void push(const T& elem){
//		c.push_back(elem);
//	}
//	T pop()
//	{
//		if (c.empty())
//		{
//			throw ReadEmptyStack();
//		}
//		T elem(c.back());  //��ֵ��������c.back() ���ص�ֵ ���� T ���͵� elem
//		c.pop_back();
//		return elem;
//	}
//	T& top()
//	{
//		if (c.empty())
//			throw ReadEmptyStack();
//		return c.back();
//	}
//};
//#endif