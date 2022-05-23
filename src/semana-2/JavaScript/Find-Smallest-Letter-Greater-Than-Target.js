/**
 * @param {character[]} letters
 * @param {character} target
 * @return {character}
 * https://leetcode.com/problems/find-smallest-letter-greater-than-target/
 */
const letters = ["c","f","j"];
const target = "z";
 var nextGreatestLetter = (letters, target) => {

    for (var letter of letters) {
      if (target < letter) return letter;
    }
    return letters[0];
};

console.log(nextGreatestLetter(letters, target));