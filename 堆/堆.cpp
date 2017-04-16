#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
	vector<int> ivec;
	for (int i = 3; i < 8; i++)
	{
		ivec.push_back(i);
	}
	for (int i = 5; i < 10; ++i)
		ivec.push_back(i);
	for (int i = 1; i < 5; ++i)
		ivec.push_back(i);
	for (vector<int>::iterator iter = ivec.begin(); iter != ivec.end(); ++iter)
		cout << *iter << " ";
	cout << endl;

	// 把向量中所有的数据按照堆的排列方式进行排列
	make_heap(ivec.begin(),ivec.end());
	//从堆中取走一个最大的数据,并没有删除，只是把最大的放在向量的最后一个位置上，把剩下的重新排列成一个堆
	pop_heap(ivec.begin(), ivec.end());
	ivec.pop_back(); //删除向量的最后一个元素，也就是上面取出的堆的最大值
	
	//要想向量堆中使用push_heap，必须先在向量的最后加入一个新的元素
	ivec.push_back(20);
	//然后在使用push_heap
	push_heap(ivec.begin(), ivec.end());

	//把向量中的堆排序变成普通的排序
	sort_heap(ivec.begin(), ivec.end());
	return 0;
}