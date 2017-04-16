//#ifndef SMART_PTR_H
//#define SMART_PTR_H
//
////����ָ���ŵ����ӣ�����Ļ��кܶ�����û�д�������һ�㶼�����Ѿ����õ�����ָ�룬���Լ�������
//
//template<typename T>
//class smart_pointer
//{
//private:
//	T* m_pRawPointer;  //��һ��˽�еĳ�Ա����ԭʼ��ָ��
//
//public:
//	smart_pointer(T* pData) :m_pRawPointer(pData){}  //ԭʼ��ָ����г�ʼ��
//
//	//���ƹ��캯��
//	smart_pointer(const smart_pointer & anotherSP);
//
//	//��ֵ = ���ظ�ֵ������
//	smart_pointer& operator=(const smart_pointer& anotherSP);
//	
//	//�ԡ�*���Ž�������
//	T& operator*() const
//	{
//		return *(m_pRawPointer);
//	}
//
//	//���ء�->��ָ���Ա������
//	T* operator-> () const
//	{
//		return m_pRawPointer;
//	}
//};
//
//#endif