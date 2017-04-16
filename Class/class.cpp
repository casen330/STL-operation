//#include<iostream>
//#include<string>
//using namespace std;
//
//class Screen{
//public:
//	//定义别名
//	typedef string::size_type index;
//
//	Screen(index ht = 0, index wd = 0) :contents(ht*wd, ' '), cursor(0), height(ht), width(wd){
//
//	}
//
//	char get()const{
//		return contents[cursor];
//	}
//	char get(index r, index c) const
//	{
//		index row = r*width;
//		return contents[row + c];
//	}
//private:
//	string contents;
//	index cursor;
//	index height, width;
//
//}obj1,obj2,obj3;
//
//class Y;
//class X{
//private:
//	Y *ptr;
//public:
//	X *ptr;
//	X &obj;
//};
//
//int main(){
//
//	return 0;
//}

//this 指针

//#include<iostream>
//#include<string>
//
//using namespace std;
//
//class Person{
//public:
//	Person(const string &nm, const string &addr){
//
//	}
//	string getName()const
//	{
//		return this->name;
//	}
//	string getAddr()const
//	{
//		return this->address;
//	}
//private:
//	string name;
//	string address;
//};
//class Screen
//{
//public:
//	typedef string::size_type index;
//private:
//	string contents;
//	index cursor;
//	index height, width; 
//};
//int main(){
//	Person p("Ccc", "xxxxx12");
//	Person p2("CCC", "xxxxx122");
//
//	return 0;
//}

//友元

//#include<iostream>
//#include<string>
//using namespace std;
//
//
//class Screen{
//public:
//	typedef string::size_type index;
//	Screen(int ht = 0, int wd = 0) :contents(ht*wd, ' '), cursor(0), height(ht), width(wd){}
//
//	int area() const
//	{
//		return  height * width;
//	}
//	friend int calaArea(Screen & screen);   //友元函数
//	friend  class Window_magr;    //友元类
//	friend int Dog::foo(Screen &);  //只将Dog类中的foo函数作为友元函数
//private:
//	string contents;
//	index cursor;
//	int height, width;
//};
//class Dog{
//public:
//	foo(){}
//
//};
//class Window_mgr
//{
//public:
//	void relocate(int r, int c, Screen& s)
//	{
//		
//	}
//};
////这个函数不是类的成员函数
//int calaArea(Screen & screen)
//{	
//	
//	return screen.height * screen.width;
//}
//int main()
//{
//
//	Screen a(60, 100);
//	
//	cout << "ok" << endl;
//	return 0;
//}

//static 静态成员

//#include<iostream>
//#include<string>
//
//using namespace std;
//
//class Account
//{
//public:
//	Account(string name, double money) :owner(), amount(money){}
//	double getAmount() const
//	{
//		return this->amount;
//	}
//
//	void applyint(){
//		amount += amount*interestRate;
//	}
//	void deposit(double money)
//	{
//		this->amount += money;
//	}
//
//
//	static double	getRate(){ return interestRate; }  //静态成员函数，可以直接使用类名调用
//	static void rate(double newRate)
//	{
//		interestRate = newRate;
//	}
//private:
//	string owner;
//	double amount;
//	static double interestRate;
//};
//
//double Account::interestRate = 0.015; //对类中的静态成员进行初始化
//
//int main(){
//	
//	Account::rate(0.05);  //在创建对象前，静态成员函数，可以直接使用类名调用
//
//	Account a("ccc", 1000);
//	Account b("bbb", 2000);
//	
//	a.deposit(500);
//	b.deposit(600);
//
//	cout << a.getAmount() << endl;
//	cout << b.getAmount() << endl;
//	cout << a.getRate() << endl;
//	a.rate(0.02);
//	cout << b.getRate() << endl;
//
//	a.applyint();
//	b.applyint();
//	cout << a.getAmount() << endl;
//	cout << b.getAmount() << endl;
//
//	return 0;
//}

//复制构造函数和赋值操作符

//#include<iostream>
//#include<string>
//#include<vector>
//using namespace std;
//
//class Sales_item{
//
//public:
//	Sales_item() :units_sold(0), revenue(0.0){
//		cout << "调用了默认的构造函数" << endl;
//	}  //无参构造函数，默认构造函数
//	Sales_item(const string &book) :isbn(book), units_sold(0), revenue(0.0){
//		cout << "调用了带一个字符串参数的构造函数" << endl;
//	}
//
////一般情况下不需要自己写复制构造函数和赋值操作符
//
//	//复制构造函数 也是构造函数的一种，只接收一个参数，而且参数为 (const Sale_item &orig) 一般都用const
//	Sales_item(const Sales_item &orig) 
//		:isbn(orig.isbn), units_sold(orig.units_sold), revenue(orig.revenue) //将传入的对象复制到当前对象
//	{
//		cout << "复制构造函数被调用了！" << endl;
//	}  //函数体一般都是空的
//
//	//赋值操作符  一般情况下这个都不需要自己写
//	Sales_item& operator=(const Sales_item &rhs){
//
//		cout << "赋值操作符被调用了" << endl;
//		isbn = rhs.isbn;
//		units_sold = rhs.units_sold;
//		revenue = rhs.revenue;
//		return *this;
//	}
//
//private:
//	string isbn;
//	unsigned units_sold;
//	double revenue; 
//};
//
//Sales_item foo(Sales_item item){
//	Sales_item temp;
//	temp = item;
//	return temp;
//}
//
//// 当一个类里面的数据成员有指针的时候，动态分配了内存的时候，必须自己写复制构造函数和赋值操作符
//
//class Noname{
//public:
//	Noname() :pstring(new string), i(0), d(0.0){}
//	Noname(const Noname& other) :pstring(new string(*(other.pstring))), i(other.i), d(other.d){}  //复制构造函数
//
//	//重载赋值操作符
//	Noname& operator=(const Noname &rhs)
//	{
//		pstring = new string;   //不能直接把指针赋值给指针，应该把指针所指向的字符串赋值给新的指针
//		*pstring = *(rhs.pstring);
//
//		i = rhs.i;
//		d = rhs.d;
//		return *this; 
//	}
//private:
//	string *pstring;
//	int i;
//	double d;
//};
//
//int main(){
//	Sales_item a; //调用默认无参构造函数
//	Sales_item b("0-201-78345-x"); //传入了一个参数，调用的是有参构造函数
//
//	Sales_item c(b);
//	a = b;
//	Sales_item item = string("9-99-99999-99");  //调用了带一个字符串参数的构造函数：Sales_item(const string &book) :isbn(book), units_sold(0), revenue(0.0){}
//	cout << endl << "试一下foo：" << endl;
//	Sales_item ret;
//	ret = foo(item);
//	cout << endl << "试一下vector：" << endl;
//	vector<Sales_item> svec(5);  //会先调用一次默认的构造函数，然后在调用五次复制构造函数
//
//	cout << endl << "试一下数组：" << endl;
//	Sales_item primer_eds[] = {
//		string("0-000-0000-1"),
//		string("0-000-0000-2"),
//		string("0-000-0000-3"),
//		Sales_item()
//	};
//
//	Noname x, y;
//	//默认的复制构造函数和赋值构造函数并没有很好的处理指针，因此需要自己写复制构造函数和赋值构造函数
//	Noname z(x); //C++会自动调用默认的构造函数
//	x = y; //C++会自动调用默认的赋值构造函数
//
//	return 0;
//}

//析构函数

//#include<iostream>
//#include<string>
//
//using namespace std;
//
//class Noname{
//public:
//	Noname() :pstring(new string), i(0), d(0.0){ 
//		//一般常用的是 ：在构造函数里 打开文件、连接数据库、动态分配内存
//		cout << "构造函数被调用了！" << endl; 
//	}
//	Noname(const Noname & other);  //复制构造函数
//	Noname& operator=(const Noname &rhs);  //赋值操作符
//	~Noname();  //析构函数,析构函数都没有参数，所以析构函数永远只能有一个
//private:
//	string *pstring;
//	int i;
//	double d;
//};
////复制构造函数
//Noname::Noname(const Noname &other){
//	pstring = new string;
//	*pstring = *(other.pstring);
//	i = other.i;
//	d = other.d;
//}
////赋值操作符
//Noname& Noname::operator=(const Noname &rhs){
//	pstring = new string;
//	*pstring = *(rhs.pstring);
//	i = rhs.i;
//	d = rhs.d;
//	return *this;
//}
////析构函数
//Noname::~Noname(){
//	//相应的在析构函数中：关闭文件、关闭数据库连接、回收动态分配的内存
//
//	cout << "析构函数被调用了！" << endl;
//	delete pstring;
//
//	//写析构函数的三原则： 如果写了析构函数，就必须同时要写复制构造函数和赋值操作符 
//}
//int main(){
//	Noname a;
//
//	Noname *p = new Noname; //没有调用析构函数
//	delete p;   //用New创建的，必须用delete清除掉
//	return 0;
//}

//深复制、浅复制

//#include<iostream>
//#include<cstring>
//
//using namespace std;
//
//class demo{
//public:
//	demo(int pa, char *cstr){
//		this->a = pa;
//		this->str = new char[104];
//		strcpy_s(this->str,20, cstr);
//	}
//
////没写复制构造函数，C++会自动写一个；默认的复制构造函数进行的是浅复制
//	demo(demo & obj){
//		this->a = obj.a;
//		//this->str = obj.str; //这里不对，应该要深复制，而这里是浅复制，只复制了指针
//		this->str = new char[1024];  //如果有指针，要写复制构造函数进行深复制
//		if (str != 0)
//		{
//			strcpy_s(this->str,20,obj.str);
//		}
//	}
//	~demo(){ delete str; }
//public:  //应该是私有的，为了例子方便，设置成公有的
//	int a;
//	char *str;  //对于指针数据成员，应该用new动态的在堆上分配内存，然后用指针去操作分配到的存储空间
//};
//int main(){
//	demo a(10,"hello");	
//	demo b = a; //把a复制到b
//	cout << a.a << "," << a.str << endl;
//	cout << b.a << "," << b.str << endl;
//
//	b.a = 8;
//	b.str[0] = 'p';
//	cout << a.a << "," << a.str << endl;
//	cout << b.a << "," << b.str << endl;
//
//	return 0;
//}

//指针管理

//#include<iostream>
//#include"plain-ptr.h"
//#include"value-ptr.h"
//#include"smart-ptr.h"
//using namespace std;
////常规指针
//void test_AHasPtr(){
//	int i = 42;
//	AHasPtr p1(&i, 42);
//	AHasPtr p2 = p1;
//	cout << p2.get_ptr_val() << endl;
//	//修改任何一个都会影响另外一个，会产生悬垂指针
//	p1.set_ptr_val(0);
//	cout << p2.get_ptr_val() << endl;
//}
////智能指针
//void test_BHasPtr(){
//	int obj = 0;
//	BHasPtr ptr1(&obj, 42);
//	BHasPtr ptr2(ptr1);
//	cout << ptr1.get_ptr_val() << "," << ptr1.get_int() << endl;
//	cout << ptr2.get_ptr_val() << "," << ptr2.get_int() << endl;
//	//修改一个会影响另外一个，作用类似浅复制，但是会避免悬垂指针
//	ptr2.set_ptr_val(2);
//	ptr2.set_int(22);
//	cout << "修改以后" << endl;
//	cout << ptr1.get_ptr_val() << "," << ptr1.get_int() << endl;
//	cout << ptr2.get_ptr_val() << "," << ptr2.get_int() << endl;
//
//
//}
////深复制
//void test_CHasPtr(){
//	int obj = 0;
//	CHasPtr ptr1(obj, 42);
//	CHasPtr ptr2(ptr1);
//	cout << ptr1.get_ptr_val() << "," << ptr1.get_int() << endl;
//	cout << ptr2.get_ptr_val() << "," << ptr2.get_int() << endl;
//	//修改任何一个，不会影响另外一个，但是会产生大量的对象，占用大量的内存
//	ptr2.set_ptr_val(6);
//	ptr2.set_int(48);
//	cout << "修改以后" << endl;
//	cout << ptr1.get_ptr_val() << "," << ptr1.get_int() << endl;
//	cout << ptr2.get_ptr_val() << "," << ptr2.get_int() << endl;
//}
//int main(){
//	cout << "常规指针" << endl;
//	test_AHasPtr();
//
//	cout << endl << "值型类，深复制" << endl;
//	test_CHasPtr();
//
//	cout << endl << "智能指针" << endl;
//	test_BHasPtr();
//
//	return 0;
//}
//


////重载操作符
//
//#include<iostream>
//#include<string>
//
//using namespace std;
//
//class Dog{
//
//};
//
//class Sales_item{
//
//public:
//	Sales_item(string &book, unsigned count, double price) 
//		:isbn(book), units_sold(count), revenue(price*count){}
//	Sales_item() :units_sold(0), revenue(0.0){}
//	
//	friend ostream& operator<<(ostream& out, const Sales_item& s);
//	friend istream& operator>>(istream& in, Sales_item& s);
//
//	Sales_item& operator+=(const Sales_item& rhs);  //是修改了当前对象，要返回引用，而且要作为成员函数
//	Sales_item& operator-=(const Sales_item& rhs);
//
//	friend bool operator==(const Sales_item&, const Sales_item&);
//private:
//	string isbn;
//	signed units_sold;
//	double revenue;
//};
//
////重载输出操作符
//ostream& operator<<(ostream& out, const Sales_item& s)
//{
//	out << s.isbn << "\t" << s.units_sold << "\t" << s.revenue;
//	return out;
//}
////重载输入操作符
//istream& operator>>(istream& in, Sales_item& s)
//{
//	double price;
//	in >> s.isbn >> s.units_sold >> price;
//	if (in)  //判断输入是否出错
//		s.revenue = s.units_sold * price;
//	else
//		s = Sales_item();  //如果出错了，则将对象设为默认空对象
//	return in;
//}
//
////加法操作符一般写为非成员函数
//Sales_item operator+(const Sales_item& lhs, const Sales_item& rhs) //要返回一个新值，所以不能返回引用
//{
//	Sales_item ret(lhs);
//	ret += rhs;
//	return ret;
//
//}
//Sales_item& Sales_item::operator+=(const Sales_item& rhs){
//	this->units_sold += rhs.units_sold;
//	this->revenue += rhs.revenue;
//	return *this;
//}
////减法
//Sales_item operator-(const Sales_item& lhs, const Sales_item& rhs)
//{
//	Sales_item ret(rhs);
//	ret -= rhs;
//	return ret;
//}
//Sales_item& Sales_item::operator-=(const Sales_item& rhs){
//	this->units_sold -= rhs.units_sold;
//	this->revenue -= rhs.revenue;
//	return *this;
//}
////重载等于"=="
//inline bool operator==(const Sales_item &lhs, const Sales_item &rhs){
//	return lhs.units_sold == rhs.units_sold && lhs.revenue == rhs.revenue && lhs.isbn == rhs.isbn;
//}
////重载不等于"!=" 就不用写成 成员函数了
//inline bool operator!=(const Sales_item &lhs, const Sales_item & rhs){
//	return !(lhs == rhs);
//}
//
//int main()
//{
//	Dog a;
//
//	Sales_item item(string("0-000-00000-1"), 2, 25);
//	
//	cout << item << endl;
//
//	cin >> item;
//	cout << item << endl;
//
//	cout << "hello" << endl;
//	system("pause");
//	return 0;
//}


//重载赋值操作符

//#include<iostream>
//#include<cstring>
//using namespace std;
//
//
//class String
//{
//public:
//	String(char const *chars = "");
//
//	String &operator=(String const &);
//
//	void print();
//private:
//	char *ptrChar;
//};
//
//String &String::operator=(String const &str){
//	if (strlen(ptrChar)!=strlen(str.ptrChar))
//	{
//		char *ptrHold = new char[strlen(str.ptrChar) + 1];
//		delete[] ptrChar;	
//		ptrChar = ptrHold;
//	}
//	
//	strcpy(ptrChar, str.ptrChar);
//	return *this;  //返回this所指向的对象，赋值操作必须返回*this的引用
//}
//
//String::String(char const *chars){
//	chars = chars ? chars : "";
//	ptrChar = new char[strlen(chars) + 1];
//	strcpy(ptrChar, chars);
//}
//
//void String::print()
//{
//	cout << ptrChar << endl;
//}
//
//int main(){
//	String s("hello");
//	String s2("Dog");
//	s.print();
//	s2.print();
//
//	s = s2;
//	s.print();
//
//	system("pause");
//	return 0;
//}


//重载下标操作符

//#include<iostream>
//
//using namespace std;
//
//class String{
//public:
//	String(char const *chars = "");
//
//	char &operator[](size_t index) throw(String); //可变成员函数，抛出异常
//	char operator[](rsize_t index) const throw(String); //常量成员函数
//
//	void print();
//
//private:
//	char*ptrChars;
//	static String errorMessage;
//};
//
//void String::print(){
//	cout << ptrChars << endl;
//}
//
//String String::errorMessage("Subscript out of range");
//
//char &String::operator[](size_t index) throw(String)  //可变成员函数
//{
//	if (index>=strlen(ptrChars))
//	{
//		throw errorMessage;
//	}
//	return ptrChars[index];
//}
//char String::operator[](size_t index) const throw(String)  //常量成员函数
//{
//	if (index >= strlen(ptrChars))
//	{
//		throw errorMessage;
//	}
//	return ptrChars[index];
//}
//
//
//String::String(char const *chars)
//{
//	chars = chars ? chars : "";
//	ptrChars = new char[strlen(chars) + 1];
//	strcpy(ptrChars, chars);
//}
//
//
//int main(){
//
//	String s("hello");
//
//	cout << s[0] << endl;
//
//	s.print();
//
//	s[0] = 'q';
//	s.print();
//
//	String  const S2("dog");  //调用常量成员函数
//	cout << S2[0] << endl;
//
//	cout << "Hello" << endl;
//	system("pause");
//	return 0;
//}


// 重载成员访问操作符

//#include<iostream>
//#include"string.h"
//#include"pointer.h"
//using namespace std;
//
//
//
//int main(){
//	String s("Hello String");
//	s.display();
//
//	String *ps = &s;  //普通的指针，容易产生悬垂指针
//	ps->display();
//
//	//测试智能指针
//	try
//	{
//		Pointer p1("C++");
//		p1->display();  //重载以后就可以直接用了
//
//		String s = *p1;  //对智能指针进行解引用
//		s.display();
//
//
//		Pointer p2;
//		p2->display();  //未初始化，则抛出异常
//	}
//	catch (String const &error){
//		error.display();
//	}
//
//	cout << "hello" << endl;
//	system("pause");
//	return 0;
//}


// 重载自增自减操作符

//#include<iostream>
//
//using namespace std;
//
//class String{
//public:
//	String(char const *chars = "");
//	String(String const &str);
//	~String();
//
//	void display() const;
//
//	String &operator++(); //前++  返回的是引用
//	String const operator++(int); //后++,  C++在调用的时候会自动传一个零，不需要写参数   返回的是拷贝
//
//
//	String &operator--();
//	String const operator--(int);
//
//private:
//	char *ptrChars;
//};
//
//String &String::operator++()
//{
//	for (size_t i = 0; i < strlen(ptrChars); ++i){
//		++ptrChars[i];
//	}
//	return *this;
//}
//
//String const String::operator++(int)
//{
//	String copy(*this); //把原来的字符串做一个copy,返回copy
//	++(*this);
//	return copy;
//}
//
//String &String::operator--()
//{
//	for (size_t i = 0; i < strlen(ptrChars); ++i){
//		--ptrChars[i];
//	}
//	return *this;
//}
//String const String::operator--(int){
//	String copy(*this);
//	--(*this);
//	return copy;
//}
//
//void String::display()const
//{
//	cout << ptrChars << endl;
//}
//
//String::String(char const *chars){
//	chars = chars ? chars : "";
//	ptrChars = new char[strlen(chars) + 1];
//	strcpy(ptrChars, chars);
//}
//
//String::String(String const &str)
//{
//	ptrChars = new char[strlen(str.ptrChars) + 1];
//	strcpy(ptrChars, str.ptrChars);
//}
//
//String::~String(){
//	delete[] ptrChars;
//}
//
//int main(){
//
//	String s("ABC");
//	s.display();
//
//	++s;
//	s.display();
//
//	s++;
//	s.display();
//
//
//	String s1("456");
//	s1.display();
//	s1--;
//	s1.display();
//	String s2("987");
//	s2.display();
//	--s2;
//	s2.display();
//	system("pause");
//	return 0;
//}


//// 函数对象


//#include<iostream>
//#include<vector>
//#include<list>
//#include<algorithm>
//using namespace std;
//
//// **设计函数对象时一般习惯使用struct
//
////class absint{
////public:
////	int operator()(int val){
////
////	}
////};
//
//struct absInt{
//	//  重载操作符：下面operator后面的小括号就是函数调用操作符
//	int operator() (int val){
//		return val < 0 ? -val : val;
//	}
//};
////普通的模板函数
//template<typename elementType>
//void FunDisplayElement(const elementType &element)
//{
//	cout << element << "";
//}
//
//
////函数对象
//template<typename elementType>
//struct DisplayElement{
//	//存储状态
//	int m_nCount;
//	DisplayElement(){
//		m_nCount = 0;  //构造函数初始化成员
//	}
//	void operator() (const elementType &element)
//	{
//		++m_nCount;
//		cout << element << "";
//	}
//};
//
//int main()
//{
//	int i = -23;
//	absInt absobj;
//	unsigned int j = absobj(i);  //因为对象使用的方法类似于函数，所以把对象叫做函数对象
//
//	cout << i << endl;
//	cout << j << endl;
//
//
//	vector<int> a;
//	for (int n = 0; n < 10; ++n)
//		a.push_back(n);
//
//	list<char> b;
//	for (char c = 'a'; c < 'k'; ++c)
//		b.push_back(c);
//
//	//使用STL的算法
//	for_each(a.begin(), a.end(), DisplayElement<int>());  //for_each 处理 a.begin()  到  a.end() 之间的所有元素
//
//	//显示状态
//	DisplayElement<int> mResult;
//	mResult = for_each(a.begin(), a.end(), mResult);
//	cout << endl;
//	cout << "数量为：" << mResult.m_nCount << endl;  //函数对象可以保存状态
//
//
//	for_each(b.begin(), b.end(), DisplayElement<char>());
//
//	cout << "Hello 函数对象" << endl;
//	return 0;
//}

//一元函数对象，一元谓词

//#include<iostream>
//#include<vector>
//#include<algorithm>
//
//using namespace std;
//
//template<typename numberType>
//struct IsMultiple  //判断是不是整数倍
//{
//	numberType m_Divisor;
//	IsMultiple(const numberType& divisor)
//	{
//		m_Divisor = divisor;
//	}
//
//	bool operator()(const numberType& element) const  //重载调用操作符，且返回值为bool，所以叫做一元谓词
//	{
//		return ((element % m_Divisor) == 0);
//	}
//
//};
//
//int main(){
//	vector<int> vecIntegers;
//	for (int i = 25; i < 101; ++i)
//		vecIntegers.push_back(i);
//	IsMultiple<int> a(4);  //有名称的函数对象. IsMultiple<int>(4) 为匿名的函数对象，可省掉一个变量，直接使用在下面。
//	vector<int>::iterator iElement;
//	iElement=find_if(vecIntegers.begin(), vecIntegers.end(), a);  //find_if有一个返回值，是一个迭代器
//	if (iElement != vecIntegers.end())
//		cout << "第一个4的整数倍的数是：" << *iElement << endl;
//	system("pause");
//	return 0;
//}


//二元函数对象

//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//template<typename elementType>
//class CMultiply //乘法
//{
//public:
//	elementType operator()(const elementType& elem1, const elementType elem2){
//		return elem2*elem1;
//	}
//};
//
//int main(){
//
//	vector<int> a, b;
//	for (int i = 0; i <= 9; ++i)
//		a.push_back(i);
//	for (int j = 100; j <= 109; ++j)
//		b.push_back(j);
//	vector<int> vecResult;
//	vecResult.resize(10);
//	
//	transform(a.begin(), a.end(), b.begin(), vecResult.begin(), CMultiply<int>()); //变换算法
//	for (size_t nIndex = 0; nIndex < vecResult.size(); nIndex++)
//	{
//		cout << vecResult[nIndex] << ' ';
//	}
//
//	cout << endl << "hello" << endl;
//	system("pause");
//	return 0;
//}

//返回值为bool的二元函数对象（二元谓词）

//#include<iostream>
//#include<set>
//#include<string>
//#include<algorithm>
//using namespace std;
//
//class CCompareStringNoCase
//{
//public:
//	bool operator() (const string&str1, const string& str2) const
//	{
//		//将所有字母变为小写字母
//		string str1LowerCase;
//		str1LowerCase.resize(str1.size());
//		transform(str1.begin(), str1.end(), str1LowerCase.begin(), tolower); //tolower 传的是函数指针，不需要使用括号，括号就是函数。
//
//		string str2LowerCase;
//		str2LowerCase.resize(str2.size());
//		transform(str2.begin(), str2.end(), str2LowerCase.begin(), tolower);
//
//		return (str1LowerCase < str2LowerCase);
//	}
//};
//
//int main(){
//	set<string> mx;  //默认的set使用的是默认的谓词，区分大小写
//	set<string,CCompareStringNoCase> names;  //自己编写二元谓词，增加不区分大小写的功能
//	names.insert("Tina");
//	names.insert("jim");
//	names.insert("Jack");
//	names.insert("San");
//	names.insert("hello");
//
//	set<string,CCompareStringNoCase>::iterator iNameFound = names.find("jim");
//	if (iNameFound!=names.end())
//	{
//		cout << "Found it!" << *iNameFound<< endl;
//	}
//	else
//	{
//		cout << "Not found!" << endl;
//	}
//	system("pause");
//	return 0;
//}


//转换函数，转换操作符

//#include<iostream>
//#include<string>
//using namespace std;
//
//class Dog
//{
//public:
//	Dog(string n, int a, double w) :name(n), age(a), weight(w){}
//	operator int() const //转换函数, 必须是成员函数，无返回类型，无参数，通常为const
//	{
//		return age;
//	}
//	operator double() const
//	{
//		return weight;
//	}
//private:
//	int age;
//	double weight;
//	string name;
//};
//
//int main()
//{
//	int a, b;
//	a = 10;
//	b = a;
//	Dog d("bill",6,15.0);
//
//	b = d;  //通过转换函数，将Dog转换为int类型的b
//
//	system("pause");
//	return 0;
//}


//基类和派生类

//#include<iostream>
//#include<string>
//using namespace std;
//
//class Item_base
//{
//
//public:  //在类的外部只能使用公有成员函数
//	Item_base(string book = " ", double sales_price = 0.0) :isbn(book), price(sales_price){}
//	//int x;
//	string book() const
//	{
//		return isbn;
//	}
//
//	//定义成虚函数以后，被继承了以后，在子类中就可以重新定义该函数
//	//非虚函数只能被继承，不可以被重新定义
//	virtual double net_price(size_t n) const  //虚函数
//	{
//		return n*price;
//	}
//private:  //只有在类的内部可以使用
//	string isbn;
//protected:    //受保护的数据成员，专门用来做继承的
//	double price;
//	
//};
//
//class Bulk_item : public Item_base  //公有继承
//{
//public:
//	Bulk_item(const string book = "", double sales_price = 0.0,
//		size_t qty = 0, double disc_rate = 0.0) :Item_base(book, sales_price), //初始化基类
//		min_qty(qty), discount(disc_rate){}
//
//	void test(){
//		//cout << x << endl;
//		cout << price << endl;  //从基类继承了受保护的成员，可以在类的成员函数中使用
//	}
//	void test2(const Bulk_item &d, const Item_base &b)
//	{
//		cout << d.price << endl;  //通过子类可以使用基类的受保护成员
//		//cout << b.x << endl;
//		//cout << b.price << endl;  //通过基类对象不能使用基类的受保护成员，基类的受保护成员只能在类的内部使用，或者是被它的友元使用，或者是被继承
//	}
//
//	double net_price(size_t cnt) const  //重定义继承来的虚函数
//	{
//		if (cnt >= min_qty)
//		{
//			return cnt*(1 - discount)*price;
//		}
//		else
//			return cnt*price;
//	}
//private:
//	size_t min_qty;
//	double discount;
//};
//
//void print_total(ostream &os, Item_base*item, size_t n)  //如果item是一个基类的对象，则调用基类的虚函数，如果是派生类的对象，则调用派生类冲定义的函数，这就实现了动态绑定
//{
//	os << "ISBN" << item->book() << "\tnumber sold;" << n << "\ttotal price:" << item->net_price(n) << endl;
//}
//
//int main(){
//	Item_base item("0-1234567",90.0);
//	cout << item.book() << "," << item.net_price(10) << endl;
//
//	Bulk_item item2("0-1234567", 90.0, 10, 0.12);
//	cout << item2.book() << "," << item2.net_price(10) << endl;
//
//	item2.test();
//	item2.test2(item2, item);
//	//cout << item2.x << endl;  //继承了基类公有的成员
//
//
//	Item_base* a = new Item_base("0-1234567-0", 11.0);
//	Bulk_item* b = new Bulk_item("0-1234567-1", 22.0, 2, 0.05);
//
//	print_total(cout, a, 2);
//	print_total(cout, b, 3);  //***能够接收基类对象的地方，都可以传一个子类对象
//
//	//练习如何实现动态绑定（多态）
//	Item_base* books[5];  //指针数组,  *** 一个指向基类对象的指针，可以指向基类对象，也可以指向派生类对象
//	books[0] = new Item_base("0-123456-1", 90.0);
//	books[1] = new Bulk_item("0-123456-2", 100.0, 6, 0.05);
//	books[2] = new Item_base("0-123456-3", 80.0);
//	books[3] = new Bulk_item("0-123456-4", 70.0, 3, 0.15);
//	books[4] = new Bulk_item("0-123456-5", 90.0, 5, 0.25);
//
//	int num[5];
//	num[0] = 2;
//	num[1] = 10;
//	num[2] = 1;
//	num[3] = 5;
//	num[4] = 3;
//
//	//测试多态
//	for (int i = 0; i < 5; i++)  
//	{
//		print_total(cout, books[i], num[i]);  //通过传入的对象类型，选择调用基类的虚函数或者派生类的重写的虚函数。
//	}
//	system("pause");
//	return 0;
//}


//三种继承

//#include<iostream>
//
//using namespace std;
//
//class A
//{
//public: 
//	A(){
//		a = 10;
//		b = 20;
//		c = 30;
//	}
//	int a;
//protected:
//	int b;
//private:
//	int c;
//};
//// 默认的继承是private私有继承
//class BB :A
//{
//	int x; //默认是私有的
//};
//// struct 默认的继承是public公有继承
//struct BBB :A
//{
//	int m; //默认是公有的
//};
//
////公有继承，不改变基类中数据成员的类型，是公有依然是公有，是保护依然是保护成员
//class B1 :public A  //B1继承了基类A中的a,b,c,但是因为c是私有的，所以不可用
//{
//public:
//	void test(){
//		cout << a << endl;
//		cout << b << endl;  //基类中保护成员可以在子类中使用，不可在外部使用
//	}
//};
//
////私有继承, 继承来的公有和受保护成员都变成了私有成员
//class B2 :private A
//{
//public:
//	using A::a;  //将A中继承的public公有成员变回public公有成员
//	void test()
//	{
//		cout << a << endl;
//		cout << b << endl;
//	}
//};
//
////保护继承, 把A里面的公有成员变成了保护成员
//class B3 :protected A
//{
//public:
//	void test()
//	{
//		cout << a << endl;
//		cout << b << endl;
//	}
//};
//
//class C :public B1
//{
//	void test(){
//		cout << a << endl;   
//		cout << b << endl;
//	}
//};
//
//int main(){
//
//
//	cout << "test" << endl;
//	system("pause");
//	return 0;
//}

////派生类的构造函数
//
//#include<iostream>
//using namespace std;
//
//class A
//{
//public:
//	int X;
//};
//
//class B :public A
//{
//public:
//	int Y;
//};
//
//
//class Base1{
//public:
//	Base1(int i){
//		b1 = i;
//		cout << "Base1的构造函数被调用." << endl;
//	}
//	void print() const
//	{
//		cout << b1 << endl;
//	}
//private:
//	int b1;
//
//};
//
//class Base2{
//public:
//	Base2(int i){
//		b2 = i;
//		cout << "Base2的构造函数被调用." << endl;
//	}
//	void print() const
//	{
//		cout << b2 << endl;
//	}
//private:
//	int b2;
//};
//
//class Base3{
//public:
//	Base3(){
//		b3 = 0;
//		cout << "Base3缺省的构造函数." << endl;
//	}
//	void print() 
//	{
//		cout << b3 << endl;
//	}
//private:
//	int b3;
//
//};
//
//class Member
//{
//public:
//	Member(int i)
//	{
//		m = i;
//		cout << "Member的构造函数被调用." << endl;
//	}
//	int GetM(){
//		return m;
//	}
//private:
//	int m;
//};
//class Derived :public Base1, public Base2, public Base3  //公有继承了三个基类,
//{
//public:
//	Derived(int i, int j, int k, int l);
//	void Print();
//private:
//	int d;
//	Member mem;
//};
//Derived::Derived(int i, int j, int k, int l) :Base1(i), Base2(j), mem(k)  //在构造子类的时候要先构造基类，构造的时候可以传参数，不然的话就默认调用缺省的构造函数
//{
//	d = l;
//	cout << "Derived的构造函数被调用." << endl;
//}
//
//void Derived::Print(){
//	Base1::print();
//	Base2::print();
//	Base3::print();
//	cout << mem.GetM() << endl;
//	cout << d << endl;
//}
//
//
//int main()
//{
//	B b;  //在创建子类的对象的时候，先必须 创建/构造 基类对象
//	b.X = 0;
//	b.Y = 1;
//
//	Derived obj(1, 2, 3, 4);
//
//	return 0;
//}


//派生类的析构函数

//#include<iostream>
//using namespace std;
//
//class Base{
//public:
//	Base(){
//		b1 = b2 = 0;
//	}
//	Base(int i, int j);
//	~Base();
//	void Print(){
//		cout << b1 << "," << b2 << ",";
//	}
//private:
//	int b1, b2;
//};
//Base::Base(int i, int j){
//	b1 = i;
//	b2 = j;
//	cout << "Base的构造函数被调用：" << b1 << "," << b2 << endl;
//}
//Base::~Base()
//{
//	cout << "Base的析构函数被调用：" << b1 << "," << b2 << endl;
//}
//
//class Derived :public Base{
//public:
//	Derived(){
//		d = 0;
//	}
//	Derived(int i, int j, int k);
//	~Derived();
//	void Print();
//private:
//	int d;
//};
//Derived::Derived(int i, int j, int k):Base(i,j),d(k){
//	cout << "Derived的构造函数被调用：" << d << endl;
//}
//Derived::~Derived(){
//	cout << "Derived的析构函数被调用:" << d << endl;
//}
//void Derived::Print(){
//	Base::Print();
//	cout << d << endl;
//}
//
//
//int main()
//{
//	Derived objD1(1, 2, 3), objD2(4, 5, 6);
//	objD1.Print();
//	objD2.Print();
//
//	/*system("pause");*/
//	return 0;
//}


//#include<iostream>
//using namespace std;
//
////定义枚举
//enum BREED {Red, Yellow, Golden};
//
//
//class Mammal  //哺乳动物
//{
//public:
//	Mammal();
//	~Mammal();
//
//	//存取器函数，通过函数操作类成员，叫做封装
//	int GetAge() const { return itsAge; }
//	void SetAge(int age) { itsAge = age; }
//	int GetWeight() const { return itsWeight; }
//	void SetWeight(int weight) { itsWeight = weight; }
//
//	void Speak() const { cout << "Mammal的声音!\n"; }
//	void Sleep() const{ cout << "Shhh. I'm sleeping.\n"; }
//protected:
//	int itsAge;
//	int itsWeight;
//};
//class Dog :public Mammal
//{
//public:
//	Dog();
//	~Dog();
//
//	BREED GetBreed() const { return itsBreed; }
//	void SetBreed(BREED breed) { itsBreed = breed; }
//
//	void WagTail() const { cout << "Tail wagging...\n"; }
//	void BegForFood() const { cout << "Begging for food...\n"; }
//
//private:
//	BREED itsBreed;
//};
//
//Mammal::Mammal() :itsAge(3), itsWeight(5){
//	cout << "Mammal的构造函数被调用...." << endl;
//}
//Mammal::~Mammal()
//{
//	cout << "Mammal的析构函数被调用...." << endl;
//}
//
//Dog::Dog() :itsBreed(Red){
//	cout << "Dog的构造函数被调用...." << endl;
//}
//Dog::~Dog()
//{
//	cout << "Dog的析构函数被调用...." << endl;
//}
//int main(){
//	Dog Fido;
//	Fido.Speak();
//	Fido.WagTail();
//	cout << "Fido is " << Fido.GetAge() << " years old" << endl;
//	return 0;
//}


//转换与继承

//#include<iostream>
//#include<string>
//using namespace std;
//
//class Item_base
//{
//
//public:  //在类的外部只能使用公有成员函数
//	Item_base(string book = " ", double sales_price = 0.0) :isbn(book), price(sales_price){}
//	//int x;
//	string book() const
//	{
//		return isbn;
//	}
//
//	//定义成虚函数以后，被继承了以后，在子类中就可以重新定义该函数
//	//非虚函数只能被继承，不可以被重新定义
//	virtual double net_price(size_t n) const  //虚函数
//	{
//		return n*price;
//	}
//private:  //只有在类的内部可以使用
//	string isbn;
//protected:    //受保护的数据成员，专门用来做继承的
//	double price;
//	
//};
//
//class Bulk_item : public Item_base  //公有继承
//{
//public:
//	Bulk_item(const string book = "", double sales_price = 0.0,
//		size_t qty = 0, double disc_rate = 0.0) :Item_base(book, sales_price), //初始化基类
//		min_qty(qty), discount(disc_rate){}
//
//	void test(){
//		//cout << x << endl;
//		cout << price << endl;  //从基类继承了受保护的成员，可以在类的成员函数中使用
//	}
//	void test2(const Bulk_item &d, const Item_base &b)
//	{
//		cout << d.price << endl;  //通过子类可以使用基类的受保护成员
//		//cout << b.x << endl;
//		//cout << b.price << endl;  //通过基类对象不能使用基类的受保护成员，基类的受保护成员只能在类的内部使用，或者是被它的友元使用，或者是被继承
//	}
//
//	double net_price(size_t cnt) const  //重定义继承来的虚函数
//	{
//		if (cnt >= min_qty)
//		{
//			return cnt*(1 - discount)*price;
//		}
//		else
//			return cnt*price;
//	}
//private:
//	size_t min_qty;
//	double discount;
//};
//
//void print_total(ostream &os, Item_base *item, size_t n)  //如果item是一个基类的对象，则调用基类的虚函数，如果是派生类的对象，则调用派生类冲定义的函数，这就实现了动态绑定
//{
//	os << "ISBN" << item->book() << "\tnumber sold;" << n << "\ttotal price:" << item->net_price(n) << endl;
//}
//
////基类向派生类转换， 在调用以下函数的时候，第二个参数可以传入派生类，因为派生类可以直接转换为基类
////传入对象，调用使用 " . "   （对象转换，调用的方法依然是基类的方法）
//void print_total_1(ostream &os, const Item_base item, size_t n)
//{
//	os << "ISBN: " << item.book() << "\tnumber sold: " << n << "\ttotal price." << item.net_price(n)<<endl;
//}
////传入指针，调用使用 " -> "    （指针转换，可以实现完全转换，传入派生类的指针可以实现调用派生类的方法）（实现多态）
//void print_total_2(ostream &os, const Item_base *item, size_t n)
//{
//	os << "ISBN: " << item->book() << "\tnumber sold: " << n << "\ttotal price." << item->net_price(n) << endl;
//}
////传入引用，调用使用 " . "   （引用转换）（实现多态）
//void print_total_3(ostream &os, const Item_base &item, size_t n)
//{
//	os << "ISBN: " << item.book() << "\tnumber sold: " << n << "\ttotal price." << item.net_price(n) << endl;
//}
//
//
//int main(){
//	Item_base item("0-1234567",90.0);
//	cout << item.book() << "," << item.net_price(10) << endl;
//
//	Bulk_item item2("0-1234567", 90.0, 10, 0.12);
//	cout << item2.book() << "," << item2.net_price(10) << endl;
//
//	item2.test();
//	item2.test2(item2, item);
//	//cout << item2.x << endl;  //继承了基类公有的成员
//
//	//转换
//	print_total_1(cout, item, 10);
//	print_total_1(cout, item2, 10); //这是对象转换，有问题！
//
//	print_total_2(cout, &item, 10);
//	print_total_2(cout, &item2, 10); //这是指针转换，正确！
//
//	print_total_3(cout, item, 10);
//	print_total_3(cout, item2, 10);  //这是引用转换，正确！
//
//	//强制将派生类转换为基类
//	Bulk_item *p = static_cast<Bulk_item *>(&item);  //必须用指针或者引用来进行强制转换，但这样很危险，做C++继承的时候，从来不需要将基类转换为派生类。
//	cout << p->net_price(10) << endl;
//
//
//
//	Item_base* a = new Item_base("0-1234567-0", 11.0);
//	Bulk_item* b = new Bulk_item("0-1234567-1", 22.0, 2, 0.05);
//
//	print_total(cout, a, 2);
//	print_total(cout, b, 3);  //***能够接收基类对象的地方，都可以传一个子类对象
//
//	//练习如何实现动态绑定（多态）
//	Item_base* books[5];  //指针数组,  *** 一个指向基类对象的指针，可以指向基类对象，也可以指向派生类对象
//	books[0] = new Item_base("0-123456-1", 90.0);
//	books[1] = new Bulk_item("0-123456-2", 100.0, 6, 0.05);
//	books[2] = new Item_base("0-123456-3", 80.0);
//	books[3] = new Bulk_item("0-123456-4", 70.0, 3, 0.15);
//	books[4] = new Bulk_item("0-123456-5", 90.0, 5, 0.25);
//
//	int num[5];
//	num[0] = 2;
//	num[1] = 10;
//	num[2] = 1;
//	num[3] = 5;
//	num[4] = 3;
//
//	//测试多态
//	for (int i = 0; i < 5; i++)  
//	{
//		print_total(cout, books[i], num[i]);  //通过传入的对象类型，选择调用基类的虚函数或者派生类的重写的虚函数。
//	}
//	system("pause");
//	return 0;
//}

// 友元与继承

//#include<iostream>
//using namespace std;
//
//class Base{
//	friend class Frnd;  //Frnd是Base的友元，所以Frnd是可以使用Base的受保护成员
//	friend class F1;
//protected:
//	int i;
//};
//
//class B1 :public Base{
//	friend class Frnd;  //要明确的指定友元关系，单独的写上
//private:
//	int j;
//};
//
//class Frnd{
//public:
//	int mem(Base b){ return b.i;}
//	int mem(B1 b1){ return b1.i;}
//};
//
//class F1 :public Frnd{
//public:
//	int mem(Base b)  
//};
//
//int main(){
//
//	system("pause");
//	return 0;
//}

//静态成员，继承

//#include<iostream>
//using namespace std;
//
//class A
//{
//public:
//	static size_t object_count()
//	{
//		return 99;
//	}
//protected:
//	static const size_t obj_count=100;
//};
//
//class B :public A
//{
//public:
//	void f(const B &b, const B *b1){
//		cout << A::obj_count << endl;
//		cout << B::obj_count << endl;
//		cout << b.obj_count << endl;
//		cout << obj_count << endl;
//		cout << b1->obj_count << endl;
//
//		cout << A::object_count() << endl;
//		cout << B::object_count() << endl;
//		cout << b.object_count() << endl;
//		cout << object_count() << endl;
//		cout << b1->object_count() << endl;
//	}
//};
//class C :public B
//{
//
//};
//
//int main(){
//
//	B b;
//	b.f(b,&b);
//	system("pause");
//	return 0;
//}

////纯虚函数与抽象类

//#include<iostream>
//using namespace std;
//
////Shpae是一个抽象类：至少有一个或多个纯虚函数的类，不能创建对象，只能继承，而且在继承的时候必须覆盖继承过来的纯虚函数
//class Shape
//{
//public:
//	Shape(){}
//	virtual ~Shape(){}
//	virtual double GetArea() = 0; // 后面有“=0”的就叫纯虚函数，函数的定义写也可以，不写也可以
//	virtual double GetPerim() = 0;
//	virtual void Draw() = 0;
//};
//
////下面的定义可以省掉，因为它是一个纯虚函数，一般也都不写！！
////void Shape::Draw()
////{
////	cout << "...";  //如果写，就写一些派生类公共的代码
////}
//
//class Circle :public Shape
//{
//	//必须要覆盖从抽象类Shape继承而来的纯虚函数
//public:
//	Circle(int radius) :itsRadius(radius){}
//	virtual ~Circle(){}  //只要类里面有一个成员函数是虚函数，那析构函数必须做成虚函数
//	double GetArea(){ return 3.14*itsRadius*itsRadius; }
//	double GetPerim(){ return 3 * 3.14*itsRadius; }
//	void Draw();
//private:
//	double itsRadius;
//};
//
//void Circle::Draw()
//{
//	cout << "Circle Drawing! " << endl;
//}
//
//class Rectangle :public Shape
//{
//public:
//	Rectangle(int len,int width) :itsWidth(width),itsLength(len){}
//	virtual ~Rectangle(){}
//	//重写继承而来的纯虚函数之后，这些函数依然是虚函数，因此析构函数要写成虚函数
//	double GetArea(){ return itsLength*itsWidth; }
//	double GetPerim(){ return 2 * itsWidth + 2 * itsLength; }
//	virtual int GetLength(){ return itsLength; }
//	virtual int GetWidth(){ return itsWidth; }
//	void Draw();
//private:
//	int itsWidth;
//	int itsLength;
//};
//void Rectangle::Draw(){
//	for (int i = 0; i < itsLength; i++)
//	{
//		for (int j = 0; j < itsWidth; j++)
//		{
//			cout << "* ";
//		}
//		cout << endl;
//	}
//}
//
//class Square :public Rectangle
//{
//public:
//	Square(int len);
//	Square(int len, int width);
//	virtual ~Square(){}
//	double GetPerim(){ return 4 * GetLength(); }
//};
//Square::Square(int len) : Rectangle(len, len){}
//Square::Square(int len, int width) : Rectangle(len, width){
//	if (GetLength() != GetWidth())
//		cout << "Error,not a square" << endl;
//}
//
//int main(){
//
//	//Shape a;  //不可以实例化抽象类
//	//Circle c(10); //已经重写了继承而来的抽象类，因此可以实例化。
//	//c.Draw();
//	//Rectangle r(5, 5);
//	//r.Draw();
//
//	//Square s(8);
//	//s.Draw();
//
//	int choice;
//	bool fQuit = false;
//	Shape *sp = NULL; //定义指针需要初始化。指针必须用new 来创建对象。基类的指针可以指向它的派生类。
//
//	while (fQuit==false)
//	{
//		cout << "1.Circle  2.Rectangle  3.Square  0.Quit: ";
//		cin >> choice;
//		switch (choice)
//		{
//		case 1:
//			sp = new Circle(5);  //指针创建对象
//			break;
//		case 2:
//			sp = new Rectangle(10, 20);
//			break;
//		case 3:
//			sp = new Square(8);
//			break;
//		case 0:
//			fQuit = true;
//			break;
//		}
//		if (fQuit==false)
//		{
//			sp->Draw();
//			delete sp;  //用new创建的对象，一定要用delete删除
//			cout << endl;
//		}
//	}
//	system("pause");
//	return 0;
//}

//抽象类的例子

//#include<iostream>
//using namespace std;
//
//enum COLOR{ wite, black, blue, yellow, red };
//
//class Animal{
//public:
//	Animal(int age) :itsAge(age){ cout << "Animal 的构造函数被调用。。。" << endl; }
//	virtual ~Animal(){ cout << "Animal 的析构函数被调用。。。" << endl; }
//	virtual int GetAge(){ return itsAge; }
//	virtual void SetAge(int a){ itsAge = a; }
//	
//	virtual void Speak() const = 0;
//	virtual void Eat() const = 0;
//	virtual void Move() const = 0;
//
//private:
//	int itsAge;
//};
//
//class Fish :public Animal
//{
//public:
//	Fish(int a) :Animal(a){ cout << "Fish 的构造函数被调用。。。" << endl; }
//	virtual ~Fish(){ cout << "Fish 的析构函数被调用。。。" << endl; }
//	virtual void Speak() const{ cout << "Fish speaking..." << endl; }
//	virtual void Eat() const{ cout << "Fish eating..." << endl; }
//	virtual void Move() const{ cout << "Fish swimming..." << endl; }
//};
//
//class Mammal :public Animal
//{
//public:
//	Mammal(int a, COLOR color) :Animal(a), itsColor(color){ cout << "Mammal 的构造函数被调用。。。" << endl; }
//	virtual ~Mammal(){ cout << "Mammal 的析构函数被调用。。。" << endl; }
//	virtual void Speak() const{ cout << "Mammal speaking。。。" << endl; }
//private:
//	COLOR itsColor;
//};
//
//class Dog :public Mammal
//{
//public:
//	Dog(int age, COLOR color) :Mammal(age, color){ cout << "Dog 的构造函数被调用。。。" << endl; }
//	virtual ~Dog(){ cout << "Dog 的析构函数被调用。。。" << endl; }
//
//	virtual void Speak() const { cout << "Dog speaking..." << endl; }
//	virtual void Eat() const{ cout << "Dog eating.." << endl; }
//	virtual void Move() const{ cout << "Dog running..." << endl; }
//};
//
//class Cat :public Mammal
//{
//public:
//	Cat(int age, COLOR color) :Mammal(age, color){ cout << "Cat 的构造函数被调用。。。" << endl; }
//	virtual ~Cat(){ cout << "Cat 的析构函数被调用。。。" << endl; }
//	virtual void Eat() const {	cout << "Cat eating..." << endl;	}
//	virtual void Move() const{ cout << "Cat jumping..." << endl; }
//
//};
//
//
//int main(){
//	int choice;
//	Animal *a = NULL;
//	bool fQuit = true;
//	while (fQuit)
//	{
//		cout << "1.Fish   2.Dog   3.Cat   :";
//		cin >> choice;
//		switch (choice)
//		{
//		case 1:
//			a = new Fish(1);
//			break;
//		case 2:
//			a = new Dog(2,black);
//			break;
//		case 3:
//			a = new Cat(4, wite);
//			break;
//		default:
//			fQuit = false;
//			break;
//		}
//		if (fQuit)
//		{
//			a->Speak();
//			a->Eat();
//			a->Move();
//			delete a;
//			cout << endl;
//		}
//	}
//	return 0;
//}

//模板与泛型编程

//#include<iostream>
//#include<string>
//#include<iomanip>
//using namespace std;
//
//template<class T>  //类模板，T代表任何一种类型
//class Queue
//{
//	struct Node
//	{
//		T a;
//		Node *next;
//	};
//public:
//	Queue();
//	void push(T b);
//	void pop();
//	int getlenth();
//	virtual void print();
//private:
//	Node *head;
//	Node *rear;
//};
//
//template<class T>  //这里也要写上模板参数，因为它用到了模板
//void Queue<T>::push(T b)
//{
//	Node *p1 = new Node;
//	p1->a = b;
//	p1->next = NULL;
//	rear->next = p1;
//	rear = p1;
//	head->a++;
//	cout << setw(2) << b << setw(2) << "进入队列" << endl;
//}
//
//template<class T>  // 每一个类模板中的成员函数前都要写上
//void Queue<T>::pop()
//{
//	Node *p;
//	p = head->next;
//	cout << " " << setw(2) << p->a << setw(2) << "出队" << endl;
//	head->next = p->next;
//	delete p;
//	head->a--;
//}
//template<class T>
//int Queue<T>::getlenth()
//{
//	return head->a;
//}
//
//template<class T>
//void Queue<T>::print()
//{
//	Node *p;
//	p = head->next;
//	cout << "队列中的元素是： " << endl;
//	while (p)
//	{
//		cout << p->a << " -> ";
//		p = p->next;
//	}
//	cout << "Null" << endl;
//}
//
//template<class T>
//Queue<T>::Queue()
//{
//	rear = head = new Node();
//}
//
//int main(){
//
//	Queue<int> q; //使用类模板的时候要用尖括号指定具体的类型
//	q.push(10);
//
//	Queue<double> d;  //类似于标准模板库在中的 Vector、list、等
//	d.push(2.3);
//
//	/*Queue<string> s;
//	s.push("abcede");*/
//
//	q.print();
//	d.print();
//	//s.print();
//
//	system("pause");
//	return 0;
//}

// 顺序队列(数组）

//#include<iostream>
//#include"顺序队列.h"
//
//using namespace std;
//
//int main()
//{
//	cout << "Test..." << endl;
//
//	Queue<char> q(4);
//	q.Push('A');
//	q.Push('B');
//	q.Push('C');
//	cout << q.Front() << "," << q.Rear() << endl;
//	q.Push('D');
//
//	cout << q.Front() << "," << q.Rear() << endl;
//	q.Push('E');
//	cout << q.Front() << "," << q.Rear() << endl;
//	q.Push('F');
//	cout << q.Front() << "," << q.Rear() << endl;
//	q.Pop();
//	q.Push('G');
//	cout << q.Front() << "," << q.Rear() << endl;
//	return 0;
//}

//链式队列（链表）

//#include<iostream>
//#include"链式队列.h"
//using namespace std;
//
//int main(){
//	cout << "Test......" << endl;
//	Queue<int> myQ;
//	myQ.enQueue(10);
//	myQ.enQueue(20);
//	myQ.enQueue(30);
//	cout << myQ.getFront() << endl;
//	myQ.dequeue();
//	cout << myQ.getFront() << endl;
//
//	for (size_t i = 0; i < 8; i++)
//	{
//		for (size_t j = 0; j < 8; j++)
//		{
//			myQ.enQueue(j);
//		}
//		while (!myQ.isEmpty())
//			cout << myQ.dequeue() << endl;
//	}
//
//	
//	return 0;
//}

//函数模板

//#include<iostream>
//#include<string>
//#include<fstream>
//#include<sstream>
//using namespace std;
//
//template<typename T>
//int compare(const T &v1, const T &v2)
//{
//	if (v1>v2)
//	{
//		return 1;
//	}
//	if (v1<v2)
//	{
//		return -1;
//	}
//	return 0;
//}
//
//template<class T>  //其中的class与类没有任何关系，功能和typename 一样的。
//T isabl(const T &val)
//{
//	return val>0 ? val : -val;
//}
//
//template<typename T1,typename T2>
//T1& print(T1& s, T2 val)
//{
//	s << val;
//	return s;
//}
//
//template<class T>
//const T& bigger(const T& v1, const T& v2) //输入时const，所以函数返回类型也应该是const
//{
//	return v1 > v2 ? v1 : v2;
//}
//
//int main(){
//
//	int result;
//
//	string oristr = "this is a test.";
//	string desstr;  
//	ostringstream oss(desstr); //字符串流
//	ofstream outFile("result.dat");  //文件
//	//输出到输出流
//	print(cout, -1) << endl;
//	print(cout, 9.99) << endl;
//	print(cout, -0.05) << endl;
//	//输出到文件
//	print(outFile, -2) << endl;
//	print(outFile, -0.33) << endl;
//	print(outFile, "dfsdfa") << endl;
//	outFile.close(); //关闭文件
//	//输出到字符串流
//	print(oss, -3) << endl;
//	print(oss, -0.009) << endl;
//	print(oss, "sdf") << endl;
//	cout << oss.str() << endl;  //输出字符串流 
//
//
//	result=compare(1, 2);
//	cout <<"int:      "<< result << endl;
//	
//	result = compare(2.1, 2.0);
//	cout << "dobule:  "<< result << endl;
//
//	result = compare("abc", "def");
//	cout << "string:   " << result << endl;
//
//	double a = -9.1;
//	cout << isabl(a) << endl;
//
//	double v1 = 1.23;
//	double v2 = 3.45;
//	double v3 = 3;
//
//	cout << bigger(v1,v2) << endl;
//	cout << bigger(v2, v3) << endl;
//
//
//	system("pause");
//	return 0;
//}

//异常

//#include<iostream>
//
//using namespace std;
//
//int my_cp(const char *src_file, const char* dest_file){
//	FILE *in_file, *out_file;
//	in_file = fopen(src_file, "rb");// 二进制方式读取文件
//	if (in_file==NULL)  //传统的方法，如果发生错误了，就给一个特殊的返回值
//	{
//		return 1;
//	}
//	out_file = fopen(dest_file, "wb");  //写入文件
//	if (out_file==NULL)
//	{
//		return 2;
//	}
//	char rec[256]; //缓存，一次最多256个字节
//	size_t bytes_in, bytes_out;
//	while ((bytes_in = fread(rec, 1, 256, in_file)) > 0) //实际读取的字节数
//	{
//		bytes_out = fwrite(rec, 1, bytes_in, out_file);
//		if (bytes_in != bytes_out)  //查看读取和写入的字节数是不是一样，如果不一样，则出错，返回一个特殊值
//		{
//			return 3;
//		}
//	}
//}
//
////抛出数字
//void my_cp2(const char *src_file, const char* dest_file){
//	FILE *in_file, *out_file;
//	in_file = fopen(src_file, "rb");// 二进制方式读取文件
//	if (in_file == NULL)  //传统的方法，如果发生错误了，就给一个特殊的返回值
//	{
//		//return 1;
//		throw 2; //throw就是抛出异常：可以用数字，字符串，类对象
//	}
//	out_file = fopen(dest_file, "wb");  //写入文件
//	if (out_file == NULL)
//	{
//		//return 2;
//		throw 2; //throw就是抛出异常：可以用数字，字符串，类对象
//	}
//	char rec[256]; //缓存，一次最多256个字节
//	size_t bytes_in, bytes_out;
//	while ((bytes_in = fread(rec, 1, 256, in_file)) > 0) //实际读取的字节数
//	{
//		bytes_out = fwrite(rec, 1, bytes_in, out_file);
//		if (bytes_in != bytes_out)  //查看读取和写入的字节数是不是一样，如果不一样，则出错，返回一个特殊值
//		{
//			//return 3;
//			throw 3; //throw就是抛出异常：可以用数字，字符串，类对象
//		}
//	}
//}
//
////抛出字符串
//void my_cp3(const char *src_file, const char* dest_file){
//	FILE *in_file, *out_file;
//	in_file = fopen(src_file, "rb");// 二进制方式读取文件
//	if (in_file == NULL)  //传统的方法，如果发生错误了，就给一个特殊的返回值
//	{
//		//return 1;
//		//throw 2; //throw就是抛出异常：可以用数字，字符串，类对象
//		throw "打开源文件出错";
//	}
//	out_file = fopen(dest_file, "wb");  //写入文件
//	if (out_file == NULL)
//	{
//		//return 2;
//		//throw 2; //throw就是抛出异常：可以用数字，字符串，类对象
//		throw "打开目标文件出错";
//	}
//	char rec[256]; //缓存，一次最多256个字节
//	size_t bytes_in, bytes_out;
//	while ((bytes_in = fread(rec, 1, 256, in_file)) > 0) //实际读取的字节数
//	{
//		bytes_out = fwrite(rec, 1, bytes_in, out_file);
//		if (bytes_in != bytes_out)  //查看读取和写入的字节数是不是一样，如果不一样，则出错，返回一个特殊值
//		{
//			//return 3;
//			//throw 3; //throw就是抛出异常：可以用数字，字符串，类对象
//			throw "拷贝文件时出错";
//		}
//	}
//}
//
////要抛出的类
//class BadScrFiel{};
//class BadDestFile{};
//class BadCopy{};
//
////抛出对象
//void my_cp3(const char *src_file, const char* dest_file){
//	FILE *in_file, *out_file;
//	in_file = fopen(src_file, "rb");// 二进制方式读取文件
//	if (in_file == NULL)  //传统的方法，如果发生错误了，就给一个特殊的返回值
//	{
//		//return 1;
//		//throw 2; //throw就是抛出异常：可以用数字，字符串，类对象
//		//throw "打开源文件出错";  //抛出字符串
//		throw BadScrFiel();  //抛出对象，利用构造函数创建对象
//	}
//	out_file = fopen(dest_file, "wb");  //写入文件
//	if (out_file == NULL)
//	{
//		//return 2;
//		//throw 2; //throw就是抛出异常：可以用数字，字符串，类对象
//		//throw "打开目标文件出错";
//		throw BadDestFile();  //抛出对象
//	}
//	char rec[256]; //缓存，一次最多256个字节
//	size_t bytes_in, bytes_out;
//	while ((bytes_in = fread(rec, 1, 256, in_file)) > 0) //实际读取的字节数
//	{
//		bytes_out = fwrite(rec, 1, bytes_in, out_file);
//		if (bytes_in != bytes_out)  //查看读取和写入的字节数是不是一样，如果不一样，则出错，返回一个特殊值
//		{
//			//return 3;
//			//throw 3; //throw就是抛出异常：可以用数字，字符串，类对象
//			//throw "拷贝文件时出错";
//			throw BadCopy(); //抛出对象
//		}
//	}
//}
//
//
//int main(){
//
//	cout << "test..." << endl;
//
//	int result;
//	if ((result = my_cp("1.txt","2.txt")) != 0)
//	{
//		switch (result)
//		{
//
//		case 1:
//			printf("打开源文件出错\n");
//			break;
//		case 2:
//			printf("打开目标文件出错\n");
//			break;
//		case 3:
//			printf("拷贝文件时出错\n");
//			break; 
//		default:
//			printf("发生未知错误\n");
//			break;
//		}
//	}
//
//	try{
//		my_cp2("1.txt", "2.txt");  //有可能出错的代码都放在这里，如果发生异常，就会跳转到catch，否则正常运行
//		my_cp3("1.txt", "2.txt");  //有可能出错的代码都放在这里，如果发生异常，就会跳转到catch，否则正常运行
//	}
//
//	//catch是有先后顺序的，当执行完一个catch后，其与的则不参与运行
//	catch(int e)  //捕获数字异常   
//	{
//		printf("发生异常！！！",e);
//	}
//	catch (const char * e)  //捕获字符串异常
//	{
//		printf("发生异常！！！", e);
//	}
//	//捕获抛出的对象错误
//	catch (BadScrFiel e) 
//	{
//		printf("发生异常，打开源文件时出错！\n");
//	}
//	catch (BadDestFile e)
//	{
//		printf("发生异常，打开目标文件时出错\n");
//	}
//	catch (BadCopy e)
//	{
//		printf("发生异常，拷贝时出错\n");
//	}
//	catch (...) //抓住所有异常
//	{
//		printf("发生未知异常\n");
//	}
//	printf("OK!\n");
//	system("pause");
//	return 0;
//}

//异常类

//#include<iostream>
//using namespace std;
//const int DefaultSize = 10;
//
//class Array  //实现动态数组功能
//{
//public:
//	Array(int itsSize = DefaultSize);
//	~Array(){ delete[] pType; }   //一般对指针都在构造函数里进行new，然后在析构函数中delete
//
//	//运算符重载
//	int &operator[](int offSet);  //下标运算符重载
//	const int &operator[](int offSet) const;  //下标运算符一般都做两个，一个常函数，一个非常函数
//
//
//	//访问器，accessors
//	int GetitsSize() const { return itsSize; }
//
//	//异常类
//	class xBoundary{};
//	class xSize{
//	public:
//		xSize(){}
//		xSize(int size) :itsSize(size){}
//		~xSize(){}
//		int getSize(){ return itsSize; }
//
//		virtual void printErr(){
//			cout << "下标发生异常。。" <<itsSize<< endl;
//		}
//	protected:
//		int itsSize;
//	};
//	class xTooSmall :public xSize{
//	public:
//		xTooSmall(int size) :xSize(size){}
//		virtual void printErr(){
//			cout << "下标太小：" << xSize::itsSize << endl;
//		}
//	};
//	class xTooBig :public xSize{
//	public:
//		xTooBig(int size) :xSize(size){}
//		virtual void printErr(){
//			cout << "下标太大：" << xSize::itsSize << endl;
//		}
//	};
//private:
//	int *pType; // 指针保存数据
//	int itsSize;
//};
//
//int& Array::operator[](int offSet)   //非常函数的下表运算符重载，用来写
//{
//	int size = this->GetitsSize();
//	if (offSet >= 0 && offSet < size) //判断是不是合法的下标范围
//		return pType[offSet];
//	else
//		throw xBoundary(); //抛出异常
//}
//const int& Array::operator[](int offSet) const  //常函数的下标运算符重载,用来读
//{
//	int size = this->GetitsSize();
//	if (offSet >= 0 && offSet < size) //判断是不是合法的下标范围
//		return pType[offSet];
//	else
//		throw xBoundary(); //抛出异常
//}
//
//Array::Array(int size) :itsSize(size)
//{
//	if (size < 10)
//		throw  xTooSmall(size);
//	else if (size>1000)
//		throw xTooBig(size);
//
//	pType = new int[size];
//	for (int i = 0; i < size; i++)
//	{
//		pType[i] = 0;
//	}
//}
//int main(){
//	try{
//		//Array arr1;  // 不传参数则使用定义时赋予的默认值
//		//Array arr2(12);
//		//Array intArray(20);
//		//arr2[5] = 90;
//		//arr2[40] = 90;
//
//		Array intArray(5);
//		//for (int j = 0; j < 100; j++)
//		//{
//		//	intArray[j] = j;
//		//	cout << "intArray[" << j << "] okay..." << endl;  //不发生异常的
//		//}
//	}
//	catch (Array::xBoundary)
//	{
//		cout << "下标越界了。。。" << endl;
//	}
//	catch (Array::xSize& theExp)  //一定要用引用或者指针来传递对象
//	{
//		theExp.printErr();
//	}
//	//使用虚函数，继承关系，然后就可以简化catch的写法，使用多态来完成多个catch的捕获（如上）
//	//catch (Array::xTooBig theExp)
//	//{
//	//	cout << "下标不能太大：" << theExp.getSize() << endl;
//	//}
//	//catch (Array::xTooSmall theExp)
//	//{
//	//	cout << "下标不能太小：" << theExp.getSize() << endl;
//	//}
//	catch (...)
//	{
//		cout << "发生未知错误。。。" << endl;
//	}
//	cout << "Done" << endl;
//
//	cout << "test..." << endl;
//	return 0;
//}

//标准异常类

//#include<iostream>
//#include<new>
//
//using namespace std;
//
//class Dog{
//public:
//	Dog(){
//		parr = new int[1000000];  //4MB
//	}
//private:
//	int *parr;
//};
//
//int main(){
//	Dog *pdog;
//	try{
//		for (int i = 1; i < 1000; i++)
//		{
//			pdog = new Dog();
//			cout << i << ": new dog 成功。" << endl;
//		}
//	}
//	catch (bad_alloc err){
//		cout << "new dog 失败: " << err.what() << endl;
//	}
//	return 0;
//}

///C++标准库的异常

//#include<iostream>
//#include<exception>
//#include<bitset>
//#include<string>
//#include<stdexcept>
//using namespace std;
//
//int main(){
//	try{
//		string s("10h1101");  //如果其中除了1，0 外还有别的字符，则会出现非法的字符异常
//		bitset<10> b(s);
//		cout << "bitset ok." << endl;
//	}
//	catch (invalid_argument err){
//		cout << "bitset error: " << err.what() << endl;
//	}
//}

///自己编写异常类

//#include<iostream>
//#include<stdexcept>
//using namespace std;
//
//class student
//{
//public:
//	student(int age){
//		if (age<0 || age>150)
//			throw out_of_range("The age can not be small than 0 or bigger than 150!!");
//		this->m_age = age;
//	}
//private:
//	int m_age;
//};
//
//int main(){
//	try{
//		student Zhang(500);
//		cout << "The age of student is right!" << endl;
//	} 
//	catch (out_of_range err)
//	{
//		cout << "The age of student is wrong: " << err.what() << endl;
//	}
//	return 0;
//}

//自己写异常类，继承标准异常类

//#include<iostream>
//#include"Stack.h"
//
//using namespace std;
//
//int main(){
//	try{
//		Stack<int> st;
//		st.push(1);
//		st.push(2);
//		st.push(3);
//
//		cout << st.top() << endl;
//		cout << st.pop() << endl;
//		cout << st.pop() << endl;
//		cout << st.top() << endl;
//		cout << st.pop() << endl;
//		cout << st.pop() << endl;
//	}
//	catch (const exception& e)
//	{
//		cerr << "发生异常：" << e.what() << endl;
//	}
//	cout << "Hello Stack." << endl;
//	return 0;
//}


//智能指针

//#include<iostream>
//#include<memory>
//#include"smart_point.h"
//using namespace std;
//
//class Dog{
//
//};
//
////使用C++写好的智能指针来防止内存泄漏
//void demo2(){
//	auto_ptr<double> pd(new double);  //使用智能指针，在函数结束前不用写delete，auto_ptr在头文件#include<memory> 里面
//	*pd = 28.5;
//	cout << *pd << endl;  
//	auto_ptr<Dog> pDog(new Dog()); //也可以用在类上面
//	smart_pointer<Dog> spDog(new Dog());  //自己做的智能指针
//}
//
//
//void demo1(){
//	double d;
//	d = 23.4;
//
//	double *pd = new double;  //从堆上进行内存分配，然后赋给指针pd
//	*pd = 11.1;
//	
//	cout << d << endl;
//	cout << *pd << endl;
//
//	//结束之前，必须使用delete删除指针，否则造成内存泄漏
//	delete pd;  //删除pd所指向的内存进行收回
//
//	return;  //当函数返回的时候，d就销毁了，d的值23.4也就没有了
//}
//
//int main(){
//	demo1();
//	demo2();
//	return 0;
//}


// 命名空间

//#include<iostream>
//
////在头文件中不要使用以下的方法  using，要在使用的时候直接只用 std::~ 的方法
//using namespace std;  //这个会将std中所有的名称都导入进来
//using std::cout;  //最好是用什么写什么
//using std::endl; 
//
//namespace MyApp  //名称空间中可以写函数、变量、类都可以
//{
//	void processTrans(){
//
//	}
//}
//
//namespace MyApp  //可以有多个名称相同的名称空间，不相互冲突，其中的名称允许相同
//{  
//	namespace test //名称空间可以嵌套的
//	{
//
//	}
//}
//
//class ant //没有在任何名称空间中的名称，可以直接使用“ ::ant ”来使用
//{
//
//};
//
//
//namespace bs = MyApp;  //可以使用bs这个别名来代替 MyApp，以简化代码
//int main(){
//	using namespace MyApp;  //导入自己定义的命名空间
//	processTrans();  //在using了以后，直接使用。或使用下行方式
//	MyApp::processTrans;  //直接通过::是用自己定义的命名空间
//
//	return 0;
//}

///多继承

//#include<iostream>
//using namespace std;
//
//enum COLOR{ Red, Blue, Green, Black, White};
//
//class Animal   //大基类
//{
//public:
//	Animal(int);
//	virtual ~Animal(){ cout << "Animal 析构函数被调用。。。" << endl; }
//	virtual int GetAge(){ return itsAge; }
//	virtual void SetAge(int age){ itsAge = age; }
//private:
//	int itsAge;
//};
//Animal::Animal(int age) :itsAge(age)
//{
//	cout << "Animal的构造函数被调用。。。" << endl;
//}
//
////有可能被继承的类中的函数应该做成虚函数
//class Horse:virtual	public Animal  //Horse虚继承Animal
//{
//public:
//	Horse(int age, COLOR color, int height);
//	virtual ~Horse(){ cout << "Horse 的析构函数被调用。。。" << endl; }
//	virtual void Whinny() const { cout << "Whinny...." << endl; }
//	virtual int GetHeight() const { return itsHeight; }
//	virtual COLOR GetColor() const { return itsColor; }
//private:
//	int itsHeight;
//	COLOR itsColor;
//};
//Horse::Horse(int age,COLOR color, int height) :Animal(age),itsColor(color),itsHeight(height)
//{
//	cout << "Horse 的构造函数被调用。。。" << endl;
//} 
//
//class Bird:virtual public Animal //Bird也是虚继承Animal
//{
//public:
//	Bird(int age, COLOR color,bool migrates);
//	virtual ~Bird(){ cout << "Bird 的析构函数被调用。。。" << endl;	}
//	virtual void Chrip() const { cout << "Chirp..." << endl; } //鸟叫
//	virtual void Fly() const { cout << "I can fly..." << endl; }
//	virtual bool GetMigration() const { return itsMigration; }
//	virtual COLOR GetColor() const{ return itsColor; }
//private:
//	bool itsMigration; //鸟是否迁移
//	COLOR itsColor;
//};
//Bird::Bird(int age, COLOR color,bool migrates) :Animal(age),itsColor(color),itsMigration(migrates)
//{ 
//	cout << "Bird 的构造函数被调用。。。" << endl;
//}
//
//class Pegasus /*会飞的马*/ : public Horse, public Bird
//{
//public:
//	Pegasus(int, COLOR,int, bool, long);
//	~Pegasus(){ cout << "Pegasus 的析构函数被调用。。。" << endl; }
//	void Chrip() const { Whinny(); }
//	virtual long GetNumberBelievers() const{ return itsNumberBelievers; }
//private:
//	long itsNumberBelievers;
//};
//
//
//Pegasus::Pegasus(int age,COLOR c, int h, bool m, long n ) :Horse(age,c, h), Bird(age,c, m), itsNumberBelievers(n), Animal(age) //构造函数，构造时要把所有继承的基类都构造好
//{
//	cout << "Pegasus 的构造函数被调用。。。" << endl;
//}
//
//int main(){
//	Pegasus *pPeg = new Pegasus(2, Blue,5, true, 10);
//	pPeg->Fly();
//	pPeg->Whinny();
//	pPeg->Chrip();
//
//	COLOR c = pPeg->Bird::GetColor(); //可以解决一般二义性问题
//	COLOR c1 = pPeg->Horse::GetColor();  
//
//	//int age = pPeg->GetAge();  //Pegasus从Bird和Horse中都继承了大基类中的GetAge()，那么就会出现二义性（可以使用虚基类解决）
//	int age = pPeg->GetAge();  //在使用了虚继承以后，就避免了产生二义性
//
//	cout << "有 " << pPeg->GetNumberBelievers() << " 相信世界上有 "<<pPeg->Bird::GetColor()<<" 颜色的飞马。。。" << endl;
//
//	delete pPeg;  //delete对象的时候，就调用了析构函数
//	system("pause");
//	return 0;
//}


//最后一节，特殊工具与技术

//#include<iostream>
//#include<string>
//using namespace std;
//
//class Item_base
//{
//public:
//	virtual double net_price(size_t n) const
//	{
//		class Cat{ };  //局部类，智能在此函数之内使用
//
//		return n*price;
//	}
//	class Dog{};   //嵌套类
//public:
//	string isbn;
//protected:
//	double price;
//};
//class Bulk_item :public Item_base
//{
//public:
//	double net_price(size_t cnt) const
//	{
//		if (cnt > min_qty)
//		{
//			return cnt*(1 - discount)*price;
//		}
//		else
//			return cnt*price;
//	}
//private:
//	size_t min_qty;
//	double discount;
//};
//
//union TokenValue //联合（类似于类)（union中只有最大的double的八个字节
//{
//	char cval;    //char是一个字节    占用union中第一个字节
//	int ival;     //int是四个字节     占用union中第1~4个字节
//	double dval;  //double是八个字节  占用union中所有自己
//};
//
////位域，一般使用无符号的整形来做
//typedef unsigned int Bit;
//class File{
//public:
//	Bit mode : 2; //拿32位Bit中的两位做 mode
//	Bit modified : 1;
//	Bit prot_owner : 3;
//	Bit prot_group : 3;
//	Bit prot_word : 3;
//};
//
//enum { READ = 01, WRITE = 02 };
//
//int main(){
//
//	File myFile;
//	myFile.mode = WRITE;  //使用位域
//
//	int x;
//	volatile int y;  //易失的，告诉C++，不要对这个变量进行优化
//
//
//	TokenValue myToken = { 'a' };  //占用了union中第一个字符
//	cout << myToken.ival << endl;  // 读取int型是，因为第一个字符是‘a' 所以，读到的是97
//
//	Item_base *pItem = new Item_base();  //可以用new来分配内存，创建对象
//
//	allocator<Item_base> a;  //使用allocator分配内存，可以指定内存大小，可以自己管理内存
//	a.allocate(100);
//
//	Item_base *bp = new Item_base();
//	Bulk_item *dp = new Bulk_item();
//
//	Item_base *bp2 = dp;  //派生类对象转变为基类对象，向上转型
//	Bulk_item *dp2 = dynamic_cast<Bulk_item*>(bp);//使用动态类型转换（就属于RTTI）把基类对象转变成派生类对象
//	if (typeid(Bulk_item) == typeid(*dp))  //使用typeid检查类型
//		cout << "Bulk_item 类型" << endl;
//	cout << typeid(*bp).name() << endl;  ///typeid返回值为typeinform，会返回类名
//	cout << typeid(*dp).name() << endl;
//
//	string Item_base::*p = &Item_base::isbn; //p指针指向的是类Item_base的字符串成员 
//	double(Item_base::* pmf)(size_t) const = &Item_base::net_price;  //指向Item_base类的函数的指针 pmf
//
//	Item_base::Dog dog;  //嵌套类Dog的对象定义
//
//	system("pause");
//	return 0;
//}