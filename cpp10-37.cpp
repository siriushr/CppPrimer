//
//  cpp10-37.cpp
//  myPlayground
//
//  Created by 黄然 on 15/11/17.
//  Copyright © 2015年 黄然. All rights reserved.
//

#include <iostream>
#include <vector>
#include <list>
#include <iterator>
#include <algorithm>

using namespace std;
int main() {
    vector<int> ivec = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    ostream_iterator<int> out_iter(cout, " ");
    copy(ivec.begin(), ivec.end(), out_iter);
    cout << endl;
    
    list<int> li;
    vector<int>::reverse_iterator re(ivec.begin()+2);
    vector<int>::reverse_iterator rb(ivec.begin()+7);
    copy(rb, re, back_inserter(li));
    copy(li.begin(), li.end(), out_iter);
    cout << endl;
    
    return 0;
}
