//#ifndef POINTER_H
//#define POINTER_H
//
//class String;  //前置定义
//
//
////智能指针，对指针使用进行计数（在讲智能指针时讲过）
//class Pointer //智能指针
//{
//public:
//	Pointer();
//	Pointer(String const &n);
//	~Pointer();
//
//	String &operator*();  //对*进行重载
//	String *operator->() const;  //对->进行重载
//
//private:
//	String *ptr;
//	static String errorMessage;
//};
//
//#endif