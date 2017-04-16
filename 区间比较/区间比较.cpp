#include<iostream>
#include<algorithm>
#include<vector>
#include<list>
#include<functional>

using namespace std;

bool bothEvenOrOdd(int elem1, int elem2){
	return elem1 % 2 == elem2 % 2;
}

int main(){

	vector<int> ivec;
	list<int> ilist;
	for (int i = 1; i < 8; i++)
	{
		ivec.push_back(i);
	}
	for (int i = 3; i < 10; i++)
	{
		ilist.push_back(i);
	}
	for (vector<int>::iterator iter = ivec.begin(); iter !=ivec.end(); iter++)
	{
		cout << *iter << " ";
	}
	cout << endl;
	for (list<int>::iterator iter = ilist.begin(); iter != ilist.end(); iter++)
	{
		cout << *iter << " ";
	}
	cout << endl;

	// 比较,equal返回值为bool类型
	bool result = equal(ivec.begin(), ivec.end(), ilist.begin());
	if (result)
	{
		cout << "这两个区间相等" << endl;
	}
	//利用谓词判断连个区间中对应的数是否同为奇数或同为偶数
	bool result2 = equal(ivec.begin(), ivec.end(), ilist.begin(), bothEvenOrOdd);
	if (result2)
	{
		cout << "是同为奇数或同为偶数" << endl;
	}


	//找出两个区间中第一个不相等的数 （返回值是一个pair，是一对儿迭代器）
	//第一个迭代器指向第一个容器中不相等的数，第二个迭代器指向第二个容器中不相等的数	
	pair<vector<int>::iterator, list<int>::iterator> result3;
	result3 = mismatch(ivec.begin(), ivec.end(), ilist.begin());
	//如果没有找到不相等的数，那么第一个迭代器则为 end
	if (result3.first==ivec.end())
	{
		cout << "没有找到不相等的数" << endl;
	}
	else
	{
		cout << "找到了!" << endl << " 第一个数为：" << *result3.first << "第二个不相等的数为：" << *result3.second << endl;
	}
	//使用预定义的函数对象做谓词,less_equal<int>(),如果第一个容器中的数小于等于第二个容器中的数，则返回true，继续找，否则返回找的的值的迭代器
	result3 = mismatch(ivec.begin(), ivec.end(), ilist.begin(), less_equal<int>());


	//检查第一个区间是不是比第二个区间的数小，（如果比较的值都一样，谁的数多，谁就大）（有一个数不相等，就根据不相等的数来比较大小）（全都相等，则相等）
	//如果第一个一个区间小于另一个区间，则返回true；返回false，则第一个区间大于等于第二个区间
	bool result4 = lexicographical_compare(ilist.begin(), ilist.end(), ivec.begin(), ivec.end());
	if (result4)
	{
		cout << "第一个区间小于第二个区间！" << endl;
	}
	else
	{
		cout << "第一个区间大于等于第二个区间！" << endl;
	}
	return 0;
}