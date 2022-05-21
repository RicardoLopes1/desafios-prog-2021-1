/**
 * @param {number[]} nums
 * @return {number}
 * https://leetcode.com/problems/find-numbers-with-even-number-of-digits/
 */

const nums = [12,345,2,6,7896]
var findNumbers = function(nums) {
  return nums.filter(num => String(num).length % 2 === 0).length;
  
};

console.log(findNumbers(nums));