class SingleTon
{
public:
	static SingleTon* getInstance()
	{
		return psing;
	}
private:
	SingleTon(){};
	SingleTon(const SingleTon&);
	static SingleTon* psing;
};
SingleTon* SingleTon::psing = new SingleTon();