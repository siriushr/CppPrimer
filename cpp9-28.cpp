void func(forward_list<string> fstr, string str1, string str2)
{
	auto prev = fstr.before_begin();
	auto curr = fstr.begin();

	bool find = false;
	while (curr != fstr.end()) {
		if (*curr == str1) {
			fstr.insert_after(curr, str2);
			find = true;
		} 
		++prev;
		++curr;
	} 

	if (!find) 
		fstr.insert_after(prev, str2);
}