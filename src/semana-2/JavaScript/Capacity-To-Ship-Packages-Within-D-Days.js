/**
 * @param {number[]} weights
 * @param {number} days
 * @return {number}
 * https://leetcode.com/problems/capacity-to-ship-packages-within-d-days/
 */
const weights = [1,2,3,4,5,6,7,8,9,10];
const days = 5;

var shipWithinDays = (weights, days) => {
  const initialValue = 0;  
  const sumOfWeights = weights.reduce(
    (previousValue, currentValue) => previousValue + currentValue, initialValue);
  
  var day = 0, accumulator = 0;
  var init = Math.max(...weights);
  var mid = 0, end = sumOfWeights;
  var solve = 0;
  
  while(init <= end) {
    mid = Math.floor((end + init) / 2);
    day = 0;
    
    for (var weight of weights) {
      accumulator += weight;

      if(accumulator > mid) {
        accumulator = weight;
        day++; 
      }else if (accumulator == mid) {
        accumulator = 0;
        day++;
      }
    }

    if (accumulator > 0) {
      day++;
      accumulator = 0;
    }

    if(day > days) {
      init = mid + 1;
    } else {
      solve = mid;
      end = mid - 1;
    }
  }
  return solve;
};

console.log(shipWithinDays(weights, days));