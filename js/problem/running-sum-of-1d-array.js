/**
 * 一维数组的动态和
 * @param nums
 * @returns {[*]}
 */
const runningSum = nums => {
    let result = [nums[0]]
    for (let i = 1; i < nums.length; i++) {
        result[i] = result[i - 1] + nums[i]
    }
    return result
}

console.log(runningSum([1, 2, 3, 4]))
