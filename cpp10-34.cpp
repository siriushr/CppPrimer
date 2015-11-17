//
//  cpp10-34.cpp
//  myPlayground
//
//  Created by 黄然 on 15/11/17.
//  Copyright © 2015年 黄然. All rights reserved.
//

#include <iostream>
#include <vector>
#include <iterator>
using namespace std;

int main() {
    vector<int> ivec = {1, 2, 3, 4, 5, 6};
    
    for (auto b = ivec.rbegin(); b != ivec.rend(); b++)
        cout << *b << " ";
    cout << endl;
    return 0;
}
