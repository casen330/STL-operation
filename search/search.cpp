#include<iostream>
#include<algorithm>
#include<vector>
#include<list>
using namespace std;

//��Ԫν��
bool checkEven(int elem, int even){
	if (even)
		return elem % 2 == 0;
	else
		return elem % 2 == 1;
}
int main(){
	vector<int> ivec;
	//�����в���0~9
	for (int  i = 0; i < 9; i++)
	{
		ivec.push_back(i);
	}
	//����һ���ж�����
	bool checkEvenArgs[] = { false, true, false };
	vector<int>::iterator pos;
	//ν�ʲ���
	pos = search(ivec.begin(), ivec.end(), checkEvenArgs, checkEvenArgs + 3, checkEven);
	if (pos != ivec.end())
	{
		cout << "found it" << endl;
	}

	vector<int> ivec2;
	for (int i = 0; i < 9; i++)
	{
		ivec2.push_back(i);
	}
	list<int> searchList;
	searchList.push_back(3);
	searchList.push_back(6);
	searchList.push_back(9);
	vector<int>::iterator pos2;
	pos2 = find_first_of(ivec2.begin(), ivec2.end(), searchList.begin(), searchList.end());

}