class Sales_data
{
public:
	Sales_data() = default;
	Sales_data(const std::string &book): bookNo(book) { }
	Sales_data(const std::string &book, const unsigned num, 
		const double sellp, const double salep);
	Sales_data(std::istream &is);
public:
	std::string bookNo;
	unsigned units_sold = 0;
	double sellingprice = 0.0;
	double saleprice = 0.0;
	double discount = 0.0;
};

Sales_data::Sales_data(const std::string &book, const unsigned num, 
	const double sellp, const double salep)
	{
		bookNo = book;
		units_sold = num;
		sellingprice = sellp;
		saleprice = salep;
		if (sellingprice != 0) 
			discount = saleprice / sellingprice;
	}

Sales_data::Sales_data(std::istream &is) 
{
	is >> *this;
}