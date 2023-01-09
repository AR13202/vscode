var className = "active";
var scrollTrigger = 60;

window.onscroll = function() {
    if (window.scrollY >= scrollTrigger || window.pageYOffset >= scrollTrigger) {
        document.getElementsByClassName("header")[0].classList.add(className);
    } else {
        document.getElementsByClassName("header")[0].classList.remove(className);
    }
};
var slideImg = document.getElementById("slideImg");
var images = new Array(
    "./assets/bg01.jpg",
    "./assets/bg02.jpg",
    "./assets/bg03.jpg",
    "./assets/bg04.jpg",
);
var len = images.length;
var i=0;
function slider(){
    if(i > len-1){
        i = 0;
    }
    slideImg.src = images[i];
    i++;
    setTimeout('slider()',5000);
}