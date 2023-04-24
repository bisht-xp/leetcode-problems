// Problem 1046. Last Stone Weight
// You are given an array of integers stones where stones[i] is the weight of the ith stone.

// We are playing a game with the stones. On each turn, we choose the heaviest two stones and smash them together. Suppose the heaviest two stones have weights x and y with x <= y. The result of this smash is:

// If x == y, both stones are destroyed, and
// If x != y, the stone of weight x is destroyed, and the stone of weight y has new weight y - x.
// At the end of the game, there is at most one stone left.

// Return the weight of the last remaining stone. If there are no stones left, return 0.


#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <math.h>

int lastStoneWeight(std::vector<int> &stones){
    int n = stones.size();
    std::priority_queue<int> pq;
    for(int i=0; i<n; i++) {
        pq.push(stones[i]);
    }

    while(pq.size() > 1) {
        int x = pq.top();
        pq.pop();
        int y = pq.top();
        pq.pop();
        std::cout << x << " " << y << std::endl;
        int val = abs(x-y);
        if(val != 0) pq.push(val);
        std::cout << "val" << " " << val << std::endl;
    }



    return pq.empty()? 0: pq.top();

}

int main() {
    std::vector<int> stones = {1};
    int ans = lastStoneWeight(stones);
    std::cout << "ans "  << ans << std::endl;
    return 1; 
}