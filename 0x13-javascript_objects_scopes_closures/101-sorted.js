#!/usr/bin/node

/* script that imports a dictionary of occurrences */

const dict = require('./101-data').dict;

const dictnew = {};
for (const m in dict) {
  if (dict[m] in dictnew) {
    dictnew[dict[m]].push(m);
  } else {
    dictnew[dict[m]] = [m];
  }
}
console.log(dictnew);
