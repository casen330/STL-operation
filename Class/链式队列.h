//#ifndef ��ʽ����_H_
//#define ��ʽ����_H_
//
////
////template<class Object>
////class ListNode   //��һ����㣬��������ڲ�Ҳ���ԣ���Ҫʱ������Ԫ�ࣩ
////{
////public:
////
////	Object element; //����
////	ListNode *next;  //ָ��,ָ����һ��
////	ListNode(const Object & theElement, ListNode *n = 0) :element(theElement), next(n){} //���캯��
////
////};
//
//template<class Object>
//class Queue
//{
//
//	template<class Object> 
//	friend class ListNode;
//public:	
//	Queue();
//	~Queue();
//	bool isEmpty() const;
//	const Object &getFront() const;  //���ض��׵�����
//	void enQueue(const Object & x);  //���
//	Object dequeue(); //���ӣ������׵�����ɾ��
//	void makeEmpty(); //�����������
//private:
//	struct ListNode  //����ڲ�Ƕ�׵Ľṹ����һ����㣬������ⲿҲ���ԣ���Ҫʱ������Ԫ�ࣩ
//	{
//	Object element; //����
//	ListNode *next;  //ָ��,ָ����һ��
//	ListNode(const Object & theElement, ListNode *n = 0) :element(theElement), next(n){} //���캯��
//	};
//	
//	ListNode *front;
//	ListNode *back;
//};
//
//template<class Object>
//Queue<Object>::Queue(){
//	front = back = 0;
//}
//
//template<class Object>
//Queue<Object>::~Queue()
//{
//	makeEmpty(); //������ʱ��Ҫ��ռ�õ��ڴ�ȫ�����
//	cout << "���������������ˡ�����" << endl;
//}
//template<class Object>
//void Queue<Object>::makeEmpty()  
//{
//	while (!isEmpty())  //ѭ������ڴ�ռ��
//		dequeue();     
//}
//
//template<class Object>
//bool Queue<Object>::isEmpty()const
//{
//	//frontָ��Ľ��û�У���ô������о���Ϊ�ǿյ�
//	return front == 0;
//}
//
//template<class Object>
//const Object &Queue<Object>::getFront() const
//{
//	if (isEmpty())  throw"Queue is empty!";
//	return front->element;  //ָ��frontָ��Ľڵ�����ݶ���
//}
//
//template<class Object>
//void Queue<Object>::enQueue(const Object &x)
//{
//	if (isEmpty())
//		back = front = new ListNode(x); //������listnode�Ĺ��캯������������������ȱʡֵ
//	else
//		back = back->next = new ListNode(x);
//}
//
//template<class Object>
//Object Queue<Object>::dequeue()
//{
//	Object frontItem = getFront();
//	ListNode *old = front;
//	front = front->next;  //��frontָ����һ��
//	delete old; //ɾ���ɽڵ�
//	return frontItem;
//}
//
//
//#endif