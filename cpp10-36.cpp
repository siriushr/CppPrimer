//
//  cpp10-36.cpp
//  myPlayground
//
//  Created by 黄然 on 15/11/17.
//  Copyright © 2015年 黄然. All rights reserved.
//

#include <iostream>
#include <list>
#include <algorithm>
using namespace std;

int main() {
    list<int> lst = {1, 2, 0, 3, 4, 5, 0, 34, 5};
    auto i = find(lst.rbegin(), lst.rend(), 0);
    cout << *i << endl;
    return 0;
}
