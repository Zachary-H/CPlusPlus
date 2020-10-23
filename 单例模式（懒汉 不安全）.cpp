
class SingleTon
{
public:
	static SingleTon* getInstance()
	{
		if (psing == NULL)
		{
			psing = new SingleTon();
		}
		return psing;
	}
private:
	SingleTon(){};
	SingleTon(const SingleTon&);
	static SingleTon* psing;

};
SingleTon* SingleTon::*psing = NULL;