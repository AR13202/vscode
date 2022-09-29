var a = "abdcdef";
var b = "";
for (var i = 0; i < a.length; i++) {
    b = a[i] + b;
}
console.log(b);
console.log(a);
var d = 81;
var s = 1;
for (var i = 2; i < d; i++) {
    if (d % i == 0) {
        s = 0;
    }
}
if (s == 0) {
    console.log("not prime");
} else {
    console.log("prime");
}
var q = "asdfghjkliyurtaswacftaa";
var v = "a";
var t = 0;
for (var i = 0; i < q.length; i++) {
    if (q[i] == v) {
        t++;
    }
}
console.log(t);
var f = parseInt(prompt("enter first number: "));
var l = prompt("enter symbol: ");
var g = parseInt(prompt("enter second number: "));
switch (l) {
    case '+':
        console.log(f + g);
        break;
    case '-':
        console.log(f - g);
        break;
    case '*':
        console.log(f * g);
        break;
    case '/':
        console.log(f / g);
        break;
    default:
        console.log("enter valid input");
}