#include<iostream>
#include<algorithm>
#include<vector>
#include<list>
#include<string>
#include<iterator>
using namespace std;
int main(){
	
	list<string> slist;
	slist.push_back("Hello");
	slist.push_back("Hi");
	slist.push_back("Good Morning");

	//使用fill进行填充，将里面所有的都替换为“casenxu”
	fill(slist.begin(), slist.end(), "casenxu");


	for (list<string>::iterator iter = slist.begin(); iter != slist.end(); ++iter)
	{
		cout << *iter << endl;
	}

	list<string> slist2;
	//使用fill_n可以选择填充的个数
	fill_n(back_inserter(slist2), 9, "casenxu");
	//将填充值绑定到cout流中,向cout中填充10个float类型的7.4
	fill_n(ostream_iterator<float>(cout, " "), 10, 7.4);
	cout << "slist2: **********" << endl;
	fill(slist2.begin(), slist2.end(), "again");
	for (list<string>::iterator iter = slist.begin(); iter != slist.end(); ++iter)
	{
		cout << *iter << endl;
	}
	cout << "替换7个之后的结果" << endl;
	//使用fill_n将slist2前7个的值全替换为“xu”
	fill_n(slist2.begin(),7, "xu");
	for (list<string>::iterator iter = slist2.begin(); iter != slist2.end(); ++iter)
	{
		cout << *iter << endl;
	}
	//fill，fill_n只能填充固定的值

	//generate，generate_n可以利用函数来填充
	list<int> ilist;
	generate_n(back_inserter(ilist), 5, rand);
	for (list<int>::iterator iter = ilist.begin(); iter != ilist.end(); ++iter)
	{
		cout << *iter << endl;
	}
	

	generate(ilist.begin(), ilist.end(), rand);
	for (list<int>::iterator iter = ilist.begin(); iter != ilist.end(); ++iter)
	{
		cout << *iter << endl;
	}

	return 0;
}