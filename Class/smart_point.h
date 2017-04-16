//#ifndef SMART_PTR_H
//#define SMART_PTR_H
//
////智能指针大概的样子，下面的还有很多问题没有处理，所以一般都是用已经做好的智能指针，不自己动手做
//
//template<typename T>
//class smart_pointer
//{
//private:
//	T* m_pRawPointer;  //用一个私有的成员保存原始的指针
//
//public:
//	smart_pointer(T* pData) :m_pRawPointer(pData){}  //原始的指针进行初始化
//
//	//复制构造函数
//	smart_pointer(const smart_pointer & anotherSP);
//
//	//赋值 = 重载赋值操作符
//	smart_pointer& operator=(const smart_pointer& anotherSP);
//	
//	//对‘*’号进行重载
//	T& operator*() const
//	{
//		return *(m_pRawPointer);
//	}
//
//	//重载‘->’指针成员操作符
//	T* operator-> () const
//	{
//		return m_pRawPointer;
//	}
//};
//
//#endif