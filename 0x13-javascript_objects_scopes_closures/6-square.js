#!/usr/bin/node

const supSquare = require('./5-square');

class Square extends supSquare {
  charPrint (c) {
    if (c == null) {
      c = 'X';
    }
    for (let k = 0; k < this.width; k++) {
      console.log(c.repeat(this.width));
    }
  }
}

module.exports = Square;
