
        function somar() {
            let numero1 = parseFloat(document.getElementById("txtnumero1").value);
            let numero2 = parseFloat(document.getElementById("txtnumero2").value);
            let resultado = numero1 + numero2;
            alert("A soma é: " + resultado);
        }

        function subtrair() {
            let numero1 = parseFloat(document.getElementById("txtnumero1").value);
            let numero2 = parseFloat(document.getElementById("txtnumero2").value);
            let resultado = numero1 - numero2;
            alert("A subtração é: " + resultado);
        }

        function dividir() {
            let numero1 = parseFloat(document.getElementById("txtnumero1").value);
            let numero2 = parseFloat(document.getElementById("txtnumero2").value);
            if (numero2 !== 0) {
                let resultado = numero1 / numero2;
                alert("A divisão é: " + resultado);
            } else {
                alert("Divisão por zero não é permitida.");
            }
        }

        function multiplicar() {
            let numero1 = parseFloat(document.getElementById("txtnumero1").value);
            let numero2 = parseFloat(document.getElementById("txtnumero2").value);
            let resultado = numero1 * numero2;
            alert("A multiplicação é: " + resultado);
        }

        