////�ļ�����
//#ifndef _˳�����_H
//#define _˳�����_H
//
//template<class T>
//class Queue
//{
//public:
//	Queue(int queueCapacity = 4); //Ĭ�϶��е�������10
//	bool IsEmpty() const;
//	T& Front() const;  //�鿴���߶�ȡ���׵�����
//	T& Rear() const;   //�鿴���߶�ȡ��β������
//	void Push(const T& item); //�Ӷ�β��������
//	void Pop(); //�Ӷ���ɾ������
//private:
//	T *queue; //��̬����
//	int front; //��¼���׵��±�
//	int rear; //��¼��β���±�
//	int capacity; //������������������˾ͽ�����Ŵ�һ��
//};
//
//template<class T>
//Queue<T>::Queue(int queueCapacity) :capacity(queueCapacity)
//{
//	if (capacity<1)
//	{
//		throw "Queue capacity must be > 0";
//	}
//	queue = new T[capacity]; //���������С
//	front = rear = 0;	  //�����׺Ͷ�β���±궼ָ��0
//}
//
//template<class T>
//inline bool Queue<T>::IsEmpty() const
//{
//	return front == rear;  //���׺Ͷ�β��ָ��ͬһ���±�����Ϊ�����ǿյ�
//}
//
//template<class T>
//void Queue<T>::Push(const T& item)
//{
//	//if (rear == capacity - 1)  //�ж��Ƿ�ﵽ�����β����һ���д����
//	//	rear = 0;
//	//else
//	//	rear++;	
//	if ((rear+1)%capacity==front)  //��������
//	{
//		//���������ӱ�
//		//ͨ�����Ƶ�һ���µ��������������
//		T* newQueue = new T[2 * capacity];
//		int start = (front + 1) % capacity;
//		if (start<2) //û�з������ƣ�no wrap
//			copy(queue + start, queue + rear, newQueue);
//		else
//		{
//			copy(queue + start, queue + capacity, newQueue);  //�Ѻ����ȸ��Ƶ���������
//			copy(queue, queue + rear + 1, newQueue + capacity - start);  //�ѻ��Ƶ����ݸ��Ƶ���������
//		}
//		//���¶�����ס���β����������������ĩβ��
//		front = 2 * capacity - 1;
//		rear = capacity - 2;
//		capacity *= 2;
//		//ɾ��������
//		delete[] queue;
//		//ָ��ָ���´���������
//		queue = newQueue;
//
//	}
//
//	rear = (rear + 1) % capacity;   //�ж��Ƿ�ﵽ�����β�����Ƚϸ߼���д����
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
//	front = (front + 1) % capacity;  //�������
//	queue[front].~T();  //������������ɾ��Ҫ��������ݣ���Ϊ�����Ƕ������Ե�������������
//}
//
//#endif // !_˳�����
