const botao = document.getElementById("btnvalidar");

console.log(botao);
botao.addEventListener('click', ()=>{
    // alert('botão clicado');
    let numero = document.getElementById("txtnumero1").value;
    if (numero % 2 == 0) 
        document.getElementById("txtmensagem").innerText = "O número é par";
     else 
        document.getElementById("txtmensagem").innerText = "O número é ímpar";
    });