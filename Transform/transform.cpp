#include<iostream>
#include<vector>
#include<list>
#include<algorithm>
#include<functional>
#include<iterator>
using namespace std;

int main(){
	vector<int> ivec;
	list<int> ilist;
	for (int i = 1; i < 10; i++)
	{
		ivec.push_back(i);
	}

	for (vector<int>::iterator iter = ivec.begin(); iter != ivec.end(); ++iter)
		cout << *iter << " ";
	cout << endl;

	//利用transform进行变换                     预定义的函数对象，取负数
	transform(ivec.begin(), ivec.end(), ivec.begin(), negate<int>());
	
	//利用transform进行变换的时候，要保证目标容器有位置，否则使用插入迭代器
	transform(ivec.begin(), ivec.end(), back_inserter(ilist),bind2nd(multiplies<int>(),10));
	//也可以利用transform将数据绑定到cout中，类似于显示
	transform(ilist.begin(), ilist.end(), ostream_iterator<int>(cout, " "), negate<int>());
	

	//利用transform将两个容器融合操作后再存入一个目标容器
	transform(ivec.begin(), ivec.end(), ivec.begin(), ivec.begin(), multiplies<int>());

	transform(ivec.begin(), ivec.end(), ivec.rbegin(), back_inserter(ilist), plus<int>());
	//将数据绑定至  cout流中
	transform(ivec.begin(), ivec.end(), ilist.begin(),ostream_iterator<int>(cout, " "), plus<int>());

	return 0;
}