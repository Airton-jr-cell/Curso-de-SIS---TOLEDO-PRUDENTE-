var n1 = document.querySelector("#n1");
var n2 = document.querySelector("#n2");
var resultado = document.querySelector('span');

function somar() {
    if (n1.value === "" || n2.value === "") {
        alert("Preencha os dois números antes de calcular!");
    } else {
        resultado.innerHTML = parseFloat(n1.value) + parseFloat(n2.value);
    }
}

function subtrair() {
    if (n1.value === "" || n2.value === "") {
        alert("Preencha os dois números antes de calcular!");
    } else {
        resultado.innerHTML = parseFloat(n1.value) - parseFloat(n2.value);
    }
}

function limpar() {
    n1.value = "";
    n2.value = "";
    resultado.innerHTML = "";
}
