//#ifndef STACK_H
//#define STACH_H
//
////使用模板类设计堆栈
//#include<exception>
//#include<deque>
//
//template<class T>
//class Stack{
//protected:
//	std::deque<T> c;
//public:
//	class ReadEmptyStack :public std::exception   //继承标准异常里面的虚函数 what（）
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
//		T elem(c.back());  //赋值方法，将c.back() 传回的值 赋给 T 类型的 elem
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