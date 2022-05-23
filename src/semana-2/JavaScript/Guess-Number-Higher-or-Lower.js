/** 
 * Forward declaration of guess API.
 * @param {number} num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * var guess = function(num) {}
 */

/**
 * @param {number} n
 * @return {number}
 * https://leetcode.com/problems/guess-number-higher-or-lower/
 */

const pickedNumber = 25;
const n = 100;

var guess = (num) => {
  if (num > pickedNumber) {
    return -1;
  } else if (num < pickedNumber) {
    return 1;
  } else {
    return 0;
  }
}

var guessNumber = (n) => {
  var init = 1, end = n;
  var mid = 0;

  while (guess(mid) !== 0) {
    mid = Math.floor((end + init) / 2);

    if (guess(mid) === -1) {
      end = mid - 1;
    } else {
      init = mid + 1;
    }
  }

  return mid;
};

console.log(guessNumber(n));