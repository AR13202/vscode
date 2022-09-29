/*let elem = document.getElementById("abc").style.border;
console.log(elem);
document.getElementById("abc").style.border="1px dotted black";
let element = document.getElementById("abc").style.border;
console.log(element);
//create a class of a tag with id
let ele = document.getElementById("abc").ClassName
*/

function inc() {
	var element = document.getElementById("abc");
	element.removeAttribute("style");
}
function incr(){
	var element = document.getElementById("abc");
	element.setAttribute("style","font-size:100px;");
}
