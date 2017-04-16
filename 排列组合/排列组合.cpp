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

	//ʹ��next_permutation()�У���һ��������ϣ� 
	next_permutation(ivec.begin(), ivec.end());  //����ֵΪtrue����֤���»���������ϣ��������ֵΪfalse����֤������һ���������

	
	//ʹ��while��ʾ���е��������
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

	//ʹ��prev_permutation���дӴ�С������
	//����ֵͬ��
	//ʹ��while����ʾ���е��������
	while (prev_permutation(ivec2.begin(),ivec2.end()))
	{
		for (vector<int>::iterator iter = ivec2.begin(); iter != ivec2.end(); ++iter)
			cout << *iter << " ";
		cout << endl;
	}

	return 0;
}