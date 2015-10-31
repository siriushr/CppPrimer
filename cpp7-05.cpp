class Person {
private:
	string strName;
	string strAddress;

public:
	string getName() const { return strName; }
	string getAddress() const { return strAddress; }

public:
	Person() = default;
	Person(const string &name, const string &add) {
		strName = name;
		strAddress = add;
	}
	Person(std::istream &is) { is >> *this; }
};