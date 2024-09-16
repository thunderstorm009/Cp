public class Solution
{
    public int SubarraysDivByK(int[] nums, int k)
    {
        int count = 0;
        int prefixSum = 0;
        Dictionary<int, int> remainderMap = new Dictionary<int, int>();
        remainderMap[0] = 1;

        foreach (int num in nums)
        {
            prefixSum += num;
            int mod = ((prefixSum % k) + k) % k;

            if (remainderMap.ContainsKey(mod))
            {
                count += remainderMap[mod];
                remainderMap[mod]++;
            }
            else
            {
                remainderMap[mod] = 1;
            }
        }

        return count;
    }
}
