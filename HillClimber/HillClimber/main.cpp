//
//  main.cpp
//  HillClimber
//
//  Created by Reem Alattas on 6/20/16.
//  Copyright © 2016 ReemAlattas. All rights reserved.
//

#include <iostream>
using std::cout;
using std::endl;

#include <vector>
using std::vector;

int fitness(vector<int> &parent);

int main(int argc, const char * argv[]) {
    
    vector<int> parent(13, 0);
    vector<int> child(13, 0);
    vector<int> temp(13, 0);
    
    int fit_parent = fitness(parent);
    int fit_child = fitness(child);
    
    return 0;
}

//Fitness Function
int fitness(std::vector<int> &parent)
{
    int fit = 0;
    
    for (int i = 0; i < parent.size(); i++) {
        fit += parent[i];
    }
    
    return fit;
}
