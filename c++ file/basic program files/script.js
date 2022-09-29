 function validate(input_str) {
    var r = /[6-9]{1}[0-9]{9}/im;

    return r.test(input_str);
}

function validateForm(event) {
    var phone_number = document.getElementById('num').value;
    if (!validate(phone_number)) {
        document.getElementById('err').classList.remove('hide');
    } else {
        document.getElementById('err').classList.add('hide');
        alert("valid phone number")
    }
    event.preventDefault();
}

document.getElementById('abc').addEventListener('submit', validateForm);