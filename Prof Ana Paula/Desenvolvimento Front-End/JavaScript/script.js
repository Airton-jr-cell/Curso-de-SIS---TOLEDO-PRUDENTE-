      function verificarIdade() {
           let idade = document.getElementById("txtidade").value;
           if (idade >= 18) {
               alert("Já atingiu a maioridade");
           } else {
               alert("Ainda é menor de idade");
           }
        }