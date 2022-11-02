var className = "active";
var scrollTrigger = 60;

window.onscroll = function() {
  // We add pageYOffset for compatibility with IE.
    if (window.scrollY >= scrollTrigger || window.pageYOffset >= scrollTrigger) {
        document.getElementsByClassName("header")[0].classList.add(className);
    } else {
        document.getElementsByClassName("header")[0].classList.remove(className);
    }
};