#include<iostream>
#include<algorithm>
#include<vector>
#include<functional>

using namespace std;

int main(){

	vector<int> ivec;
	vector<int> ivec2;
	vector<int> ivec3;
	for (int i = 1; i < 10; ++i)
	{
		ivec.push_back(i);
		ivec2.push_back(i);
		//ivec3.push_back(i);
	}
	for (vector<int>::iterator iter = ivec.begin(); iter != ivec.end(); ++iter)
		cout << *iter << " ";
	cout << endl;

	//使用重排算法random_shuffle打乱顺序
	random_shuffle(ivec.begin(), ivec.end());
	for (vector<int>::iterator iter = ivec.begin(); iter != ivec.end(); ++iter)
		cout<< *iter << " ";
	cout << endl;

	//使用partition进行不稳定的分区,把符合规则的数据都往前放，分区后各区域的数就和原数据不同了
	//下行代码实现把偶数往前移动，把奇数往后移动
	//返回值为迭代器，pos，指向分区的中点数据
	partition(ivec2.begin(), ivec2.end(), not1(bind2nd(modulus<int>(), 2)));

	ivec3.push_back(3);
	ivec3.push_back(2);
	ivec3.push_back(5);
	ivec3.push_back(9);
	ivec3.push_back(7);
	ivec3.push_back(8);

	//使用stable_partition进行稳定的分区,分区后各分区的数依然是和原数据中的顺序相同
	stable_partition(ivec3.begin(), ivec3.end(), not1(bind2nd(modulus<int>(), 2)));
	for (vector<int>::iterator iter = ivec3.begin(); iter != ivec3.end(); ++iter)
		cout << *iter << " ";
	cout << endl;
	return 0;
}