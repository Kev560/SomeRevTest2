#ifndef REV_H
#define REV_H
using namespace std;

class Rev
{
private:
	int num;

public:
	Rev();
	~Rev();
	int getNum();
	void setNum(int);

	Rev operator+(Rev &);
	Rev operator-(Rev &);
	friend istream &operator>>(istream &is, Rev &);
	friend ostream &operator<<(ostream &os, const Rev &);


};
#endif