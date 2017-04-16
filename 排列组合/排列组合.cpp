#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;
int main(){
	vector<int> ivec;
	ivec.push_back(1);
	ivec.push_back(2);
	ivec.push_back(3);

	for (vector<int>::iterator iter = ivec.begin(); iter != ivec.end(); ++iter)
		cout << *iter << " ";
	cout << endl;

	//使用next_permutation()叫（下一个排列组合） 
	next_permutation(ivec.begin(), ivec.end());  //返回值为true，则证明下还有排列组合，如果返回值为false，则证明无下一个排列组合

	
	//使用while显示所有的排列组合
	while (next_permutation(ivec.begin(),ivec.end()))
	{
		for (vector<int>::iterator iter = ivec.begin(); iter != ivec.end(); ++iter)
			cout << *iter << " ";
		cout << endl;
	}

	vector<int> ivec2;
	ivec2.push_back(3);
	ivec2.push_back(2);
	ivec2.push_back(1);
	for (vector<int>::iterator iter = ivec2.begin(); iter != ivec2.end(); ++iter)
		cout << *iter << " ";
	cout << endl;

	//使用prev_permutation进行从大到小的排序
	//返回值同上
	//使用while来显示所有的排列组合
	while (prev_permutation(ivec2.begin(),ivec2.end()))
	{
		for (vector<int>::iterator iter = ivec2.begin(); iter != ivec2.end(); ++iter)
			cout << *iter << " ";
		cout << endl;
	}

	return 0;
}