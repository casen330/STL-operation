// 删除.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include<algorithm>
#include<list>
#include<vector>
#include<functional>
#include<set>
#include<iterator>
using namespace std;
int _tmain(int argc, _TCHAR* argv[])
{

	list<int> ilist;
	for (int i = 1; i <= 6; i++)
	{
		ilist.push_back(i);
		ilist.push_front(i);
	}
	for (list<int>::iterator iter = ilist.begin(); iter != ilist.end(); ++iter)
		cout << *iter << " ";
	cout << endl;

	//remove不是真正的删除，而是逻辑的删除
	//按照原数据的begin和end迭代器显示为：       1 2 3 4 5 6
	//删除3后按照原数据的begin和end迭代器显示为：1 2 4 5 6 6  原数据中元素个数并没有减小，如果要真的删除，需要使用erase
	remove(ilist.begin(), ilist.end(), 3);
	for (list<int>::iterator iter = ilist.begin(); iter != ilist.end(); ++iter)
		cout << *iter << " ";
	cout << endl;

	//remove 返回值为迭代器，返回的是逻辑终点
	list<int>::iterator end;   
	end = remove(ilist.begin(), ilist.end(), 3);  //返回的迭代器就是到原数据的最后一个的下一个
	
	cout << "一共删除了：" << distance(end, ilist.end()) << "个" << endl;

	//真正的删除
	ilist.erase(end, ilist.end()); //将remove返回的迭代器与原迭代器之间的数全部删除，就实现了真正的删除

	//整合remove和erase实现真正的删除
	ilist.erase(remove(ilist.begin(), ilist.end(), 3), ilist.end());
	//整合 remove_if 和 erase 实现从其中真正的删除 小于4的数
	ilist.erase(remove_if(ilist.begin(), ilist.end(), bind2nd(less<int>(), 4)), ilist.end());

	multiset<int> iset;
	//将ilist的值都复制到iset中，在复制过程中，删除小于3的所有值
	remove_copy_if(ilist.begin(), ilist.end(), inserter(iset, iset.end()), bind2nd(less<int>(), 3));

	//把ilist中的数据复制到 cout流中，并删除其中的3
	remove_copy(ilist.begin(), ilist.end(), ostream_iterator<int>(cout, " "), 3);

	//删除其中大于4的
	remove_copy_if(ilist.begin(), ilist.end(), ostream_iterator<int>(cout, " "), bind2nd(greater<int>(), 4));


	//使用unique删除重复的,pos指向可用的最后一个数据的下一个
	list<int>::iterator pos;
	pos = unique(ilist.begin(), ilist.end());
	//利用谓词来删除,删除比前一个可用数据小的数据
	//例：删除前：1 4 4 6 1 2 2 3 1 6 6 6 5 7 5 4 4
	//    删除后：1 4 4 6 6 6 6 7
	pos = unique(ilist.begin(), ilist.end(), greater<int>());

	//使用unique_copy将一个容器中的数据复制到另一个容器中，在复制过程中将一些连续的重复的删除
	unique_copy(ilist.begin(), ilist.end(), iset.begin());
	unique_copy(ilist.begin(), ilist.end(), ostream_iterator<int>(cout," "));
	//使用谓词来约束
	unique_copy(ilist.begin(), ilist.end(), iset.begin(), greater<int>());

	return 0;
}

