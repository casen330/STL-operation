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

	// �����������е����ݰ��նѵ����з�ʽ��������
	make_heap(ivec.begin(),ivec.end());
	//�Ӷ���ȡ��һ����������,��û��ɾ����ֻ�ǰ����ķ������������һ��λ���ϣ���ʣ�µ��������г�һ����
	pop_heap(ivec.begin(), ivec.end());
	ivec.pop_back(); //ɾ�����������һ��Ԫ�أ�Ҳ��������ȡ���Ķѵ����ֵ
	
	//Ҫ����������ʹ��push_heap����������������������һ���µ�Ԫ��
	ivec.push_back(20);
	//Ȼ����ʹ��push_heap
	push_heap(ivec.begin(), ivec.end());

	//�������еĶ���������ͨ������
	sort_heap(ivec.begin(), ivec.end());
	return 0;
}