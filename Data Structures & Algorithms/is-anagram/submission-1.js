class Solution {
    /**
     * @param {string} s
     * @param {string} t
     * @return {boolean}
     */
    isAnagram(s, t) {
        const map = new Map();
        
        for(const ch of s){
            map.set(ch, (map.get(ch) || 0) + 1)
        }
        for(const ch of t){
            if (!map.has(ch)) return false

            map.set(ch, map.get(ch) - 1)

            if (map.get(ch) == 0){
                map.delete(ch);
            }
        }

        return map.size === 0;
    }
}
