/**
 * @param {number} numBottles
 * @param {number} numExchange
 * @return {number}
 */
const numWaterBottles = (numBottles, numExchange) => {
    let bottle, answer = bottle = numBottles
    while (bottle >= numExchange) {
        bottle -= numExchange
        ++answer
        ++bottle
    }
    return answer
}

console.log(numWaterBottles(9, 3))
