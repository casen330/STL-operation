#include<iostream>
#include<algorithm>
#include<vector>
#include<iterator>
#include<set>
#include<functional>
using namespace std;

int main(){
	vector<int> ivec;
	for (int i = 1; i <= 9; ++i)
		ivec.push_back(i);
	for (vector<int>::iterator iter = ivec.begin(); iter != ivec.end(); ++iter)
		cout << *iter << "";
	cout << endl;

	//使用reverse逆转，就是逆序
	reverse(ivec.begin(), ivec.end());
	for (vector<int>::iterator iter = ivec.begin(); iter != ivec.end(); ++iter)
		cout << *iter << "";
	cout << endl;
	reverse(ivec.begin(), ivec.end());
	//使用 reverse_copy 一边逆转，一边copy
	reverse_copy(ivec.begin(), ivec.end(), ostream_iterator<int>(cout, " "));
	cout << endl;
	//使用rotate 旋转,把ivec.end()指向的元素放到最开始，把其前面的数据旋转到最后
	//如下行代码：原数据：1 2 3 4 5 6 7 8 9
	//			  旋转后：9 1 2 3 4 5 6 7 8
	rotate(ivec.begin(), ivec.end()-1,ivec.end());
	for (vector<int>::iterator iter = ivec.begin(); iter != ivec.end(); ++iter)
		cout << *iter << "";
	cout << endl;

	set<int> iset;
	for (int i = 1; i <= 9; ++i)
		iset.insert(i);

	//旋转复制
	set<int>::iterator pos = iset.begin();
	//pos = pos + 4;// 一般的容器可以这样做，但是Set不可以
	advance(pos, 1); //使set的迭代器向前移动一位
	//使用rotate_copy转转复制
	//	         原来的头    新的头  结尾
	rotate_copy(iset.begin(), pos,iset.end(), ostream_iterator<int>(cout, " "));
	
	//结合find和rotate
	rotate_copy(iset.begin(), iset.find(4), iset.end(), ostream_iterator<int>(cout, " "));

	return 0;
}