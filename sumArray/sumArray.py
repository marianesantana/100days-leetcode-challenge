
from re import S

#o(n2) | space o(1)
# def sumArray(array, targetSum):
#     for i in range(len(array) -1):
#         firstNum = array[i]
#         for prox in range(i + 1, len(array)):
#             secondNum = array[prox]
#             if firstNum + secondNum == targetSum:
#                 print [firstNum, secondNum]
#                 return [firstNum, secondNum]
#     return []

# o(n) time | o(n) space
# def sumArray(array, targetSum):
#     nums = {}
#     for num in array:
#         if targetSum - num in nums:
#             print([targetSum - num, num])
#             return [targetSum - num, num]
#         else:
#             nums[num] = True
#     return [] 

# o(log(n)) | o(1) space
def sumArray(array, targetSum):
    array.sort()
    left = 0
    right = len(array) -1
    while left < right:
        currentSum = array[left] + array[right]
        if currentSum == targetSum:
            print([array[left], array[right]])
            return [array[left], array[right]]
        elif currentSum < targetSum:
            left += 1
        elif currentSum > targetSum:
            right -= 1
    return []



sumArray([3, 5, -4, 8, 11, 1, -1, 6], 10)
