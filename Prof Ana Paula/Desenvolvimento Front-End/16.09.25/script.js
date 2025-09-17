const botao = document.getElementById("btnvalidar");

console.log(botao);
botao.addEventListener('click', ()=>{
    
    let numero = document.getElementById("txtnumero1").value.trim();

    if(numero != '')
    {
        if (numero % 2 == 0) {
            document.getElementById("txtmensagem").innerText = "O número é par";
            document.getElementById("txtmensagem").style.color = "blue";
        } else {
            document.getElementById("txtmensagem").innerText = "O número é ímpar";
            document.getElementById("txtmensagem").style.color = "red";
        }
            
        } else
             {
            document.getElementById("txtmensagem").innerText = "insira um numero.";
            document.getElementById("txtnumero1").focus();
            document.getElementById("txtnumero1").style.backgroundColor= "green";
        }
    });




