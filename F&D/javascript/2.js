var userp = 0;
const rp = 1,
    wp = 2,
    ep = 5;
userp = userp | rp | wp | ep; //given access or value use or operator
console.log(userp);
var msg = (userp & ep) ? "yes" : "no"; // to check use AND operator
console.log(msg);
console.log(userp & ep);