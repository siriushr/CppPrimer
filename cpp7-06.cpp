Sales_data add(const Sales_data &lhs, const Sales_data &rhs)
{
	Sales_data sum = lhs;
	lhs.combine(rhs);
	return sum;
}

std::istream &read(std::istream, Sales_data &item)
{
	is >> item.bookNo >> item.units_sold >> item.sellingprice 
	>> item.saleprice;
	return is;
}

std::ostream &print(std::ostream, const Sales_data &item)
{
	os << item.bookNo << " " << item.units_sold << " " << item.sellingprice 
	<< " " << item.saleprice << " " << item.discount;
	return os;
}