class Solution:
    def nextGreaterElement(self, nums1: List[int], nums2: List[int]) -> List[int]:
            res = []
            nums2_map = {}

            for i in range(len(nums2)):
                nums2_map[nums2[i]] = -1
                for j in range(i+1, len(nums2)):
                    if nums2[j] > nums2[i]:
                        nums2_map[nums2[i]] = nums2[j]
                        break

            for i in range(len(nums1)):
                res.append(nums2_map[nums1[i]])

            return res
