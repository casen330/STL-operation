////文件保护
//#ifndef _顺序队列_H
//#define _顺序队列_H
//
//template<class T>
//class Queue
//{
//public:
//	Queue(int queueCapacity = 4); //默认队列的容量是10
//	bool IsEmpty() const;
//	T& Front() const;  //查看或者读取队首的数据
//	T& Rear() const;   //查看或者读取队尾的数据
//	void Push(const T& item); //从队尾插入数据
//	void Pop(); //从队首删除数据
//private:
//	T *queue; //动态数组
//	int front; //记录队首的下标
//	int rear; //记录队尾的下标
//	int capacity; //数组的容量，数组满了就将数组放大一倍
//};
//
//template<class T>
//Queue<T>::Queue(int queueCapacity) :capacity(queueCapacity)
//{
//	if (capacity<1)
//	{
//		throw "Queue capacity must be > 0";
//	}
//	queue = new T[capacity]; //设置数组大小
//	front = rear = 0;	  //将队首和队尾的下标都指向0
//}
//
//template<class T>
//inline bool Queue<T>::IsEmpty() const
//{
//	return front == rear;  //队首和队尾在指向同一个下标则认为队列是空的
//}
//
//template<class T>
//void Queue<T>::Push(const T& item)
//{
//	//if (rear == capacity - 1)  //判断是否达到数组的尾部（一般的写法）
//	//	rear = 0;
//	//else
//	//	rear++;	
//	if ((rear+1)%capacity==front)  //队列满了
//	{
//		//数组容量加倍
//		//通过复制到一个新的容量大的数组中
//		T* newQueue = new T[2 * capacity];
//		int start = (front + 1) % capacity;
//		if (start<2) //没有发生回绕，no wrap
//			copy(queue + start, queue + rear, newQueue);
//		else
//		{
//			copy(queue + start, queue + capacity, newQueue);  //把后半段先复制到新数组中
//			copy(queue, queue + rear + 1, newQueue + capacity - start);  //把回绕的数据复制到新数组中
//		}
//		//重新定义队首、队尾、容量，队首在最末尾。
//		front = 2 * capacity - 1;
//		rear = capacity - 2;
//		capacity *= 2;
//		//删除旧数组
//		delete[] queue;
//		//指针指向新创建的数组
//		queue = newQueue;
//
//	}
//
//	rear = (rear + 1) % capacity;   //判断是否达到数组的尾部（比较高级的写法）
//	queue[rear] = item;
//}
//
//template<class T>
//inline T& Queue<T>::Front() const
//{
//	if (IsEmpty()) throw "Queue is empty, no front element.";
//	return queue[(front + 1) % capacity];
//}
//
//template<class T>
//inline T& Queue<T>::Rear() const
//{
//	if (IsEmpty()) throw "Queue is empty, no rear element.";
//	return queue[rear];
//}
//
//template<class T>
//void Queue<T>::Pop()
//{
//	if (IsEmpty()) throw "Queue is empty. cannot delete.";
//	front = (front + 1) % capacity;  //处理回绕
//	queue[front].~T();  //调用析构函数删除要处理的数据（因为可能是对象，所以调用析构函数）
//}
//
//#endif // !_顺序队列
