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
//String Pointer::errorMessage("Uninitialized pointer"); //������Ϣ
//
//String &Pointer::operator*() //�õ�����ָ����ָ��Ķ���
//{
//	if (!ptr)
//	{
//		throw errorMessage;
//	}
//	return *ptr;
//}
//
//String *Pointer::operator->() const  //����ָ���Ա
//{
//	if (!ptr)
//	{
//		throw errorMessage;
//	}
//	return ptr;
//}