#include<iostream>
#include<algorithm>
#include<vector>
#include<list>
#include<iterator>
using namespace std;

int main(){
	list<int> ilist;
	for (int i = 0; i < 10; i++)
	{
		ilist.push_back(i);
	}
	for (list<int>::iterator iter = ilist.begin(); iter != ilist.end(); iter++)
	{
		cout << *iter << " ";
	}
	cout << endl;

	vector<int> ivec(ilist.size() * 2);
	for (vector<int>::iterator iter = ivec.begin(); iter !=ivec.end(); iter++)
	{
		cout << *iter << " ";
	}
	cout << endl;

	//复制之前必须考虑复制的目的容器是否有足够的空间，如果没有空间可以使用插入迭代器来进行拷贝back_inserter为插入迭代器
	copy(ilist.begin(), ilist.end(), back_inserter(ivec));

	//从前面开始复制
	copy(ilist.begin(), ilist.end(), ivec.begin());
	//从后面开始复制
	copy_backward(ilist.begin(), ilist.end(), ivec.end());

	//可以利用copy将内容拷贝到输出流中，使用输出流迭代器
	copy(ilist.begin(), ilist.end(), ostream_iterator<int>(cout, " ")); //效果类似于for循环的显示数据

	//逆向迭代器拷贝
	copy(ilist.rbegin(), ilist.rend(), ivec.back());
	reverse_copy(ilist.begin(), ilist.end(), ivec.begin()); //可以替换逆向迭代器拷贝，这个速度更快
	

	return 0;
}