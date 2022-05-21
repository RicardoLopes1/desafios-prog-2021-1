/**
 * @param {number[]} nums
 * @param {number} n
 * @return {number[]}
 * https://leetcode.com/problems/shuffle-the-array/
 */
const nums = [1,2,3,4,4,3,2,1];
const n = 4
var shuffle = function(nums, n) {
  let result = [];
  for (let i = 0; i < n; i++) {
    result.push(nums[i]);
    result.push(nums[i + n]);
  }
  return result; 
};

console.log(shuffle(nums, n));