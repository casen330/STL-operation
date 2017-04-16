#include<iostream>
#include<vector>
#include<list>
#include<deque>
#include<algorithm>

using namespace std;

int main(){
	vector<int> ivec(100,0);
	cout << ivec.capacity();
	cout << ivec.size();
	vector<int> v;
	list<int> l;
	deque<int> d;

	//deque的所有操作都比向量慢了一点点，但是很灵活
	d.push_back(50);  //可以在两端都操作，插入，删除数据
	d.push_front(10);


	//向量的缺点
	v.push_back(10);   //插入数据比较慢，应为会有扩充容器大小的步骤
	v.push_back(90);
	v.push_back(50);
	vector<int>::iterator vi = v.begin();
	++vi;
	++vi;
	v.insert(vi, 70);  //这样的方式插入数据非常慢，因为要把容器中插入位置中后面所有的数据向后移动
	vi = v.begin();
	++vi;
	v.erase(vi);  //删除也非常慢，也要把删除位置后面的所有数都向前移动

	//向量的优点，排序的时候
	sort(v.begin(), v.end());
	if (binary_search(v.begin(),v.end(),70))  //二分查找（可操作下标）
	{
		cout << "Found it." << endl;
	}

	l.push_back(10);   //插入数据时，list非常快，没有扩充容器大小的步骤
	l.push_back(90);
	l.push_back(50);
	list<int>::iterator li = l.begin();
	++li;
	++li;
	l.insert(li, 70);  //插入数据非常快，直接创建节点就可以了
	li = l.begin();
	++li;
	l.erase(li); //删除数据非常快，只需要删除节点即可

	//list的缺点，排序比较慢
	l.sort();
	if (binary_search(l.begin(),l.end(),70))  //二分查找，但不是真正的二分查找，速度比较慢（没有下标）
	{
		cout << "Found it." << endl;
	}
	return 0;
}