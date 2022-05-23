/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number}
 * https://leetcode.com/problems/search-insert-position/
 */

const nums = [1,3,5,6]; 
const target = 5;

var searchInsert = (nums, target) => {
  var init = 0;
  var end = nums.length - 1;
  var mid = Math.floor((end + init) / 2);  

  while (init <= end) {
    if (target > nums[mid]) {
      init = mid + 1;
    } else if(target < nums[mid]) {
      end = mid - 1;
    } else {
      return mid;
    }
    
    mid = Math.floor((end + init) / 2);
  }
  return init;
};

console.log(searchInsert(nums, target));