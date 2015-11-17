//
//  cpp10-35.cpp
//  myPlayground
//
//  Created by 黄然 on 15/11/17.
//  Copyright © 2015年 黄然. All rights reserved.
//

#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> ivec = {1, 2, 3, 4, 5, 6};
    
    for (auto e = ivec.end() - 1; e != ivec.begin() - 1; e--)
        cout << *e << " ";
    cout << endl;
    return 0;
}
