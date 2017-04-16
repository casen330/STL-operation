#include<iostream>
#include<set>

using namespace std;

//统一显示容器中的数据(模板函数），可以显示所有的容器
template <typename Container> void PrintContents(const Container &a)
{
	Container::const_iterator iter = a.begin();
	while (iter!=a.end())
	{
		cout << *iter << endl;
		++iter;
	}
	cout << endl;
}


int main(){

	set<int> a;
	multiset<int> ma;
	//插入后会自动排序的 
	a.insert(60);  
	a.insert(-1);
	a.insert(3000);
	cout << "显示set里面的数据：" << endl;
	set<int>::const_iterator i = a.begin();
	while (i!=a.end())
	{
		cout << *i << endl;
		++i;
	}

	ma.insert(3000);
	ma.insert(a.begin(), a.end());  //利用a来初始化ma
	ma.count(3000);  //统计其中 3000 的个数

	//查找
	set<int>::iterator i_found = a.find(-1); //利用find函数来查找 -1，返回的是一个迭代器
	if (i_found!=a.end())
	{
		cout << "Found it" << *i_found << endl;
	}

	//删除
	a.erase(3000);  //单个删除，也可以使用两个迭代器来删除一个范围内的值，
	a.clear(); //删除a中所有的数据


	return 0;
}