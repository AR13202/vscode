/*var a = 122343;
var b = 234053;
if (a % 10 == b % 10) {
    console.log(true);
} else {
    console.log(false);
}*/

/*var a = 3;
var b = 7;
var c = 2;
var d = a * b * c;
if (d < 0) {
    alert("the sign is -");
} else {
    alert("the sign is +");
}*/

/*for (var i = 1; i <= 100; i++) {
    if (i % 5 == 0 && i % 3 == 0) {
        console.log("FizzBuzz");
    } else if (i % 3 == 0) {
        console.log("Fizz");
    } else if (i % 5 == 0) {
        console.log("Buzz");
    } else {
        console.log(i);
    }
}*/

//345 = 9+16+25 = 50 -->( 25 --> 4 + 25 -> 29 --> 85 --> 99-->) approx.

/*for (var i = 1; i < 50; i++) {
    var b = true;
    for (var j = 2; j < i; j++) {
        if (i % j == 0) {
            b = false;
        }
    }
    if (b && i > 1) {
        console.log(i);
    }
}*/
/*var sum = 0;
for (var i = 1; i <= 1000; i++) {
    if (i % 5 == 0 && i % 3 == 0) {
        sum += i;
    }
}
console.log(sum);
*/
/*var n = 45;
function abc(n) {
    if (n > 100) {
        console.log("number is greater than 100");
    } else if (n >= 51 && n <= 100) {
        console.log("number is greater than 50");
    } else if (n >= 0 && n <= 50) {
        console.log("number is greater than 0");
    } else {
        console.log("number is less than zero");
    }
}
abc(n);*/

/*for (var i = 0; i < 5; i++) {
    for (var j = 0; j <= i; j++) {
        document.write("*");
    }
    document.write("<br>");
}*/
/*var expr = 'electric guitar';
switch (expr) {
    case 'piano':
        console.log('Play Beethoven');
        break;
    case 'electric guitar':
        console.log('Play Pink Floyd');
        break;
    case 'acoustic guitar':
        console.log('Play Bob Dylan');
        break;
}*/

/*for (var i = 0; i <= 15; i++) {
    if (i % 2 == 0) {
        console.log(i + " is even");
    } else {
        console.log(i + " is odd");
    }
}*/
/*function happy(n) {
    var a, b;
    var c = [];

    while (n != 1 && c[n] !== true) {
        c[n] = true;
        a = 0;
        while (n > 0) {
            b = n % 10;
            a += b * b;
            n = (n - b) / 10;
        }
        n = a;
    }
    return (n == 1);
}

var c = 5;
var n = 1;
while (c--) {
    while (!happy(n)) {
        n++;
    }
    console.log(n);
    n++;
}*/
/*var a = "hello";
var sum = 0;
for (var i = 0; i < a.length; i++) {
    sum += (a[i] - 'a');
}
print(sum);*//*
function last(a,b=0){
    var c = a.length;
    if(b==0){
        return a[c-1];
    }else if(b>=c){
        return a;
    }else{
        var d = c-b;
        var e = [];
        for(;d<a.length;d++){
            e.push(a[d]);
        }
        return e;
    }
}

console.log(last([7,9,0,-2]));
console.log(last([7,9,0,-2],3));
console.log(last([7,9,0,-2],6));
*/
/*var a = [];
for(var i=1;i<=5;i++){
    a.push(i);
}
console.log(a);*/

/*var a = [1,3,5,6,7,8];
var sum=0;
var product = 1;
for(var i=0;i<a.length;i++){
    sum+=a[i];
    product*=a[i];
}
console.log(sum);
console.log(product);*/

/*var a = "THE QUICK BROWN FOX";
function change(a){
    var c = ""
    for(var i=0;i<a.length;i++){
        if(i==0 || a[i-1]==' '){
            c+=a[i].toLowerCase();
        }else{
            c+=a[i];
        }
    }
    return c;
}
console.log(change(a));*/

/*var a = 345;
var b = 456;
if(a>b){
    console.log(a);
}else{
    console.log(b);
}*/

/*var a = 45;
var b = 45;
var c = 45;
if(a==b && b==c){
    console.log("equilateral triangle");
}else if((a==b && a!=c)||(b==c && b!=a)||(a==c && b!=c)){
    console.log("isosceles triangle");
}else{
    console.log("scalene triangle");
}*/

/*var a = ["Red", "Green", "White", "Black"];
var b = "";
var c = "";
for(var i=0;i<a.length;i++){
    if(i==a.length-1){
        b+=a[i];
        c+=a[i];
    }else{
        b+=a[i]+",";
        c+=a[i]+"+";
    }
}
console.log(b);
console.log(b);
console.log(c);*/

/*var arr1=[3, 'a', 'a', 'a', 2, 3, 'a', 3, 'a', 2, 4, 9, 3];
var a =1;
var b = 0;
var c;

function frequencyarr(arr,a,b,c){
    for(var i=0;i<arr.length;i++){
        for(var j=i;j<arr.length;j++){
            if(arr[i]===arr[j]){
                b++; 
            }
            if(a<b){
                a=b;
                c=arr[i];
            }
        }
        b=0;
    }
    return c + " ( "+a+" times )";
}
console.log(frequencyarr(arr1,a,b,c));*/
/*var a = "abcdefghijklmnopqrst";
function f1(a){
    var vowels=0;
    var constonant=0;
    for(var i=0;i<a.length;i++){
        if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'||
            a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U'){
            vowels++;
        }else{
            constonant++;
        }
    }
    console.log(vowels);
    console.log(constonant);
}
f1(a);
*/

/*var a = 'dog';
function f3(a){
    var b = [];
    for(var i=0;i<a.length;i++){
        var t="";
        for(var j=i;j<a.length;j++){
            t+=a[j];
            b.push(t);
        }
    }
    return b;
}
console.log(f3(a));*/

/*var radius=parseInt(prompt("enter radius: "));
function area(r) {
    return 3.14*r*r;
}
function perimeter(r){
    return 2*3.14*r;
}
console.log(area(radius));
console.log(perimeter(radius));*/
/*
var student = {
name : "David Rayy",
sclass : "VI",
rollno : 12 };
console.log(Object.keys(student).length);*/
/*
var library = [
   {
       author: 'Bill Gates',
       title: 'The Road Ahead',
       readingStatus: true
   },
   {
       author: 'Steve Jobs',
       title: 'Walter Isaacson',
       readingStatus: true
   },
   {
       author: 'Suzanne Collins',
       title:  'Mockingjay: The Final Book of The Hunger Games',
       readingStatus: false
   }];
function f4(a) {
    for(var i=0;i<a.length;i++){
        var b = [];
        b.push(a[i].title);
        b.push(a[i].author);
        b.push(a[i].readingStatus);
        console.log(b);
    }
}
f4(library);*/

/*var obj={
    radius: 5,
    height: 5
};
function f5(a){
    return (3.14*a.radius*a.radius*a.height).toFixed(4);
}
console.log(f5(obj));*/
/*var student = {
name : "David Rayy",
sclass : "VI",
rollno : 12 };
var li=[];
for(i in student){
    li.push(i)
}
console.log(li.join(","));*/
/*var a = [1,2,3,4,5,6,7,8,4,2,4,6,8,9];
function find(a,b){
    for(var i=0;i<b.length;i++){
        if(b[i]==a){
            return false;
        }
    }
    return true;
}
function dup(a){
    var b = [];
    for(var i=0;i<a.length;i++){
        for(var j=i+1;j<a.length;j++){
            if(a[i]==a[j] && find(a[i],b)){
                b.push(a[i]);
                console.log(a[i]);
            }
        }
    }
}
dup(a);*/
/*function m(a){
  var b = parseInt(a);
  var c = a-b;
  c = c.toFixed(2);
  c*=100;
  if(b>c){
    console.log(b);
  }else{
    console.log(c);
  }
}
m(32.45);
m(301.67);*/
/*function graterpart(x){
  if(x<0){
    alert("Number can not be null");
  }

  else{
    var x;
    var y;
    y= parseFloat(x);
    var remainder = (y-Math.floor(y))*10000;
    if(y>remainder){
      alert(y);
    } else{
      alert(remainder);
    }
  }
}
graterpart(32.45);*/
/*function find(arr,a){
    b = [];
    for(var i=0;i<arr.length;i++){
        for(var j=i+1;j<arr.length;j++){
            var c = [];
            if(arr[i]+arr[j]==a){
                c.push(arr[i]);
                c.push(arr[j]);
                b.push(c);
            }

        }
    }
    console.log(b);
}
find([2,3,4,6,8,5,3],6);*/
/*function sumarr(arr,a,b){
    var s=0;
    for(var i=a;i<=b;i++){
        s+=arr[i];
    }
    return s;
}
function maxsum(arr){
    var s=0;
    for(var i=0;i<arr.length;i++){
        for(var j=i+1;j<arr.length;j++){
            var su = sumarr(arr,i,j);
            if(su>s){
                s=su;
            }
        }
    }
    console.log(s);
}
maxsum([-2,-3,4,-1,-2,1,5,-3]);*/
/*function f(arr, n = 100) {
    let t = (n * (n+1)) / 2;
    let s = 0;
    
    for(let i of arr){
        s += i;
    }
    
    return t - s;
}
let arr = Array.from( Array(101).keys())
arr.shift();
arr.splice(34, 1)
let m = f(arr, 100);
console.log(m);*/
/*function fib(){
    var a=1;
    var b=1;
    var f;
    for(var i=3;i<15;i++){
        var c = a+b;
        a = b;
        b = c;
    }
    f = a+b;
    console.log(f);
}
fib();*/
/*let n = "301.71";
const a = n.split(".");
function ans(arr){
var m=0;
for(var i=0;i<arr.length;i++){
    if(arr[i]>m){
        m=parseInt(arr[i]);
    }
}
console.log(m);
}
ans(n);*/
/*function shift(n) {
    let j = 0;
    for (let i = 0; i < n.length; i++) {
        if (n[i] < 0) {
            if (i != j) {
                let t = n[i];
                n[i] = n[j];
                n[j] = t;
            }
            j++;
        }
    }
    var er = [];
    for (let i = 0; i < n.length; i++){
        er.push(n[i]);
    }
    console.log(er);
}


let a = [3, -4, 6, -8, 2, -1, 3, 6, -8, 32, -1, 4];
shift(a);*/
/*var a = [ -2, -3, 4, -1, -2, 1, 5, -3 ];
function m(a){
    var x = 0;
    var c = 0;
    for (var i = 0; i < a.length; i++)
    {
        c = c + a[i];
        if (x < c)
            x = c;
        if (c < 0)
            c = 0;
    }
    return x;
}
console.log(m(a));*/
/*var a = [ -2, -3, 4, -1, -2, 1, 5, -3 ];
function mxsm(a)
{
    var mx = 0;
    var crsm = 0;
    for (var i = 0; i < a.length; i++)
    {
        crsm = crsm + a[i];
        if (mx < crsm)
            mx = crsm;
        if (crsm < 0)
            crsm = 0;
    }
    return mx;
}
console.log(mxsm(a));*/
/*let obj=[{name:"u", age: 11},
{name:"y", age: 10}]

function printName(){
    console.log("print name started")
    setTimeout (()=>{
        obj.forEach((data)=>{
            console.log(data.name)
        })
        console.log("print name ended")
    },5000);
}
function insertData(newdata){
    console.log("New name started")
    setTimeout(()=>{
        obj.push(newdata);
    },8000);
    console.log("insert new ended")
}

insertData({bane:"r",age:30});
printName();*/
/*const input = [
    {
    name: 'John',
    age: 13
    },
    {
    name: 'Mark',
    age: 56,
    },
    {
    name: 'Rachel',
    age: 45,
    },
    {
    name: 'Nate',
    age: 67,
    },
    {
    name: 'Jeniffer',
    age: 65,
    }
    ];
    var max_age=0;
    var min_age=input[0].age;
    for(var i=0;i<input.length;i++){
        if(input[i].age>max_age){
            max_age=input[i].age;
        }
        if(input[i].age<min_age){
            min_age=input[i].age;
        }
    }
    var arr=[];
    arr.push(min_age);
    arr.push(max_age);
    arr.push(max_age-min_age);
    console.log(arr);
*/
/*const input = 'George Raymond Richard Martin';
var a='';
for(var i=0;i<input.length;i++){
    if(i==0){
        a+=input[i]
    }else if(input[i]==' ' && (i+1)<input.length){
        a+=input[i+1];
    }
}
console.log(a);*/
/*var a = [1,,3];
console.log(a);*/
/*const input = [ 1, -4, 12, 0, -3, 29, -150];
var positive_sum = 0;
for(var i=0;i<input.length;i++){
    if(input[i]>0){
        positive_sum+=input[i];
    }
}
console.log(positive_sum);*/
/*const input = [ 1, 2, 3, 4, 5 ];
for(var i=0;i<input.length;i++){
    input[i]*=input[i];
}
console.log(input);*/
/*var a = "Scaler";
var result = a.substring(2, 4);
console.log(result);*/

/*const input = [12, 46, 32, 64];
var mean=0;
for(var i=0;i<input.length;i++){
    mean+=input[i];
}
mean/=input.length;
console.log("mean: "+mean);
input.sort;
if(input.length%2!=0){
    console.log(input[(input.length+1)/2]);
}else{
    var a = input[input.length/2];
    console.log("median: "+a);
}*/
/*const input = 'Every developer likes to mix kubernetes and javascript';
var a = '';
var q = '';
for(var i=0;i<input.length;i++){
    if(input[i]==' ' || i==input.length-1){
        if(q.length>4){
            a += q[0]+(q.length-2)+q.length-1 + ' ';
        }else{
            a+=q;
        }
        q='';
    }else{
        q+=input[i];
    }
}
console.log(a);*/
/*const input=[12, 46, 32, 64];
input.sort;
var sum=0;
for(var i=0;i<input.length;i++){
    sum+=input[i];
}
console.log("mean: "+sum/input.length);
var median=0;
if(input.length%2==0){
    median=input[(input.length/2)];
}
else{
    median=input[input.length/2];
}
console.log("median: "+median);*/
/*input.split(' ').map(function(word) {
    if(word.length >= 4) {
      return createNumeronym(word);
    }
    return word;
}).join(' ');
input.split(' ').map(word => word.length >= 4 ? createNumeronym(word) : word).join(' ');*/
/*const input = [['a', 'b', 'c'],['c', 'd', 'f'],['d', 'f', 'g'],];
var a={};
for(var i=0;i<input.length;i++){
    for(var j=0;j<input[i].length;j++){
        if(a[input[i][j]]>=0){
            a[input[i][j]]++;
        }
        else{
        a[input[i][j]]=1;
        }
    }
}
console.log(a);*/
/*const input = 'Every developer likes to mix kubernetes and javascript';
var r = input.split(" ").map(function(a){
    if(a.length >= 4){
        return a[0] + (a.length - 2) + a[a.length - 1];
    }
    return a;
})
console.log(r.join(" "));*/
/*const input = [12, 46, 32, 64];
input.sort();
r = {"mean": 0, "median": 0}
r["mean"] = input.reduce((input, y) => input + y) / input.length;
r["median"] = input[(input.length + input.length % 2) / 2 - 1];
console.log(r);
*/
function getAttributes()
{
 var a = document.getElementById("w3r").href;
 console.log('The value of the href attribute of the link is : '+a);
 var b = document.getElementById("w3r").hreflang;   
 console.log('The value of the hreflang attribute of the link is : '+b);
 var c = document.getElementById("w3r").rel; 
 console.log('The value of the rel attribute of the link is : '+c);
 var d = document.getElementById("w3r").target; 
 console.log('The value of the taget attribute of the link is : '+d);
 var e = document.getElementById("w3r").type; 
  console.log('The value of the type attribute of the link is : '+e);  
}