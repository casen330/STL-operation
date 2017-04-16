#include<iostream>
#include<algorithm>
#include<list>
#include<functional>
#include<iterator>
using namespace std;

int main(){

	list<int> ilist;
	for (int i = 2; i < 8; i++)
		ilist.push_back(i);
	for (int i = 4; i < 10; ++i)
		ilist.push_back(i);

	//用replace进行替换，将其中等于6的值都换成42
	replace(ilist.begin(), ilist.end(), 6, 42); 
	//利用replace_if 将ilist中小于5的数都替换成0；  less<int>()为预定义的函数对象  预定义的函数适配器 bind2nd()
	replace_if(ilist.begin(), ilist.end(), bind2nd(less<int>(), 5), 0);

	list<int> ilist2;
	for (int i = 2; i < 7; i++)
		ilist2.push_back(i);
	for (int i = 4; i < 10; ++i)
		ilist2.push_back(i);

	for (list<int>::iterator iter = ilist2.begin(); iter != ilist2.end(); ++iter)
		cout << *iter << " ";
	cout << endl;

	//利用replace_copy将ilist2中的数据都copy到 cout流中，在copy过程中将5替换为55
	replace_copy(ilist2.begin(), ilist2.end(), ostream_iterator<int>(cout, " "), 5, 55);
	//利用replace_copy_if将ilist2中的数据copy到cout流中，在替换中使用预定义函数对象，将小于5的都替换为44
	replace_copy_if(ilist2.begin(), ilist2.end(), ostream_iterator<int>(cout, " "), bind2nd(less<int>(), 5), 44);
	//在copy过程中将其中奇数都替换为0
	replace_copy_if(ilist2.begin(), ilist2.end(), ostream_iterator<int>(cout, " "), bind2nd(modulus<int>(), 2), 0);

	return 0;
}