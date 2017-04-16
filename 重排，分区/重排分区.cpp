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

	//ʹ�������㷨random_shuffle����˳��
	random_shuffle(ivec.begin(), ivec.end());
	for (vector<int>::iterator iter = ivec.begin(); iter != ivec.end(); ++iter)
		cout<< *iter << " ";
	cout << endl;

	//ʹ��partition���в��ȶ��ķ���,�ѷ��Ϲ�������ݶ���ǰ�ţ����������������ͺ�ԭ���ݲ�ͬ��
	//���д���ʵ�ְ�ż����ǰ�ƶ��������������ƶ�
	//����ֵΪ��������pos��ָ��������е�����
	partition(ivec2.begin(), ivec2.end(), not1(bind2nd(modulus<int>(), 2)));

	ivec3.push_back(3);
	ivec3.push_back(2);
	ivec3.push_back(5);
	ivec3.push_back(9);
	ivec3.push_back(7);
	ivec3.push_back(8);

	//ʹ��stable_partition�����ȶ��ķ���,�����������������Ȼ�Ǻ�ԭ�����е�˳����ͬ
	stable_partition(ivec3.begin(), ivec3.end(), not1(bind2nd(modulus<int>(), 2)));
	for (vector<int>::iterator iter = ivec3.begin(); iter != ivec3.end(); ++iter)
		cout << *iter << " ";
	cout << endl;
	return 0;
}