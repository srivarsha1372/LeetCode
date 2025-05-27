class Solution:
    def merge(self, nums1: List[int], m: int, nums2: List[int], n: int) -> None:
        """
        Do not return anything, modify nums1 in-place instead.
        """

        if(n == 0):
            return
        
        end_idx =  m + n - 1
        m -= 1
        n -= 1

        while n >= 0 and m >= 0:
            if nums2[n] >= nums1[m]:
                nums1[end_idx] = nums2[n]
                n -= 1
            else:
                nums1[end_idx] = nums1[m]
                m -= 1
            end_idx -= 1
        while n >= 0:
            nums1[end_idx] = nums2[n]
            n -= 1
            end_idx -= 1
         

        
        
