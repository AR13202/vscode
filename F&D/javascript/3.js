var a = 5;
if (a < 5) {
    console.log("smaller");
} else if (a == 5) {
    console.log("equal");
} else {
    console.log("larger");
}
var x = Math.round(Math.random() * 20);
switch (x) {
    case 1:
        console.log(1);
        break;
    case 6:
        console.log(6);
        break;
    case 7:
        console.log(7);
        break;
    case 9:
        console.log(9);
        break;
    case 15:
        console.log(15);
        break;
    case 20:
        console.log(20);
        break;
    default:
        console.log(x);
}
var c = 2343;
if (!(c & 1)) {
    console.log("even");
} else {
    console.log("odd");
}
var d = 324;
if (d < 0) {
    console.log("-ve");
} else {
    console.log("+ve");
}
var q = 23,
    w = 45,
    e = 23;
if (q == e && e == w) {
    console.log("equilateral");
} else if (q == e || w == e || q == w) {
    console.log("isosceles");
} else {
    console.log("scalene");
}