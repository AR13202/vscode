var a = prompt("input a string: ");

/*function is_string(a) {
	if(typeof(a)=="string"){
		console.log("true");
	}else{
		console.log("false");
	}
	*/
	/*
	var b=true;
	for(var i=0;i<a.length;i++){
		if(a[i]>=0 && a[i]<=9){
			b=false;
		}else{
			b=true;
			break;
		}
	}
	console.log(b);
}

is_string(a);
*/
//2
/*function check(a){
	if(a.length==0){
		console.log("length is zero");
	}else{
		console.log("length is not zero");
	}
}
check(a);
*/
/*
//3
function splitstr(a){
	var b = [];
	var c = "";
	for(var i=0;i<a.length;i++){
		if(a[i]==' '){
			b.push(c);
			c="";
			
		}else if((i+1)==a.length){
			c+=a[i];
			b.push(c);
		}else{
			c = c+a[i];
		}
	}
	console.log(b);
}
splitstr(a);
*/
/*
//4
var b = prompt("enter a number: ");
function specified(a,b){
	var c ="";
	for(var i=0;i<b;i++){
		c+=a[i];
	}
	console.log(c);
}
specified(a,b);
*/
/*
//5
function abbrev(a){
	var c="";
	for(var i =0;i<a.length;i++){
		c+=a[i];
		if(a[i]==" "){
			c+=a[i+1];
			break;
		}
	}
	console.log(c);
}
abbrev(a);
*/
/*
function encryte(a){
	var c="";
	for(var i=0;i<4;i++){
		c+=a[i];
	}
	c+=".....";
	var v=a.length;
	for(var i=0;i<a.length;i++){
		if(a[i]=="@"){
			c+=a[i];
			v=i;
		}
		if(i>v){
			c+=a[i];
		}
	}
	console.log(c);
}
encryte(a);
*/
/*
function paramterise(a){
	var c="";
	for(var i=0;i<a.length;i++){
		if(a[i]>='A' && a[i]<='Z'){
			c+=a[i].toLowerCase();
		}else if(a[i]==" "){
			c+="-";
		}else{
			c+=a[i];
		}
	}
	console.log(c);
}
paramterise(a);
*/
/*
function capf(a) {
	var c="";
	for(var i=0;i<a.length;i++){
		if(i==0){
			c+=a[i].toUpperCase();
		}else{
			c+=a[i];
		}
	}
	console.log(c);
}
capf(a);
*/
/*
function cap(a) {
	var c="";
	for(var i=0;i<a.length;i++){
		if(a[i-1]==" " || i==0){
			c += a[i].toUpperCase();
		}
		c+=a[i];
	}
	console.log(c);
}
cap(a);
*/
function last(a){
	var c="";
	for(var i=0;i<a.length;i++){
		if(a[i]>='A' && a[i]<='Z'){
			c+= a[i].toLowerCase();
		}else if(a[i]>='a' && a[i]<='z'){
			c+= a[i].toUpperCase();
		}
	}
	console.log(c);
}
last(a);