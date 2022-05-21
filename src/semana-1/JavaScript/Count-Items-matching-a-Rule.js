/**
 * @param {string[][]} items
 * @param {string} ruleKey
 * @param {string} ruleValue
 * @return {number}
 * https://leetcode.com/problems/count-items-matching-a-rule/
 */
 const items  = [["phone","blue","pixel"],["computer","silver","phone"],["phone","gold","iphone"]]; 
 const ruleKey = "type"; 
 const ruleValue = "phone";

var countMatches = function(items, ruleKey, ruleValue) {
  var rk = 0;

  switch (ruleKey) {
    case "type":
      rk = 0;
      break;

    case "color":
      rk = 1;
      break;

    case "name":
      rk = 2;
      break;
  
    default:
      break;
  }
  
  return items.filter(item => item[rk] === ruleValue).length;
};

console.log(countMatches(items, ruleKey, ruleValue));