/*
var a = parseInt(prompt("Enter a Number: "));
function reverse(a) {
	var b=0;
	while(a>0){
		var c = a%10;
		b=b*10+c;
		a= (a-c)/10;
	}
	console.log(b);
}
reverse(a);
*/
/*
var b = prompt("Enter a String: ");
function palin(b){
	var c="";
	for(var i=b.length-1;i>=0;i--){
		c+=b[i];
	}
	console.log(b==c);
}
palin(b);
*/
/*
var c = prompt("enter a string: ");
function combination(c){
	for(var i=0;i<c.length;i++){
		for(var j=i;j<c.length;j++){
			console.log(c.substring(i,j+1));
		}
	}
}
combination(c);
*//*
var d = prompt("enter a string");
function sort_string(d){
	var e = [];
	for(var i=0;i<d.length;i++){
		e.push(d[i]);
	}
	e.sort();
	var f="";
	for(var i=0;i<d.length;i++){
		f+=e[i];
	} 
	console.log(f);
}
sort_string(d);
*//*
var e = prompt("enter a string: ");
function cap(e){
	console.log(e.toUpperCase());
}
cap(e);
*//*
var f = prompt("enter a string: ");
function w(f){
	var arr = f.split(" ");
	var max=arr[0];
	var len=arr[0].length;
	for(var i=1;i<arr.length;i++){
		if(arr[i].length>len){
			max = arr[i];
			len = arr[i].length;
		}
	}
	console.log(max);
}
w(f);
*//*
var g = prompt("enter a string: ");
function vowels(g){
	var count=0;
	for(var i=0;i<g.length;i++){
		switch(g[i]){
			case 'a':
				count++;
				break;
			case 'e':
				count++;
				break;
			case 'i':
				count++;
				break;
			case 'o':
				count++;
				break;
			case 'u':
				count++;
				break;
		}
	}
	console.log(count);
}
vowels(g);
*//*
var h = parseInt(prompt("enter a Number"));
function prime(h){
	var q = true;
	for(var i=2;i<h;i++){
		if(h%i==0){
			q=false;
			break;
		}
	}
	console.log(q)
}
prime(h);
*/
/*
let ar = {
	id:1,
	"name":"abc"
};
function fx9(ar){
	console.log(typeof(ar));
}
fx9(ar);
*//*
var t = parseInt(prompt("enter row and column: "));
function identity(t){
	for(var i=0;i<t;i++){
		console.log("row: " + i);
		for(var j=0;j<t;j++){
			if(i==j){
				console.log(1);
			}else{
				console.log(0);
			}
		}
	}
} 
identity(t);
*/