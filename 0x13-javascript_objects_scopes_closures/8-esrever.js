#!/usr/bin/node
exports.esrever = function (list) {
  let length = list.length - 1;
  let k = 0;
  while ((length - k) > 0) {
    const aux = list[length];
    list[length] = list[k];
    list[k] = aux;
    k++;
    length--;
  }
  return list;
};
