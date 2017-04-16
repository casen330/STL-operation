#include<iostream>
#include<set>
#include<algorithm>
#include<functional>


using namespace std;
//函数对象
class PrintInt
{
public:
	void operator()(int number) const
	{
		cout << number << " ";
	}
};

//普通函数
void printNum(int number){
	cout << number << " ";
}
int main(){
	
	set<int> a; //自动排序的红黑树
	set<int, less<int>> a1;  //less<int>为默认的函数（可省略），表示从小到大排序
	set<int, greater<int>> a2; //表示从大到小排序

	//算法
	for_each(a.begin(), a.end(),printNum);// 利用函数或函数对象对迭代器区间内的数做处理
	for_each(a.begin(), a.end(), PrintInt()); //利用函数对象来处理数据

	return 0;
}