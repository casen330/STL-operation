//#include"string.h"
//#include"pointer.h"
//
//Pointer::Pointer() : ptr(0) {}
//
//Pointer::Pointer(String const &n){
//	ptr = new String(n);
//}
//
//Pointer::~Pointer()
//{
//	delete ptr;
//}
//
//String Pointer::errorMessage("Uninitialized pointer"); //错误信息
//
//String &Pointer::operator*() //得到的是指针所指向的对象
//{
//	if (!ptr)
//	{
//		throw errorMessage;
//	}
//	return *ptr;
//}
//
//String *Pointer::operator->() const  //访问指针成员
//{
//	if (!ptr)
//	{
//		throw errorMessage;
//	}
//	return ptr;
//}