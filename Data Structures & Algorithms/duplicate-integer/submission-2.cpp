#include <unordered_set>
#include <iostream>
using namespace std;
class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        /** 
        look at the first  O(n)
        check if the first valeu a duplicate or not
        check if the second element is thr sme as he others etc
        which then becomes O(n^2) n is the size of th einput array basically
        so it can be optimized better
        by doing sorting
        */

        /** 
        if we sort the input any duplicates will be adjacent meaning
        we only have to iterate the array once
        we can shift our pointers to the end of the duplicates

        sorting takes extra time complexity so its O(nlogn)
        we dont need extra space if we dont count the space thats used by the sorting algorithm

        if we sacrafic space complexity we salvage memory complexity (time)

        hash set allows us toinsert elements into the set
        we can ask our hashmap if a certain value exists
        so far nothing is in there so 1 is not a duplicate,
        after we check if its a duplicate we can determine it is one because
        there is already a 1 in our has set for example with {1,2,3,1}
        */

        // HASH SET O(n) and O(n)
        // creates a hashset of type int
        // HASH SET: is a container in which does NOT store elements in sorted order therfore it is unordered_set in C++
        unordered_set<int> hashSet;
        for(int num : nums){
            if(hashSet.count(num)){ // if it counts num in hashSet then it considered a duplicate as it returns if it exists or not when you do if you can count this specific value in the hashSet then it returns that
                return true;
            }
                hashSet.insert(num);
        } 
        return false;
    }
};