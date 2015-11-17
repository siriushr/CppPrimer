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
    list<int> l;
    copy(ivec.crbegin() + 3, ivec.crbegin() + 8, back_inserter(l));
    for (auto i: l)
        cout << i << endl;
    return 0;
}
