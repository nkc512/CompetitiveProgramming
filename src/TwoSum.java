import java.util.HashMap;
import java.util.Map;

class Solution {
    public int[] twoSum(int[] nums, int target) {
        Map<Integer,Integer> mp = new HashMap<Integer,Integer>();
        int complement;
        for(int i=0;i<nums.length;i++)
        {
            complement=target-nums[i];
            if(mp.containsKey(complement))
            {
                complement=mp.get(complement);
                return new int[] {i,complement};
            }
            mp.put(nums[i],i);
        }
        return new int[] {0,0};
    }
}