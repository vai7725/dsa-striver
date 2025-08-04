const bruteForce = (n) => {
  let count = 0
  while (n > 0) {
    count++
    n = Math.floor(n / 10)
  }
  console.log(count)
}

const optimal = (n) => {
  let count = Math.floor(Math.log10(n) + 1)
  console.log(count)
}

optimal(123123)
