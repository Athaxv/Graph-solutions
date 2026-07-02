class Solution {
    /**
     * @param {number[]} nums
     * @return {boolean}
     */
    hasDuplicate(nums) {
        const map = new Map();
        for(const a of nums){
            if (map.has(a)){
                return true;
            }
            map.set(a, true)
        }
        return false;
    }
}
