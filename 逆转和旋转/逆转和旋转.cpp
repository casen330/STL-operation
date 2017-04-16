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

	//ʹ��reverse��ת����������
	reverse(ivec.begin(), ivec.end());
	for (vector<int>::iterator iter = ivec.begin(); iter != ivec.end(); ++iter)
		cout << *iter << "";
	cout << endl;
	reverse(ivec.begin(), ivec.end());
	//ʹ�� reverse_copy һ����ת��һ��copy
	reverse_copy(ivec.begin(), ivec.end(), ostream_iterator<int>(cout, " "));
	cout << endl;
	//ʹ��rotate ��ת,��ivec.end()ָ���Ԫ�طŵ��ʼ������ǰ���������ת�����
	//�����д��룺ԭ���ݣ�1 2 3 4 5 6 7 8 9
	//			  ��ת��9 1 2 3 4 5 6 7 8
	rotate(ivec.begin(), ivec.end()-1,ivec.end());
	for (vector<int>::iterator iter = ivec.begin(); iter != ivec.end(); ++iter)
		cout << *iter << "";
	cout << endl;

	set<int> iset;
	for (int i = 1; i <= 9; ++i)
		iset.insert(i);

	//��ת����
	set<int>::iterator pos = iset.begin();
	//pos = pos + 4;// һ�����������������������Set������
	advance(pos, 1); //ʹset�ĵ�������ǰ�ƶ�һλ
	//ʹ��rotate_copyתת����
	//	         ԭ����ͷ    �µ�ͷ  ��β
	rotate_copy(iset.begin(), pos,iset.end(), ostream_iterator<int>(cout, " "));
	
	//���find��rotate
	rotate_copy(iset.begin(), iset.find(4), iset.end(), ostream_iterator<int>(cout, " "));

	return 0;
}