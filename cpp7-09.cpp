std::istream &read(std::istream is, Person &per)
{
	is >> Person.strName >> Person.strAddress;
	return is;
}

std::ostream &print(std::ostream os, Person &per) 
{
	os << Person.strName << Person.strAddress;
	return os;
}