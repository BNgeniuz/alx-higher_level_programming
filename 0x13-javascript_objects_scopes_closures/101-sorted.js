#!/usr/bin/node
const dict = require('./101-data').dict;
const dKeys = Object.keys(dict);
const values = Object.values(dict);
let matched;
const result = {};
// loop over the values
for (let k = 0; k < values.length; k++) {
  result[JSON.stringify(values[k])] = [];
  matched = dKeys.filter(key => dict[key] === values[k]);
  matched.forEach(item => result[JSON.stringify(values[i])].push(item));
}
console.log(result)
