//#ifndef 链式队列_H_
//#define 链式队列_H_
//
////
////template<class Object>
////class ListNode   //是一个结点，设计在类内部也可以（需要时会用友元类）
////{
////public:
////
////	Object element; //数据
////	ListNode *next;  //指针,指向下一个
////	ListNode(const Object & theElement, ListNode *n = 0) :element(theElement), next(n){} //构造函数
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
//	const Object &getFront() const;  //返回队首的数据
//	void enQueue(const Object & x);  //入队
//	Object dequeue(); //出队，将队首的数据删除
//	void makeEmpty(); //清除整个队列
//private:
//	struct ListNode  //类的内部嵌套的结构，是一个结点，设计在外部也可以（需要时会用友元类）
//	{
//	Object element; //数据
//	ListNode *next;  //指针,指向下一个
//	ListNode(const Object & theElement, ListNode *n = 0) :element(theElement), next(n){} //构造函数
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
//	makeEmpty(); //析构的时候要把占用的内存全部清空
//	cout << "析构函数被调用了。。。" << endl;
//}
//template<class Object>
//void Queue<Object>::makeEmpty()  
//{
//	while (!isEmpty())  //循环清除内存占用
//		dequeue();     
//}
//
//template<class Object>
//bool Queue<Object>::isEmpty()const
//{
//	//front指向的结点没有，那么这个队列就认为是空的
//	return front == 0;
//}
//
//template<class Object>
//const Object &Queue<Object>::getFront() const
//{
//	if (isEmpty())  throw"Queue is empty!";
//	return front->element;  //指针front指向的节点的数据读出
//}
//
//template<class Object>
//void Queue<Object>::enQueue(const Object &x)
//{
//	if (isEmpty())
//		back = front = new ListNode(x); //调用了listnode的构造函数，而且利用了它的缺省值
//	else
//		back = back->next = new ListNode(x);
//}
//
//template<class Object>
//Object Queue<Object>::dequeue()
//{
//	Object frontItem = getFront();
//	ListNode *old = front;
//	front = front->next;  //让front指向下一个
//	delete old; //删除旧节点
//	return frontItem;
//}
//
//
//#endif