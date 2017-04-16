//使用智能指针

//智能指针类, 所有成员都必须是私有成员
class U_Ptr{
	friend class BHasPtr;
private:
	int *ip;
	size_t use; //计数，当前指向这个对象的指针个数
	U_Ptr(int *p) :ip(p), use(1){}
	~U_Ptr(){ delete ip; }
};

class BHasPtr{
public:
	BHasPtr(int *p, int i) :ptr(new U_Ptr(p)), val(i){}
	//复制构造函数
	BHasPtr(const BHasPtr &orig) :ptr(orig.ptr), val(orig.val){ ++ptr->use; }
	//赋值操作符
	BHasPtr& operator=(const BHasPtr &rhs){
		++rhs.ptr->use;
		if (--ptr->use == 0)
		{
			delete ptr;
		}
		ptr = rhs.ptr;
		val = rhs.val;
		return *this;
	}

	//析构函数,先检查计数是否为零，为零了再删除指针
	~BHasPtr(){
		if (--ptr->use == 0)
			delete ptr;
	}

	int *get_ptr() const { return ptr->ip; }
	int get_int() const { return val; }

	void set_ptr(int *p) { ptr->ip = p; }
	void set_int(int i) { val = i; }

	int get_ptr_val() const { return *ptr->ip; }
	void set_ptr_val(int val){ *ptr->ip = val; }
private:
	int val;
	//int *ptr;
	U_Ptr *ptr;  //智能指针
};