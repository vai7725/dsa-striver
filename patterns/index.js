const printSquare = (n) => {
  for (let i = 0; i < n; i++) {
    for (let j = 0; j < n; j++) {
      process.stdout.write('#')
    }
    console.log('\n')
  }
}

const printRightTriangle = (n) => {
  for (let i = 0; i < n; i++) {
    for (let j = 0; j < i; j++) {
      process.stdout.write('#')
    }
    console.log('\n')
  }
}

const printRightTriangleJ = (n) => {
  for (let i = 0; i < n; i++) {
    for (let j = 0; j < i; j++) {
      process.stdout.write(j.toString())
    }
    console.log('\n')
  }
}

const printRightTriangleI = (n) => {
  for (let i = 0; i < n; i++) {
    for (let j = 0; j < i; j++) {
      process.stdout.write(i.toString())
    }
    console.log('\n')
  }
}

const invertedRightTriangle = (n) => {
  for (let i = n; i >= 0; i--) {
    for (let j = 0; j < i; j++) {
      process.stdout.write('#')
    }
    console.log('\n')
  }
}

const invertedRightTriangleJ = (n) => {
  for (let i = n; i >= 0; i--) {
    for (let j = 0; j < i; j++) {
      process.stdout.write(j.toString())
    }
    console.log('\n')
  }
}

const printPyramid = (n) => {
  for (let i = 0; i < n; i++) {
    for (let j = 0; j < n - i - 1; j++) {
      process.stdout.write(' ')
    }
    for (let j = 0; j < 2 * i + 1; j++) {
      process.stdout.write('#')
    }
    console.log('\n')
  }
}

const invPrintPyramid = (n) => {
  for (let i = n; i >= 0; i--) {
    for (let j = 1; j <= n - i; j++) {
      process.stdout.write(' ')
    }
    for (let j = 1; j <= 2 * i + 1; j++) {
      process.stdout.write('*')
    }
    console.log('\n')
  }
}

const printDiamond = (n) => {
  for (let i = 0; i < n; i++) {
    for (let j = 0; j < n - i; j++) {
      process.stdout.write(' ')
    }
    for (let j = 0; j < 2 * i + 1; j++) {
      process.stdout.write('*')
    }
    console.log('\n')
  }
  for (let i = n; i >= 0; i--) {
    for (let j = 1; j <= n - i; j++) {
      process.stdout.write(' ')
    }
    for (let j = 1; j <= 2 * i + 1; j++) {
      process.stdout.write('*')
    }
    console.log('\n')
  }
}

const printTriangle = (n) => {
  for (let i = 0; i < n; i++) {
    for (let j = 0; j < i + 1; j++) {
      process.stdout.write('*')
    }
    console.log('\n')
  }
  for (let i = n; i >= 0; i--) {
    for (let j = 0; j < i + 1; j++) {
      process.stdout.write('*')
    }
    console.log('\n')
  }
}

const print01Triangle = (n) => {
  let num = 0
  for (let i = 0; i < n; i++) {
    for (let j = 0; j < i + 1; j++) {
      process.stdout.write(num % 2 == 0 ? '0' : '1')
      num++
    }
    console.log('\n')
  }
}

const printCrown = (n) => {
  let spaces = n * 2 - 2

  for (let i = 0; i < n; i++) {
    for (let j = 0; j < i + 1; j++) {
      process.stdout.write(j.toString())
    }

    for (let j = 0; j < spaces; j++) {
      process.stdout.write(' ')
    }

    for (let j = i; j >= 0; j--) {
      process.stdout.write(j.toString())
    }

    console.log('\n')
    spaces -= 2
  }
}

const numsTriangle = (n) => {
  let count = 0
  for (let i = 0; i < n; i++) {
    for (let j = 0; j < i + 1; j++) {
      process.stdout.write((count++).toString())
    }
    console.log('\n')
  }
}

const alphabetTriangle = (n) => {
  for (let i = 0; i < n; i++) {
    let charSt = 65
    for (let j = 0; j < i + 1; j++) {
      process.stdout.write(String.fromCharCode(charSt++))
    }
    console.log('\n')
  }
}

const alphabetTriangleInv = (n) => {
  for (let i = n; i >= 0; i--) {
    let charSt = 65
    for (let j = 0; j < i + 1; j++) {
      process.stdout.write(String.fromCharCode(charSt++))
    }
    console.log('\n')
  }
}

const alphabetTriangleCont = (n) => {
  let charSt = 64
  for (let i = 0; i < n; i++) {
    charSt++
    for (let j = 0; j < i + 1; j++) {
      process.stdout.write(String.fromCharCode(charSt))
    }
    console.log('\n')
  }
}

const alphaBreakpointPyramid = (n) => {
  for (let i = 0; i < n; i++) {
    let charSt = 65
    for (let j = n; j > i; j--) {
      process.stdout.write(' ')
    }

    const breakPoint = (2 * i + 1) / 2
    for (let j = 1; j <= 2 * i + 1; j++) {
      process.stdout.write(String.fromCharCode(charSt))

      if (j <= breakPoint) charSt++
      else charSt--
    }

    // for (let j = n; j > i; j--) {
    //   process.stdout.write('#')
    // }
    console.log('\n')
  }
}

const descAlphaTriangle = (n) => {
  for (let i = 0; i < n; i++) {
    let char = 65 + n
    for (let j = 1; j <= i + 1; j++) {
      process.stdout.write(String.fromCharCode(--char))
    }

    console.log('\n')
  }
}

const spaceDiamond = (n) => {
  for (let i = 0; i < n; i++) {
    for (let j = 0; j < n - i; j++) {
      process.stdout.write('+')
    }
    for (let j = 0; j < 2 * i; j++) {
      process.stdout.write(' ')
    }
    for (let j = 0; j < n - i; j++) {
      process.stdout.write('+')
    }

    console.log('\n')
  }

  let spaces = n * 2 - 2
  for (let i = 0; i < n; i++) {
    for (let j = 0; j < i + 1; j++) {
      process.stdout.write('+')
    }
    for (let j = 0; j < spaces; j++) {
      process.stdout.write(' ')
    }
    for (let j = 0; j < i + 1; j++) {
      process.stdout.write('+')
    }

    spaces -= 2

    console.log('\n')
  }
}

const crownAndReflection = (n) => {
  let spaces = n * 2 - 2
  for (let i = 0; i < n; i++) {
    for (let j = 0; j < i + 1; j++) {
      process.stdout.write('+')
    }
    for (let j = 0; j < spaces; j++) {
      process.stdout.write(' ')
    }
    for (let j = 0; j < i + 1; j++) {
      process.stdout.write('+')
    }

    spaces -= 2

    console.log('\n')
  }

  for (let i = 1; i < n; i++) {
    for (let j = 0; j < n - i; j++) {
      process.stdout.write('+')
    }
    for (let j = 0; j < 2 * i; j++) {
      process.stdout.write(' ')
    }
    for (let j = 0; j < n - i; j++) {
      process.stdout.write('+')
    }

    console.log('\n')
  }
}

const printHolloSquare = (n) => {
  for (let i = 0; i < n; i++) {
    for (let j = 0; j < n; j++) {
      if (i == 0 || i == n - 1 || j == 0 || j == n - 1) {
        process.stdout.write('# ')
      } else {
        process.stdout.write('  ')
      }
    }
    console.log('\n')
  }
}

const lastPattern = (n) => {
  for (let i = 0; i < 2 * n - 1; i++) {
    for (let j = 0; j < 2 * n - 1; j++) {
      let top = i
      let left = j
      let botton = 2 * n - 2 - i
      let right = 2 * n - 2 - j

      const result = n - Math.min(Math.min(top, botton), Math.min(left, right))

      process.stdout.write(`${result} `)
    }
    console.log('\n')
  }
}

lastPattern(4)
