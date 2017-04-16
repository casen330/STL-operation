#include<iostream>
#include<vector>
#include<list>
#include<algorithm>
#include<functional>
#include<iterator>
using namespace std;


//for_each使用的函数，传引用，所以速度快
void square(int & elem){
	elem = elem*elem;
}
//transform使用的函数，不需要传引用
int square2(int elem){
	return elem*elem;
}

int main(){
	vector<int> a;
	vector<int> b;
	for (int i = 1; i < 10; i++)
	{
		a.push_back(i);
		b.push_back(i);
	}

	for (vector<int>::iterator iter = a.begin(); iter != a.end(); ++iter)
		cout << *iter << " ";
	cout << endl;
	//for_each进行操作，传引用，所以速度快很多
	for_each(a.begin(), a.end(), square);
	//transform进行操作，期间有多次拷贝，所以速度比较慢
	transform(a.begin(), a.end(), a.begin(),square2);

	swap_ranges(a.begin(), a.end(), b.begin());

	return 0;
}