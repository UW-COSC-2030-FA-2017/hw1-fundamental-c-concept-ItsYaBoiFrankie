#include <iostream>
using std::cout;
using std::endl;
using std::ostream;

class VBase
{
public:
	VBase(int vs = 0) { setStuff(vs); }

	virtual int  getStuff() const 
	{ 
		return stuff; 
	}
	virtual void setStuff(int s) 
	{
		stuff = (s >= 0) ? s : 0; 
	}

protected:
	int  stuff;
	//The only way to modify this variable is through a public method.

private:
	virtual void makeAbs() const = 0;

};

class VDerived : public VBase
{
public:
	VDerived(int vs = 0) { setStuff(vs); }

	void setStuff(int s)
	{
		VBase::setStuff(s);
		weight = stuff * 2;
		//Sets both the stuff and weight variables. Weight should always should be
		//double stuff
	}

	int getStuff() const
	{
		return weight * stuff;
	}

private:
	virtual void makeAbs() const { };
	int weight;

};


